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
    vector<int> a, b;
    int n, m, ta, tb, k, aux;

    cin>>n>>m>>ta>>tb>>k;

    for(int i=0; i<n; i++){
        cin>>aux;
        a.pb(aux+ta);
    }

    for(int i=0; i<m; i++){
        cin>>aux;
        b.pb(aux);
    }

    int i=0, j=0, j_ant;

    while(k>0){

        while(i<n && j<m && a[i]<b[j])
            i++;

        j_ant=j;

        while(i<n && j<m && b[j]<a[i])
            j++;

        if(i>=n){
            j++;
            k--;
        }

        if(j_ant!=j){
            k--;
        }
    }

    if(j>=m){
        cout<<-1<<endl;
    }else{
        cout<<b[j]+tb<<endl;
    }

    return 0;
}

