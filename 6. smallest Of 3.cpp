Write a C program to find the smallest of three integers, without using any of the comparison operators.
Let 3 input numbers be x, y and z.

Method 1 (Repeated Subtraction)
Take a counter variable c and initialize it with 0. In a loop, repeatedly subtract x, y and z by 1 and increment c. The number which becomes 0 first is the smallest. After the loop terminates, c will hold the minimum of 3.
/*---------------------------------------------------*/

#include<stdio.h>
int smallest(int x, int y, int z)
{
    int c = 0;
    while(x && y && z)
    {
        x--;y--;z--;c++;
    }
    return c;
}

int main()
{
    int x = 12, y = 15, z = 5;
    printf("Smallest value is : %d\n", smallest(x, y, z));


    return 0;
}
/*--------------------------------------------*/
#include<stdio.h>
// Using division operator to find minimum of three numbers

int smallest(int x, int y, int z)
{
    if(!(y/x)) // same as "if(y<x)"
        return (!(y/z))? y:z;
    return (!(x/z))?x:z;
}
int main()
{
    int x = 78, y = 88, z = 68;
    printf("Min of 3 numbers is %d\n", smallest(x, y, z));


    return 0;
}
