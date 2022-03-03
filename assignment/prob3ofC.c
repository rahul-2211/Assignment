// Aim:
// Search and Sequence Consider an integer array ‘a’ of size 10, where the value of the array elements are
//  {1,5,4,8,9,2,0,6,11,7}. Write a program to
//  ▪ Find whether the given element exists in an array or not. If the element exists in an
//  array, display YES else NO.
//  ▪ To print a number following a sequence of elements in an array i.e., 15489206117.
// code//
#include <stdio.h>
// main body
int main()
{
    int a[10] = {1, 5, 4, 8, 9, 2, 0, 6, 11, 7}; // given array
    int n;
    int flag = 0; // set flag for decision making
    printf("enter number which you want search in given array:");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            flag = 1;
        }
    }
    //whether the given element exists in an array or not
    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    //printing sequence
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
};//end of main body
