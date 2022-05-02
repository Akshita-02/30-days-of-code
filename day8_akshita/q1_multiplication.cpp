//program to display multiplication of given table:

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number whose multiplication table you want to find:"<<endl;
    cin>>n;
    for(int i=1;i<10;i++)
    {
      cout<<n<<"X"<<i<<"="<<n*i<<endl;
        
    }
    
   
}