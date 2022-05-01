#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if( x>0&&y>0)
	  cout<<"First quadrant\n";
	else if(x< 0&&y> 0)
	  cout<<"Second Quadrant\n";
	else if(x<0&&y<0)
	 cout<<"Third Quadrant\n";
	else if(x>0&&y< 0)
	  cout<<"Fourth quadrant\n";
	else 
	cout<<"At origin\n";

}