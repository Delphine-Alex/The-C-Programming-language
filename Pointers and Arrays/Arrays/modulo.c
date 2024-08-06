#include <stdio.h>

void evenNumber(int *table, int sizeTable);
 
int main(int argc, char *argv[])
{
    int table[4] = {10, 15, 3, 34};
    
    evenNumber(table, 4);
 
}

void evenNumber(int *table, int sizeTable)
{
    int i;
    
    i = 0;
    while(i < 4)
    {
        if (table[i] % 2 == 0)
        {
            printf("%d\n", table[i]);
        }
        i++;
    }
    
}