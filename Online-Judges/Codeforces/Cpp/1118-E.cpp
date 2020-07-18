#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

int main(){

    fastin;
    lli n, k;

    cin>>n>>k;

    if(n<=(k*(k-1))){

        cout<<"YES"<<endl;

        for(lli b=0, g=1, i=0; i<n; i++){

            cout<<g+1<<' '<<b+1<<endl;

            g=(g+1)%k;
            b=(b+1)%k;

            if((i%k)==(k-1))
                g=(g+1)%k;
        }
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}

