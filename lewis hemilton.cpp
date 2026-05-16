#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    switch(marks/10)
    {
        case 10:
         cout<<"Grade A";
         break;

        case 9:
         cout<<"Grade A";
         break;

        case 8:
         cout<<"Grade B";
         break;

        case 7:
         cout<<"Grade B";
         break;

        case 6:
          cout<<"Grade C";
          break;

        case 5:
         cout<<"Grade D";
          break;

        case 4:
          cout<<"Grade D";
         break;

        default:
          cout<<"You are Fail";
    }
    return 0;
}