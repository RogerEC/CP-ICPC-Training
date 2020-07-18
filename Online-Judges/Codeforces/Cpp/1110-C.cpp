#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
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

int cont;

int inverse(int n){

    int num[30];
    cont=0;

    while(n!=0){
        num[cont++]=n%2;
        n/=2;
    }

    for(int i=0; i<cont; i++){
        if(num[i]==0){
            num[i]=1;
        }else{
            num[i]=0;
        }
    }

    for(int i=0; i<cont; i++){
        n+=num[i]*(int)pow(2.0, (double)i);
    }

    return n;
}

int main(){

    fastin;
    int q, a, b, vet[30];

    for(int i=0; i<30; i++){
        vet[i]=0;
    }

    cin>>q;
    while(q--){

        cin>>a;
        b=inverse(a);

        if(b==0){

            if(vet[cont]==0){

                int m=1;

                for(int i=3; i*i<a; i++){
                    if((a%i)==0){
                        m=a/i;
                        break;
                    }
                }

                vet[cont]=mdc(a^m, a&m);
                cout<<vet[cont]<<endl;
            }
            else
                cout<<vet[cont]<<endl;
        }else
            cout<<(a^b)<<endl;
    }

    return 0;
}
