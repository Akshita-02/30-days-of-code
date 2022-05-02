#include <iostream>
using namespace std;
int main()
{
float num, avg,sum = 0.0;
int  n,i;
cout<< "Enter the number of subjects you want to find average:";
cin>> n;
for( i = 1; i<= n; ++i)
{
cout<< "Enter n" <<i<< ": ";
cin>>num;
if(num< 0.0)
{
// Control of the program move to jump: goto jump;
}
sum= sum+num;
}
jump:
avg=sum/(i - 1);

cout<<endl<<"Average = " << avg<<endl;
return 0;

}