#include<iostream>
using namespace std;

int even(int arr[5])
{
    int chu=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        chu++;
    }
           return chu;
}
int odd(int arr[5])
{
    int chi=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2!=0)
        chi++;
    }
            return chi;
}
int main()
{
    int arr[5];
    cout<<"Enter 5 numbers = "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
   cout<<"Even Number = "<<even(arr)<<endl;
   cout<<"Odd Number = "<<odd(arr)<<endl;
   return 0;
}