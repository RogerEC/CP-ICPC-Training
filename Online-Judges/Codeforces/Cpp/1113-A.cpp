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

int main(){

    fastin;
    int n, v, gasto=0, dist=0, cont=0;

    cin>>n>>v;

    while(true){

        if(cont==0){

            if(v>=(n-1)){

                cout<<(n-1)<<endl;
                return 0;

            }else{

                gasto=v;
                dist=v;
            }

            cont++;

        }else{

            cont++;
            gasto+=cont;
            dist++;

            if(dist==(n-1)){
                cout<<gasto<<endl;
                return 0;
            }
        }
    }
}

