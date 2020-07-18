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
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

int main(){

    fastin; fastout;
    bool marcador[MAXN];
    int N;

    cin>>N;

    for(int i=0; i<=N; i++)
        marcador[i]=true;

    for(int i=2; i*i<=N; i++){
        for(int j=2; j*i<=N; j++)
            marcador[i*j]=false;
    }

    if(N>=2)
        cout<<2;

    for(int i=3; i<=N; i++)
        if(marcador[i])
            cout<<' '<<i;

    cout<<endl;

    return 0;
}
