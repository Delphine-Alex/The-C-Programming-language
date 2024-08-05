#include <stdio.h>

int main(int argc, char *argv[])
{
  int age = 20;
  int adult;
    
  adult = age == 18;
  printf("Adult : %d\n", adult);

  return 0;
}