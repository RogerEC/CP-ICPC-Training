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
    ll a, b, x, y, n, resp1, resp2, a_aux, b_aux, n_aux;
    int t;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin>>a>>b>>x>>y>>n;
        a_aux=a;b_aux=b;n_aux=n;
        if((a-n)>=x){
            a_aux-=n;
        }else{
            n_aux-=(a-x);
            a_aux=x;
            if((b-n_aux)>=y){
                b_aux-=n_aux;
            }else{
                b_aux=y;
            }
        }
        resp1=a_aux*b_aux;
        if((b-n)>=y){
            b-=n;
        }else{
            n-=(b-y);
            b=y;
            if((a-n)>=x){
                a-=n;
            }else{
                a=x;
            }
        }
        resp2=a*b;
        cout<<min(resp1, resp2)<<endl;
    }
    
    return 0;
}
