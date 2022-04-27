//Program to find greatest element in array:
//Write a program to calculate the sum of the first and the second last digit of a 5 digit.
//E.g.- NUMBER : 12345
//OUTPUT : 1+4=5
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e;
    cout<<"enter five digit number:"<<endl;
    cin>>n;
    a=n/10000;
    n=n%10000;
    b=n/1000;
    n=n%1000;
    c=n/100;
    n=n%100;
    d=n/10;
    e=n%10;
    int sum=b+d;
    cout<<"sum: "<<b<<" + "<<d<<"="<<sum<<endl;
}
    
    
    
    