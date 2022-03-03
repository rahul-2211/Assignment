/*Write a program by creating an 'Employee' class having the following functions and print the
final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as
parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per
day is more than 6 hours.*/

#include <iostream>
using namespace std;
//class creation
class Employee
{

public:
    //class data members 
    int salary;
    int wo_hr;

    //member functions
    // takes the salary, number of hours of work per day
    void getInfo(int sal, int wh)
    {

        salary = sal;
        wo_hr = wh;
    }

    // AddSal()
    void AddSal()
    {
        if (salary < 500)
        {
            salary = salary + 10;
        }
    }

    // AddSal()
    void AddWork()
    {
        if (wo_hr > 6)
        {
            salary = salary + 5;
        }
    }
};//end of the class

//main body
int main()
{
    //class object creation
    Employee e1;
    int sal;//salary
    int wh;//hours of work per day

    cout << "enter salary:";
    cin >> sal;
    cout << "working hours: ";
    cin >> wh;
    //function call
    e1.getInfo(sal, wh);
    e1.AddSal();
    e1.AddWork();
    //final salary
    cout << "final salary: " << e1.salary << endl;

}