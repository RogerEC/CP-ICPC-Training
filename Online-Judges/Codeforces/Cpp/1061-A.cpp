#include<iostream>
using namespace std;
int main()
{
    int n, s, ans;
    cin>>n>>s;
    ans=s/n;
    if((s%n)!=0)
        ans++;
    cout<<ans<<endl;
    return 0;
}
