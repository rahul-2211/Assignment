// In-place merge two sorted arrays.
//  Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of
//  array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ]
//  with remaining elements.

#include <stdio.h>
// main body
int main()
{
    int m, n; // for size of X and Y array
    printf("enter m and n for size of X and Y array:");
    scanf("%d%d", &m, &n);
    int X[m];
    int Y[n];
    int Z[m + n];
    // entering element in the array

    printf("enter X array element :");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &X[i]);
    }
    printf("enter Y array element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Y[i]);
    }

    // both array merge in 3rd array
    //  array X[]

    for (int i = 0; i < m; i++)
    {
        Z[i] = X[i];
    }

    // array Y[]

    int j = 0;
    for (int i = m; i < n + m; i++)
    {
        Z[i] = Y[j];
        j++;
    }

    // print merged array

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", Z[i]);
    }

    // sorting of merge array using Bubble sort algorithm

    int temp;
    for (int i = 0; i < m + n - 1; i++)
    {
        for (int j = 1; j < m + n - i - 1; j++)
        {
            // swapping of values
            if (Z[j] > Z[j + 1])
            {
                temp = Z[j];
                Z[j] = Z[j + 1];
                Z[j + 1] = temp;
            }
        }
    }

    // print sorted merged array

    printf("\n");
    for (int i = 0; i < m + n; i++)
    {+
        printf("%d ", Z[i]);
    }

    // separate the element from merged array into actual array

    for (int i = 0; i < m; i++)
    {
        X[i] = Z[i];
    }

    // array X[]

    int p = 0;
    for (int i = m; i < m + n; i++)
    {
        Y[p] = Z[i];
        p++;
    }

    // print sorted merged array X[]

    printf("\nX[]:");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", X[i]);
    }

    // print sorted merged array Y[]
    printf("\nY[]:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Y[i]);
    }

} // end of main