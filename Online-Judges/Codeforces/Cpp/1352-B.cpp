#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main(){

    fastin;
    int t, n, k, resp, fim;

    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>k;
        if(n>=k){
            if((n-(k-1))%2!=0){
                cout<<"YES"<<endl;
                for(int i=0; i<k; i++){
                    if(i!=(k-1))
                        cout<<1<<' ';
                    else
                        cout<<n-(k-1)<<endl;
                }
            }else if((n>2*(k-1)) && (n-2*(k-1))%2==0){
                cout<<"YES"<<endl;
                for(int i=0; i<k; i++){
                    if(i!=(k-1))
                        cout<<2<<' ';
                    else
                        cout<<n-2*(k-1)<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

