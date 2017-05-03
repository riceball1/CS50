/** 
* Initals More Comfortable Details: 
* http://docs.cs50.net/problems/initials/more/initials.html
**/

// declare libraries
#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>



// setup main
int main(void) 
{
    string name;
    // prompt user for their name
    do
    {
        name = get_string();  // prompts for string
    }
    while(name[0] == '\0');  // checks if empty
    // output
    // print initals with no spaces/periods and in Captialized letters 
    // followed by \n
    int n = strlen(name);
    // loops over length of string
    for(int i = 0; i < n; i++)
    {
        // uses logical or to determine if first char is not a space
        // second condition checks if current char is not a space, and previous char is a space
        if((!isspace((char) name[i]) && ((char) name[i] == (char) name[0])) || (!isspace((char) name[i]) && isspace((char) name[i - 1]))) 
        {
           printf("%c", (char) toupper(name[i]));
        }
    }
    
    printf("\n");
    return 0;
}