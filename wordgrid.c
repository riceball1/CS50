#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    
    //Check if has 3 additional command line
    if(argc != 4)
    {
        printf("Please give me a valid keyword\n");
        return 1;
    }
    else 
    {
        //check arguments equal to 3 char long
        for(int a = 1; a < argc; a++)
        {
        //loop over each char in each string to make sure it is valid
    	    for(int b = 0, n = strlen(argv[a]); b < n; b++)
    	    {
    	      //use ctype.h to be able to use function islpha
    	        if (!isalpha(argv[a][b]))
    	        {
        	        printf("Please give ma a keyword with characters only\n");
        	        return 1;
    	        }
    	        else if (strlen(argv[a]) != 3)
    	        {
    	    	    printf("Please give me a word with 3 characters\n");
    	        	return 1;
    	        }
    	    }
        }
    }
    string word1 = argv[1];
    string word2 = argv[2];
    string word3 = argv[3];
    
     //loop once to make sure only to print a 3 x 3 square
    for(int i = 1; i < 2; i++)
    {
    //length should be no more than 3 in length - length of words
    	for(int j = 0; j < 3; j++)
    	{
    	//print each word vertically
    		printf("%c%c%c\n", word1[j], word2[j], word3[j]);
    	}
    }
}
