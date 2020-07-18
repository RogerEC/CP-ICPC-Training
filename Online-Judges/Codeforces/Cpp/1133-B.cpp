#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
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
    lli vet[100], n, k, aux;

    cin>>n>>k;

    for(int i=0; i<k; i++)
        vet[i]=0;

    for(int i=0; i<n; i++){
        cin>>aux;
        vet[aux%k]++;
    }

    aux=0;
    aux+=(vet[0]-vet[0]%2);

    if(k%2==0)
        aux+=(vet[k/2]-vet[k/2]%2);

    for(int i=1; i<(k/2+k%2); i++)
        aux+=min(vet[i], vet[k-i])*2;

    cout<<aux<<endl;

    return 0;
}

