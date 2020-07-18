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

int separa(int *vet, int ini, int fim)
{
    int i, j, temp;
    j=ini;
    for(i=ini; i<fim; i++)
    {
        if(vet[i]<=vet[fim] && ((vet[i]+vet[fim])%2)!=0)
        {
            temp=vet[i];
            vet[i]=vet[j];
            vet[j]=temp;
            j++;
        }
    }
    temp=vet[j];
    vet[j]=vet[fim];
    vet[fim]=temp;
    return j;
}

void QuickSort(int *vet, int ini, int fim)
{
    if(ini>=fim)
        return;
    int pivo=separa(vet, ini, fim);
    QuickSort(vet, ini, pivo-1);
    QuickSort(vet, pivo+1, fim);
}

int main(){

    fastin;
    int v[MAXN], n;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    QuickSort(v, 0, n-1);

    for(int i=0; i<n; i++){
        if(i!=(n-1))
            cout<<v[i]<<endl;
        else
            cout<<v[i]<<endl;
    }

    return 0;
}

