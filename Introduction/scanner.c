#include <stdio.h>

int main(int argc, char *argv[])
{
  int age; 
  
  printf("How old are you? ");
  scanf("%d", &age); 
  printf("Ah ! You have %d years!\n\n", age);
       
  return 0;
}