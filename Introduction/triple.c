#include <stdio.h>

int triple(int triple)
{
  // int triple = number
  printf("2. The number is: %d\n", triple);
  printf("3. The adress is: %p\n\n", &triple);

  int resultat = 3 * triple;
  printf("4. The adress of the result is: %p\n\n", &resultat);
  
  return resultat;
}

int main()
{
  int number, finalTriple;
    
  number = 5;
  printf("1. The adress is: %p\n\n", &number);

  finalTriple = triple(number);
  printf("5. The final number is: %d\n", finalTriple);
  printf("6. The adress of the final number is : %p\n", &finalTriple);
}