#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin cin.sync_with_stdio(0); cin.tie(0)
#define fastout cout.sync_with_stdio(0); cout.tie(0)
typedef long long int lli;
typedef pair<int, int> pii;

int main(){

    fastin; fastout;
    lli N, K, M, soma, aux;
    vector<lli> a, f;

    cin>>N>>K>>M;
    for(int i=0; i<N; i++){
        cin>>aux;
        a.pb(aux);
    }

    for(int i=0; i<N; i++){
        cin>>aux;
        f.pb(aux);
    }

    for(int k=N; k<K; k++){

        soma=0;

        for(int i=0; i<N; i++){

            soma+=(a[i]*f[(k-1)-i]);
            soma%=M;
        }

        f.pb(soma);
    }

    cout<<f[K-1]<<endl;

    return 0;
}
