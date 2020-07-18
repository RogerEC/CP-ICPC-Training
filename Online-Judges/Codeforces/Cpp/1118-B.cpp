#include<bits/stdc++.h>

using namespace std;

#define MAXN 200100
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
    int sp=0, si=0, n, peso[MAXN], cont=0;
    pii vet[MAXN];

    cin>>n;

    for(int i=0; i<n; i++){

        cin>>peso[i];

        if((i%2)==0){

            si+=peso[i];

            if(i==0){

                vet[i].ft=peso[i];
                vet[i].sd=0;

            }else{

                vet[i].ft=vet[i-1].ft+peso[i];
                vet[i].sd=vet[i-1].sd;
            }

        }else{

            sp+=peso[i];
            vet[i].ft=vet[i-1].ft;
            vet[i].sd=vet[i-1].sd+peso[i];
        }
    }

    for(int i=0; i<n; i++){

        if((i%2)==0){
            if(((vet[i].ft-peso[i])+(sp-vet[i].sd))==(vet[i].sd+(si-vet[i].ft)))
                cont++;
        }else{
            if((vet[i].ft+(sp-vet[i].sd))==((vet[i].sd-peso[i])+(si-vet[i].ft)))
                cont++;
        }
    }

    cout<<cont<<endl;

    return 0;
}

