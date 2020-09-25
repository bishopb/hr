/*
copyright blurb - MIT

include files
*/

int main(int argc, char **argv) {
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
  exit(EXIT_SUCCESS);
}
