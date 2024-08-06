#include <stdio.h>
 
int main(int argc, char *argv[])
{
    int table[4], i;
    
    printf("Adress of the table: %p\n\n", table);

    table[0] = 10;
    printf("Case 1: %d\n", table[0]);
    table[1] = 23;
    printf("Case 2: %d\n", *(table + 1));
    table[2] = 505;
    printf("Case 3: %d\n", table[2]);
    table[3] = 8;
    printf("Case 4: %d\n\n", table[3]);
    
    printf("First value of the table: %d\n\n", *table);
    
    i = 0;
    while(i < 4)
    {
        printf("Value: %d\n", table[i]);
        i++;
    }
 
    return 0;
}