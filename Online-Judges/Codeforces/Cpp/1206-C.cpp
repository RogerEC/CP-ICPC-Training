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
    int n;

    cin>>n;

    if(n%2==0)
        cout<<"NO"<<endl;
    else{

        cout<<"YES"<<endl;

        for(int i=1; i<=n; i++){
            if((i%2)!=0){
                cout<<2*i-1<<' ';
            }else{
                cout<<2*i<<' ';
            }
        }

        for(int i=1; i<=n; i++){
            if((i%2)==0){
                cout<<2*i-1<<' ';
            }else{
                cout<<2*i<<' ';
            }
        }
    }

    return 0;
}

