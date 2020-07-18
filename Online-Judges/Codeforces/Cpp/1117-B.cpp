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
    int n;
    lli m, k, soma=0, max1=0, max2=0, aux;

    cin>>n>>m>>k;
    for(int i=0; i<n; i++){
        cin>>aux;
        if(aux>=max1){
            max2=max1;
            max1=aux;
        }else{
            if(aux>max2)
                max2=aux;
        }
    }

    soma+=((max1*k*(m/(k+1)))+(max2*(m/(k+1)))+(max1*(m%(k+1))));

    cout<<soma<<endl;

    return 0;
}
