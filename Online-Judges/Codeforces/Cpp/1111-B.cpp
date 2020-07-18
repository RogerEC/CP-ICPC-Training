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
    lli vet[MAXN], soma=0, n, k, m;

    cin>>n>>k>>m;
    for(int i=0; i<n; i++){
        cin>>vet[i];
        soma+=vet[i];
    }

    sort(vet, vet+n);

    int cont=0;
    int cont2=n-1;
    while(true){

        if(k>m)
            k=m;

        if(((double)(soma-vet[cont])/(n-1)>(double)(soma+k)/n) && n!=1){
            soma-=vet[cont];
            cont++;
            n--;
            m--;
        }else{
            soma+=k;
            cont2--;
            m-=k;
        }

        if((n==1 && m==0) || m==0 || cont2==cont)
            break;
    }

    cout.precision(20);
    cout<<fixed;
    cout<<(double)soma/n<<endl;

    return 0;
}

