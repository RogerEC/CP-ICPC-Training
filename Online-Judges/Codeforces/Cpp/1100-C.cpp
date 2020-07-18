#include<bits/stdc++.h>
using namespace std;
#define PI 4.0*atan(1.0)
int main()
{
    int n, r;
    cin>>n>>r;
    cout<<fixed;
    cout.precision(7);
    cout<<((-(double)r*sin(2*PI/((double)n/0.5)))/(sin(2*PI/((double)n/0.5))-1.0))<<endl;
    return 0;
}
