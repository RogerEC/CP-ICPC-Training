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
    ll neg, pos, zero, aux, n, cont;

    cin>>n;
    neg=pos=zero=cont=0;
    for(int i=0; i<n; i++){
        cin>>aux;
        if(aux==0){
            zero++;
        }else if(aux<0){
            neg+=abs(aux+1);
            cont++;
        }else{
            pos+=aux-1;
        }
    }

    if((cont%2)==0){
        cout<<pos+neg+zero<<endl;
    }else{
        if(zero!=0){
            cout<<pos+neg+zero<<endl;
        }else{
            cout<<pos+neg+2<<endl;
        }
    }

    return 0;
}

