#include <stdio.h>
#include <cs50.h>
#include <string.h>

// TODO: add the function signature for customstrcmp
bool customstrcmp(char* string1, char* string2);

int main(void){
    printf("\nString 1?: ");
    char* string1 = GetString();
    printf("\nString 2?: ");
    char* string2 = GetString();

    bool areEqual = customstrcmp(string1, string2);

    if (areEqual){
        printf("\nBingo! The strings are equal!\n");
    } else {
        printf("\nThe strings are not equal!\n");
    }
}

/**
 * customstrcmp
 * iterates through two strings, character by character
 * returns true if they are exactly the same, otherwise returns false
 */
// TODO: implement customstrcmp here

bool customstrcmp(char* string1, char* string2)
{
    if(string1 == NULL || string2 == NULL) //check if strings exists
    {
       return false; 
    }
    else 
    {
        for (int i = 0, n = strlen(string1); i < n; i++)
        {
            if(*(string1 + i) == *(string2 + i)) // the ith character in the strings
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false; //always needs to return something if the other conditions fails
    }
}
