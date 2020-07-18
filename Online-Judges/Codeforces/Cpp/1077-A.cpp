#include<iostream>
using namespace std;
int main()
{
    long long int d, e, k, t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>d>>e>>k;
        cout<<((k/2)+(k%2))*d-(k/2)*e<<endl;
    }
    return 0;
}
