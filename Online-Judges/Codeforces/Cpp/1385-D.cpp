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
    ui t, n, ini, fim, cont1, cont2, soma;
    char cont_char;
    string s;

    cin>>t;
    for(ui k=0; k<t; k++){
        cin>>n;
        cin>>s;
        ini=0;
        fim=n;
        cont_char=0;
        while(ini!=fim){
            for(ui i=ini; i<fim/2; i++){
                if(s[i]==('a'+cont_char)){
                    cont1++;
                }
            }
            for(ui i=fim/2; i<fim; i++){
                if(s[i]==('a'+cont_char)){
                    cont1++;
                }
            }
        }
    }

    return 0;
}

