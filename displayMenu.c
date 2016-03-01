/** displayMenu.c
* uses fgets to grab external file exampleMenu.txt
* reads lines from external file to be displayed in displayMenu.c
*/

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // Output the restaurant's welcome message:
    printf("Welcome to Better Burger, way better than Good Burger!\n");
    printf("MENU:\n");
    
    // PUT YOUR CODE HERE: Open the file, based on the file name supplied in the command line
    FILE* fp = fopen(argv[1], "r");
    // PUT YOUR CODE HERE:
    // loop through each line in the input file
    // For each item, output its item number and value
    if(fp == NULL)
    {
        
        printf("File does not exist.\n");
        return 1;
    }
    
    char line[256];
    
    int counter = 0;
    while(fgets(line, 256, (FILE*)fp) != NULL)
    {
        printf("%i) %s \n", counter, line);
        counter++;
    }

    // PUT YOUR CODE HERE: Close the file
    fclose(fp);

}

/* external menu is displayMenu.txt contains:
* Turkey Club
* Grilled Chicken
* Philly Cheesesteak
*/
