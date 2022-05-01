#include <iostream>
using namespace std;
int main()
{
int choice,a,b;
cout<<"Enter the numbers you want to operate with:";
cin>>a>>b;
cout<<"enter 1 for addition"<<endl;
cout<<"enter 2 for subtraction"<<endl;
cout<<"Enter 3 for mulitplication"<<endl;
cout<<"Enter 4 for division"<<endl;
cin>>choice;
switch(choice)
{
    case 1:
    cout<<a+b<<endl;
    break;
    case 2:
    cout<<a-b<<endl;
    break;
    case 3:
    cout<<a*b<<endl;
    break;
    case 4:
    cout<<a/b<<endl;
    break;
    default:
    cout<<"invalid choice"<<endl;
}
}