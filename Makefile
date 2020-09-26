# sensible defaults for an insane world
CC ?= c99
CCFLAGS ?= -Wall -g
LD ?= c99
LDFLAGS ?= -lc

hr: usage.c version.c hr.o
	$(CC) $(CFLAGS) -c hr.c
	$(LD) $(LDFLAGS) -o hr hr.o

# builds the version, based on changes to things we care about
version.c: hr.c usage.txt
	echo "/** Created on $(shell date) */" > version.c
	echo "const char VERSION[] = \"$(shell git describe --abbrev=4 --dirty --always --tags)\";" >> version.c

# builds the command line argument processor from the usage definition
usage.c: docopt.c usage.txt
	python docopt.c/docopt_c.py -o usage.c usage.txt

# downloads the DocOpt Python C generator
# @see https://github.com/docopt/docopt.c
docopt.c:
	rm -rf docopt.c
	git clone https://github.com/docopt/docopt.c.git

# now all the phony automation targets
.PHONY: clean pristine
clean:
	rm -rf usage.c version.c hr.o

pristine: clean
	rm -rf docopt.c
