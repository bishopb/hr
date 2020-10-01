# sensible defaults for an insane world
CC := clang
CFLAGS := -Wall -g
LD := clang
LDFLAGS := -lc

hr: usage.c version.c hr.o
	$(LD) $(LDFLAGS) -o hr hr.o

# builds the version, based on changes to things we care about
version.c: hr.c usage.txt
	echo "/** Created on $(shell date) */" > version.c
	echo "#define VERSION (\"$(shell git describe --abbrev=4 --dirty --always --tags)\")" >> version.c

# builds the command line argument processor from the usage definition
usage.c: docopt.c/docopt_c.py usage.txt
	python docopt.c/docopt_c.py -o usage.c usage.txt

# downloads the DocOpt Python C generator
# @see https://github.com/docopt/docopt.c
docopt.c/docopt_c.py:
	rm -rf docopt.c
	git clone https://github.com/docopt/docopt.c.git

# now all the phony automation targets
.PHONY: clean pristine
clean:
	rm -rf usage.c version.c hr.o hr

pristine: clean
	rm -rf docopt.c
