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
typedef <vector<vector<int>> MATRIZ;
typedef <vector<int>> VETOR;
int n, m;
MATRIZ m1, m2;

void trocar_elemento(int i, int j){
    int aux=m1[i][j];
    m1[i][j]=m2[i][j];
    m2[i][j]=aux;
}

bool verificar_coluna(int j){
    bool flag=true;
    for(int i=0; i<n-1; i++){
        if(m1[i][j]>m1[i+1][j]){
            trocar_elemento(i, j);
        }

    }
}

int main(){

    fastin;

    return 0;
}

