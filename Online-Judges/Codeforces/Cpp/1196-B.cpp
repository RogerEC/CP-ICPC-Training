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
    vector<int> resto;
    int q, n, k, aux, soma;

    cin>>q;

    for(int l=0; l<q; l++){

        cin>>n>>k;
        soma=0;

        for(int i=0; i<n; i++){

            cin>>aux;

            soma+=(aux%2);
            resto.pb(aux%2);
        }

        if(soma<k || soma%2!=k%2){
            cout<<"NO"<<endl;
        }else{

            cout<<"YES"<<endl;
            aux=0;

            for(int i=0; i<n; i++){

                if(aux==k-1){
                    cout<<n<<endl;
                    break;
                }

                if(resto[i]==1){
                    cout<<i+1<<' ';
                    aux++;
                }
            }
        }

        resto.clear();
    }

    return 0;
}
