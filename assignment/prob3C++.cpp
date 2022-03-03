/*Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some
more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an
initial value of Rs. 50. Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.*/

// code//
#include <iostream>
using namespace std;

// class creation
class AddAmount
{
    // class data members
private:
    int amount = 50;

public:
    AddAmount();
    AddAmount(int amt);
};

// simple constructor
AddAmount::AddAmount()
{
    cout << "no amount will be added to the Piggie Bank" << endl;
}

// parameterized constructor
AddAmount::AddAmount(int amt)
{
    amount = amount + amt;
    cout << "Rs." << amt << " is added" << endl;
    cout << "final amount is : "
         << "Rs." << amount << endl;
}

// main body
int main()
{
    // object creation
    AddAmount a2;
    int amt1;
    cout << "how many amount you want to add into piggie bank? ";
    cin >> amt1;
    AddAmount a1 = (amt1); // Constructors with One Parameter: A Special Case
    // If a constructor only has one parameter, there is a way to pass an initial value to
    // that constructor.
}
