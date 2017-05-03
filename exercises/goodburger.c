/** exercise for LaunchCode, called Good Burger
* fill in code to open a file, write their orders in, close the file
* output file can be order.txt
* should use the following functions: fopen, fclose, fputs
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string menuItems[] = {"Water", "Soda", "Cheeseburger", "Fries"};

  // Display menu:
  printf("Welcome to Good Burger! Can I take your order?\n");
  printf("MENU:\n");
  for (int i = 0; i < 4; i++)
  {
    printf("Item %i: %s\n", i, menuItems[i]);
  }
  printf("\nHow many items?\n");

  int numItems = GetInt();

  // PUT YOUR CODE HERE: open a file to write
  FILE* file = fopen("file.txt", "w");
  // PUT YOUR CODE HERE: before continuing, make sure the file pointer is not NULL
  // if it is NULL, then quit the program (return 1) instead of continuing
int orderItem [numItems];
if(file != NULL)
{
  for (int i = 0; i < numItems; i++)
  {
    do 
    {
      printf("Which menu item would you like?\n");
      orderItem[i] = GetInt();
    } while(orderItem[i] < 0);
  }
    // PUT YOUR CODE HERE: Take the order number, translate it into an item, and write the item to the file
  for (int a = 0; a < numItems; a++)
  {  
      printf("%s\n", menuItems[orderItem[a]]);
      fprintf(file, "%s\n", menuItems[orderItem[a]]); 
      fputs("%s\n", file);
    // PUT YOUR CODE HERE: Write a new line ("\n") to the file 
      fprintf(file, "\n");
  }

  // PUT YOUR CODE HERE: close the file
    fclose(file);
  }
}
