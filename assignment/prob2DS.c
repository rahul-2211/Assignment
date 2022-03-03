/*problem statement: Generate binary numbers between 1 to `n` using a queue.
Given a positive number n, efficiently generate binary numbers between 1 and n using the queue data
structure in linear time*/

#include <stdio.h>
#define SIZE 100
// function prototype
void enqueue();
void show();
int arr[SIZE];
int Rear = -1;
int Front = -1;
int DeciBin(int n);

// main body
int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        enqueue(DeciBin(i));
    }
    show();
}

// convert binary to decimal
int DeciBin(int n)
{
    int bin = 0, rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        bin += rem * i;
        i = i * 10;
    }
    return bin;
}

// eneque element in the queue
void enqueue(int n)
{

    if (Rear == SIZE - 1)
        printf("Overflow \n");
    else
    {
        if (Front == -1)

            Front = 0;
        Rear = Rear + 1;
        arr[Rear] = n;
    }
}

// print the queue elements
void show()
{

    if (Front == -1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
} // end of main
