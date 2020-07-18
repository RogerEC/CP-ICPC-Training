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
    int N, aux, soma=0;
    vector<int> seq;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>aux;
        seq.pb(aux);
    }

    for(int i=1; i<N; i++){
        if((seq[i]==2 && seq[i-1]==3) || (seq[i]==3 && seq[i-1]==2)){
            soma=INT_MIN;
            break;
        }else if((seq[i]==1 && seq[i-1]==3) || (seq[i]==3 && seq[i-1]==1)){
            soma+=4;
        }else if((seq[i]==1 && seq[i-1]==2) || (seq[i]==2 && seq[i-1]==1)){
            if((i>=2) && (seq[i]==2 && seq[i-1]==1 && seq[i-2]==3))
                soma+=2;
            else
                soma+=3;
        }
    }

    if(soma==INT_MIN)
        cout<<"Infinite"<<endl;
    else{
        cout<<"Finite"<<endl;
        cout<<soma<<endl;
    }

    return 0;
}

