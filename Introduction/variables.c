#include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOfLives = 5, level = 1; 
  
  printf("You have %d lives and you are level %d\n", numberOfLives, level);
  printf("**** B A M ****\n");    
  numberOfLives = 4;
  printf("Oh sorry, you only have %d lives left now!\n\n", numberOfLives);
  
  return 0;
}
