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
         
