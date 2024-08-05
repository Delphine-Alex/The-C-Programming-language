#include <stdio.h>

int main(int argc, char *argv[])
{
  int firstNumber, secondNumber, result; 
  
  printf("Enter a number: ");
  scanf("%d", &firstNumber);

  printf("Enter a second number: ");
  scanf("%d", &secondNumber);

  result = firstNumber + secondNumber;
  printf("\nResult: %d\n", result);
       
  return 0;
}