/*Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).*/
#include <stdio.h>
// mark array it contains students marks
int marks[3];

// recieveMark function it recieve marks and return total and percentage
int *recieveMark(int arr[])
{
    int total = 0, i = 0;
    float per;
    do
    {
        printf("enter subject %d marks:", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
        i++;
    } while (i != 3);

    per = (float)total / 3;
    arr[0] = total;
    arr[1] = per;
    return arr;//return array adddress
}
//main body
int main()
{

    int res[2];
    int *p;//pointer variable
    p = recieveMark(res);
    //print total & percentage 
    printf("\ntotal: %d", p[0]);
    printf("\nper: %0.2f%%", (float)p[1]);

    return 0;
}
