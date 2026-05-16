#include<iostream>
using namespace std;
int main()
{
    int  n;
    cout<<"Enter a number ";
    cin>>n;
    if(n>0){
        for(int i=0;i<=5;i++)
        {
            if(i%2==0)
            {
                cout<<i<<" is even"<<endl;
            }
            else
            {
                cout<<i<<" is odd"<<endl;
            }
        }
        }
        else if(n==0)
        {
            cout<<"You Entered Zero ";
        }
        else
        {
            cout<<"Negative Numbers are not allowed";
        }
        }

        