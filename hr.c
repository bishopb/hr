/**
Copyright 2020 Bishop Bettini

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#include "usage.c"
#include "version.c"

int main(int argc, char *argv[]) {
  DocoptArgs args = docopt(argc, argv, 1, VERSION);
  /*
  process arguments

  # bad/vacuous arg check
  if the width is negative, exit failure
  if the width is zero, exit success

  # default setting
  if the width isn't set, calculate from term
  if the start char isn't set, default to a ''
  if the repeat char isn't set
    if the locale is utf-8, use a UTF-8 box drawing dash
    otherwise use the ANSI -
  if the finish char isn't set, default to a ''
  if the new line char isn't set
    if the environment is known, default to the environment's
    else default to \n

  # meat
  output the start char
  for (i = 0; i < width; i++) {
    output the repeat character
  }
  output the finish char
  output the newline char
  */
  return EXIT_SUCCESS;
}
