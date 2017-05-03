/**
* Two types of search: linear and binary in C
* Source: http://www.programmingsimplified.com/c/source-code/c-program-binary-search
*/

#include <stdio.h>

// linear search as a function:

long linear_search(long [], long, long);
 
int main()
{
   long array[100], search, c, n, position;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);
 
   printf("Input number to search\n");
   scanf("%ld",&search);
 
   position = linear_search(array, n, search);
 
   if (position == -1)
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;
} 
 
long linear_search(long a[], long n, long find) {
   long c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}


// binary search:
int main()
{
   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first + last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle + 1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
 
   return 0;   
}


