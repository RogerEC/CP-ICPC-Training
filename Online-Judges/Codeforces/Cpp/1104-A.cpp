#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    for(int i=9; i>=1; i--)
        if(n%i==0){
            cout<<n/i<<endl;
            for(int j=0; j<n/i; j++)
                if(j!=((n/i)-1))
                    cout<<i<<' ';
                else
                    cout<<i<<endl;
            break;
        }

    return 0;
}
