/**
 * CS50 Study:
 * Implement strchr(), a standard function that returns 
 * a substring of a C string that starts with a given character. 
 * If the character is not in the string, it should return NULL.
 */ 

#include <stdio.h>
#include <cs50.h>
#include <string.h>

//prototype for substring function
string substring (string words, char letter);
string substr = NULL;

int main(void)
{
    printf("String: ");
    string s = GetString();
    
    printf("Character: ");
    char letter = GetChar();
    
    printf("Looking for substring...\n");
    // add function
    substring(s, letter);
    
    printf("Substring: %s\n", substr);

}

// substring function
string substring (string words, char letter)
{
    
    if (strchr(words, letter)) // check if true
    {
        return substr = strchr(words, letter);
    }
    else
    {
        return NULL;
    }
}
