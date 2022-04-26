//Program to find greatest element in array:


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[0]<a[i])
        a[0]=a[i];
    }
    cout<<"largest element:"<<a[0]<<endl;
}