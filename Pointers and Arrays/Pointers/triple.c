#include <stdio.h>

void triple(int *triple)
{
  // int *triple = &number
  printf("3. The value (adress of number) is: %p\n", triple);
  printf("4. The value of the variable is: %d\n\n", *triple);
  *triple *= 3;
}

int main()
{
    int number = 5;
    printf("1. The adress of the variable is: %p\n\n", &number);

    int *PointeurNumber = &number;
    printf("2. The value of PointeurNumber is: %p\n", PointeurNumber);
    printf("3. The adress of PointeurNumber is: %p\n\n", &PointeurNumber);
    
    triple(&number);
    printf("5. Triple of 5 is %d\n", number);
    return 0;
}