#include <stdio.h>

int main(int argc, char *argv[])
{
  int age;

  age = 10;
  printf("The variable age is: %d\n", age);
  printf("The address of the variable age is: %p\n", &age);
    
  int *pointerToAge = &age;
  printf("The variable pointerToAge is: %p\n", pointerToAge);
  printf("The address of the variable pointerToAge is: %p\n", &pointerToAge);
  printf("The value at the address stored in pointerToAge is: %d\n", *pointerToAge);
    
  return 0;
}
