#include <stdio.h>

void evenNumber(int *table, int sizeTable);

int sumTable(int *table, int sizeTable);

double averageTable(int *table, int sizeTableau);
 
int main(int argc, char *argv[])
{
    int table[4] = {10, 15, 3, 34};
    
    evenNumber(table, 4);
    printf("Sum of the table: %d\n", sumTable(table, 4));
    printf("Average of the table: %f\n", averageTable(table, 4));
 
}

void evenNumber(int *table, int sizeTable)
{
    int i;
    
    i = 0;
    while(i < 4)
    {
        if (table[i] % 2 == 0)
        {
            printf("%d is a even number!\n", table[i]);
        }
        i++;
    }
}

int sumTable(int *table, int sizeTable){
    int i, sum;
    
    i = 0, sum = 0;
    while(i < 4)
    {
        sum += table[i];
        i++;
    }
    return sum;
}

double averageTable(int *table, int sizeTable)
{
    int i, somme;
    
    i = 0, somme = 0;
    while(i < 4)
    {
        somme += table[i];
        i++;
    }
    return (double)somme/(double)sizeTable;
}