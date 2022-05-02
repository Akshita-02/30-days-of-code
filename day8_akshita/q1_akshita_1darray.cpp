//program to find sum of array:

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i]; // finds sum of array
        
    }
    cout<<sum<<endl;
    
   
}
