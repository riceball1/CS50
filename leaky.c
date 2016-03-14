/**
 * leaky.c 
 * checks to make sure that there are no memory leaks
 */

#include <stdio.h>
#include <cs50.h>

typedef struct
{
    char* firstName;
    char* lastName;
} person;

int main(void)
{
    person* peep = malloc(sizeof(person));

    printf("first name please:\n");
    peep->firstName = GetString();

    printf("last name please:\n");
    peep->lastName = GetString();

    printf("Nice to meet you, %s %s!\n", peep->firstName, peep->lastName);

    
    free(peep->firstName); // added this to release the memory created 
    free(peep->lastName); // ditto
    free(peep); // make sure this is last or else it will make invalid read for the previous 2 frees
}
