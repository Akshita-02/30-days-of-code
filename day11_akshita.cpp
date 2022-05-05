// C++ program to find maximum
#include <bits/stdc++.h>
using namespace std;
 
int max(int a[], int n)
{
    int i;

    int largest= a[0];

    for (i = 1; i < n; i++)
        if (a[i] >largest)
            largest= a[i];
 
    return largest;
}
int main()
{
    int a[] = {10, 324, 456, 5789, 1234};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Largest in given array is "<< max(a, n);

}