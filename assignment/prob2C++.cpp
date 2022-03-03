/*problem statement:
Create a class called 'Matrix' containing a constructor that initialises the number of rows and the
number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 -multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.
*/

#include <iostream>
using namespace std;

//class creation
class Matrix
{
    //data members//class variables
    int a[4][4], b[4][4], i, j, k, x, y, sum = 0;

public:
        //class member functions
        void set_element();
        void display_element();
        void add_element();
        void mul_element();
        void get_row();
        void get_col();
    //simple/default consructor
    Matrix()
    {
        get_row();
        get_col();
        
    }
};//end of the class

//functions starts here
//get the number of rows
void Matrix::get_row()
{

    cout << "enter no. rows:";
    cin >> x;
}

//get the number of columns
void Matrix::get_col()
{

    cout << "enter no. cols:";
    cin >> y;
}

// set the elements of the matrix at a given position (i,j)
void Matrix::set_element()
{

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout << "enter [" << i << "," << j << "] element of array A:";
            cin >> a[i][j];
        }
    }
    cout << "Array B:" << endl;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout << "enter [" << i << "," << j << "] element of array B:";
            cin >> b[i][j];
        }
    }
}

//print the actual matrix
void Matrix::display_element()
{
    cout << "Array A:" << endl;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            // cout << "enter " << i << "," << j << " element of array A:";
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }

    cout << "Array B:" << endl;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            // cout  << i << "," << j << " element of array B:";
            cout << "\t" << b[i][j];
        }
        cout << endl;
    }
}

// adding two matrices.
void Matrix::add_element()
{
    cout << "addition of two matrix:" << endl;
    int sum[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << "\t" << sum[i][j];
        }
        cout << endl;
    }
}

// multiplying the two matrices
void Matrix::mul_element()
{
    int mul[x][y];
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            sum = 0;
            for (k = 0; k < x; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            
            mul[i][j] = sum;
        }
    }
    cout << "multiplication of two matrix:" << endl;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout << "\t" << mul[i][j];
        }
        cout << endl;
    }
}

//main body
int main()
{
    Matrix m1;
    m1.set_element();
    m1.display_element();
    m1.add_element();
    m1.mul_element();
}
