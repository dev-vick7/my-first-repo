#include<iostream>
using namespace std;
int sum(int arr[5])
{
    int local=0;
   for(int i=0;i<5;i++){
       local+=arr[i];
   }
    cout<<"Sum = "<<local<<endl;
    return local;
}
float avg(int sum){
    float average;
    average=(float)sum/5;
    cout<<"Average = "<<average<<endl;
    return average;
}
int main()
{
    int arr[5],average;
    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<5;i++)
    {
     cin>>arr[i];
    }
    int s=sum(arr);
   float a = avg(s);
}