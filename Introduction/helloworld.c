/*
Below are preprocessor directives.
These lines allow adding files to the project,
files that we call libraries.
Thanks to these libraries, we will have ready-made functions
to display, for example, a message on the screen.
*/

#include <stdio.h>

/*
Below, you have the main function of the program, called main.
All programs start with this function.
Here, my function simply displays Hello world! on the screen.
*/

int main(int argc, char *argv[])
{
  printf("Hello world!\n"); // This instruction displays Hello world! on the screen
  return 0; // The program returns the number 0 and then stops
}
