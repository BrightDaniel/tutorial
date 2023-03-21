#include <stdio.h>
/**
*main - A program to accept input from user and display
*       same in an array form
*/

int main(void) {
  int project[12];
  int i;
  
  printf("Kindly Enter your alx project scores for the past 12 months: \n");
  
    for (i = 0; i < 12; i++)
      {
      scanf(" %d\n", &project[i]);
      }

    for (i = 0; i < 12; i++)
      {
        printf("%d", project[i]);
        printf(",");
    }
  
  
}
