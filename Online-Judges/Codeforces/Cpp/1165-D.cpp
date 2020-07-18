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
    vector<ll> div;
    bool flag;
    ll resp, aux;
    int t, n, cont;

    cin>>t;

    for(int i=0; i<t; i++){

        cin>>n;

        for(int j=0; j<n; j++){
            cin>>aux;
            div.pb(aux);
        }

        sort(div.begin(), div.end());

        resp=(div[0]*div[n-1]);

        flag=false;
        for(int j=0; j<(n/2+n%2); j++){
            if((div[j]*div[n-1-j])!=resp){
                flag=true;
                break;
            }
        }

        if(flag==true){
            cout<<-1<<endl;
            div.clear();
            continue;
        }

        cont=0;
        for(ll j=2; (j*j)<=resp; j++){
            if((resp%j)==0){
                if((j*j)==resp)
                    cont++;
                else
                    cont+=2;
            }
        }

        if(cont==n)
            cout<<resp<<endl;
        else
            cout<<-1<<endl;

        div.clear();
    }

    return 0;
}

