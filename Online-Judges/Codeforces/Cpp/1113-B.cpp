#include<bits/stdc++.h>

using namespace std;

#define MAXN 50100
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
    int a[MAXN], soma, minimo, pos, n;

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

    minimo=INT_MAX;
    soma=0;
    for(int i=0;i<n;i++){
        soma+=a[i];
        if(minimo>a[i]){
            pos=i;
            minimo=a[i];
        }
    }

    for(int i=0; i<n; i++){
        if(i!=pos){
            for(int j=2; j*j<=a[i]; j++){
                if(a[i]%j==0){
                    soma=min(soma, (soma-a[i]-minimo+a[i]/j+minimo*j));
                }
            }
            soma=min(soma, (soma-a[i]-minimo+a[i]/a[i]+minimo*a[i]));
        }
    }

    cout<<soma<<endl;

    return 0;
}

