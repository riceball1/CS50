/**
* Resource on swap functions:
* http://www.cs.utsa.edu/~wagner/CS2213/swap/swap.html
*/

#include <cs50.h>
#include <stdio.h>

// prototype declared
void swap(int* a, int* b);

// swapping using pointers
int main(void)
{
  int x = 1;
  int y = 2;
  printf("x is %i\n", x);
  printf("y is %i\n", y);
  printf("Swapping...\n");
  swap(&x, &y);
  printf("Swapped!\n");
  printf("x is %i\n", x);
  printf("y is %i\n", y);
}

// function for swapping

void swap (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
