//To check whether an individual is eligible to vote//

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age :"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"Yes!You're eligible to vote!"<<endl;
        
    }
    else
    cout<<"No you can't"<<endl;
}
