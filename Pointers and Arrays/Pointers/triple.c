#include <stdio.h>

void triple(int *number);

int main(int argc, char *argv[])
{
  int value;
  
  value = 5;
  triple(&value);

  printf("%d\n", value);
    
  return 0;
}

void triple(int *number)
{
  *number *= 3;
}