#include <stdio.h>
#include <cs50.h>

int main(void)
{
int s = 65;
int* t = &s;

char c = 'I'; // I
char N = s + 'P' - 'A'; // P
char B = *t - s + N + 2; // R --> 80 + 2
char E = &s - t + 78; // N
char J = *t + 19; // T
char I = N + 'A' - s - 1; // O --> remember N is now 80
char O = 347/5; // E

printf("%c%c%c%c%c%c%c\n", (char) N, (char) I, (char) c, (char) E, (char) J, (char) O, (char) B);  
// prints out POINTER

}
