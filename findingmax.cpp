#include<iostream>
using namespace std;

int largest(int arr[5])
{
    int max = arr[0];

    for(int i=1; i<5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[5];

    cout<<"Enter 5 numbers:"<<endl;

    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    int result = largest(arr);

    cout<<"Largest number = "<<result;

    return 0;
}
