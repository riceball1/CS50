#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    if(argc != 2) 
    {
        printf("There was an error");
        return 1;
    }
    
    int k = atoi(argv[1]);
    if(k > 26) {
        k = k % 26;
    }
    printf("plaintext: ");
    string p = get_string();

    // enciper message 
    if(p != NULL)
    {
        int n = strlen(p);
        printf("ciphertext: ");
        for(int i = 0; i < n ; i++) 
        {
            if(isalpha(p[i]))
            {
                if (islower(p[i]))
                {
                    printf("%c", 'a' + (p[i] + k - 'a') % 26);
                }
                
                if(isupper(p[i]))
                {
                    printf("%c", 'A' + (p[i] + k - 'A') % 26);
                }
            }
            else {
                printf("%c", p[i]);
            }
        }
    }
    printf("\n");
    return 0;
}