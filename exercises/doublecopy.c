/** 
* Write a program that prompts the user for a string, and then then echoes back a "double" copy of the string.
* The point of this exercise is to practice using malloc to make a string by allocating memory from the heap. 
* So make sure you actually create a chunk of memory that can hold twice the amount as the input string, 
* and then fill that memory, and then print the resulting string.
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Whaddaya say, kid?\n");
    // get line of text
    string input = GetString();
    // check if input exists
     if (input == NULL)
    {
        return 1;
    }
    
    // copy string twice
    
    string inputstr = malloc((strlen(input) + 1) * sizeof(char));
    
    if(inputstr == NULL)
    {
        free(input); // free memory used by input
        return 1;
    }
    
    for (int i = 0, n = strlen(input); i <= (n * 2); i++)
    {
        
        inputstr[i] = input[i];
    }

    
    // print output
    printf("%s%s\n", inputstr, inputstr);
    
    
    // free memory from malloc
    free(input);
    
}
