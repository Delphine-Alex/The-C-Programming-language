#include <stdio.h>

int main(int argc, char *argv[])
{

  int choice;

  printf("=== Menu ===\n");
  printf("1. BBQ Beef\n");
  printf("2. BBQ Pork\n");
  printf("3. Bibimbap Beef\n");
  printf("4. Bibimbap Pork\n");
  printf("Votre choix\n");

  scanf("%d", &choice);

  switch (choice)
  {
  case (1):
    printf("You choose BBQ Beef\n");
    break;
  case (2):
    printf("You choose BBQ Pork\n");
    break;
  case (3):
    printf("You choose Bibimbap Beef\n");
    break;
  case (4):
    printf("You choose BBQ Pork\n");
    break;
  default:
    printf("You're not hungry\n");
    break;
  }
  
  return 0;
}