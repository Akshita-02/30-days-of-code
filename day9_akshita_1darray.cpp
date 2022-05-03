//Take 10 integer inputs from user and store them in an array.
//Again ask user to give a number. Now, tell user whether that number is present in array or not.
#include<iostream>
using namespace std;
int main()
{
    int n,key,i,found=0;
    cout<<"Enter the number of integers:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:\n";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cout<<"enter the number you want to find:\n";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
        found=1;
        break;
        }
        
    }
    if(found)
    cout<<"yes\n";
    else
    cout<<"no\n";
   
}