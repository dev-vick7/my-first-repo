#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum;
    int choice;
    cout << "Simple Calculator" << endl;
    cout << "1. Add Numbers" << endl;
    cout << "2. Multiply Numbers" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if(choice == 1){
        sum = num1 + num2;
        cout << "Sum = " << sum << endl;
    }
    else if(choice == 2){
        sum = num1 * num2;
        cout << "Multiplication = " << sum << endl;
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }

    return 0;
}