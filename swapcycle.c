/**
* swapCycle function, which takes three inputs, and swaps them around in a cycle, like rock-paper-scissor
*/

#include <cs50.h>
#include <stdio.h>

// TODO: declare the signature for the swapCycle function.
void swapCycle(int* a, int* b, int* c);

int main(void)
{
    int x = 1;
    int y = 2;
    int z = 3;

    printf("Before swap:\n");
    printf("x is %i \ny is %i \nz is %i\n", x, y, z);

    printf("Swapping...\n");

    // TODO: call the swapCycle function
    swapCycle(&x, &y, &z);

    printf("After swap:\n");
    printf("x is %i \ny is %i \nz is %i\n", x, y, z);
}

// TODO: implement the swapCycle function

// Apparently correct way of "cycling" the pointers
void swapCycle(int* a, int* b, int* c)
{
    int temp1 = *a;
    int temp2 = *c;
    *a = *b;
    *b = temp2;
    *c = temp1;
}
