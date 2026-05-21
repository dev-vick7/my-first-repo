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



//FINDING MINIMUM AS WELL 

#include <iostream>
using namespace std;

// Function to find the minimum value in an array of 5 integers
int min(int arr[5])
{
    int less = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < less)
        {
            less = arr[i];
        }
    }
    cout << less << endl;
    return less;
}

int main()
{
    int arr[5];
    cout << "Enter array elements : " << endl;
    
    // Loop to take 5 elements from the user
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Call the function and store the result
    int small = min(arr);
    cout << "Minimum value is : " << small << endl;

    return 0;
}
