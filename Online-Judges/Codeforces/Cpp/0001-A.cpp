#include<iostream>
using namespace std;
int main()
{
    long long int n, m, a, l, c;
    cin>>n>>m>>a;
    l=m/a;
    if(m%a!=0)
        l++;
    c=n/a;
    if(n%a!=0)
        c++;
    cout<<c*l<<endl;
    return 0;
}
