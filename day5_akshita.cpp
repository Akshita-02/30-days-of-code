//printing pattern using c++

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"enter the number:"<<endl;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=i;j<=n;j++)
       {
           cout<<"*";
       }
        cout<<endl;
   }
  

    return 0;
}
