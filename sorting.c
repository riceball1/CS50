//part of helpers.c
       
#include <cs50.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    //binary search
    int beginning = 0;
    int ending = n -1;
    
    while(n > 0)
    {
        int middle = (n - 1) / 2;
        if(values[middle] == value)
        {
            return true;
        }
        else if(values[middle] > value)
        {
            //search left 
            for(int i = n - 1; i > values[middle]; i--)
            {
             if(values[x] == value)
             {
                 return true;
             }
            }
        }
        else if(values[middle] < value)
        {
            //search right
            for(int x = 0; x < values[middle]; x++)
            {
                if(values[x] == value)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    //bubble sort
    int swap;
    for(int i = 0; i < (n - 1); i++)
    {
        for (int t = 0; t < (n - i - 1); t++)
        {
            if(values[t] > values[t + 1])
            {
                //swap
                swap = values[t];
                values[t] = values[t + 1];
                values[t + 1] = swap;
            }
        }
    } return;
}
