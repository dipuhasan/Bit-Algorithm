Output: Make both elements 0.

Specifications: Following are the specifications to follow.
1) It is guaranteed that one element is 0 but we do not know its position.
2) We can’t say about another element it can be 0 or 1.
3) We can only complement array elements, no other operation like and, or, multi, division, …. etc.
4) We can’t use if, else and loop constructs.
5) Obviously, we can’t directly assign 0 to array elements.

There are several ways we can do it as we are sure that always one Zero is there. Thanks to devendraiiit for suggesting following 3 methods
/*------------------------------------------------*/
#include<stdio.h>
void changeToZero(int a[2])
{
    a[a[1]] = a[!a[1]];
}

int main()
{
    int a[] = {1,0};
    changeToZero(a);
    printf(" arr[0] = %d\n", a[0]);
    printf(" arr[1] = %d\n", a[1]);

    return 0;
}
/*--------------------------*/

#include<stdio.h>
void changeToZero(int a[2])
{
    //a[!a[0]] = a[!a[1]];
    a[a[1]] = a[a[0]];
}

int main()
{
    int a[] = {1,0};
    changeToZero(a);
    printf(" arr[0] = %d\n", a[0]);
    printf(" arr[1] = %d\n", a[1]);


    return 0;
}

Output : arr[0] = 0
         arr[1] = 0
         
