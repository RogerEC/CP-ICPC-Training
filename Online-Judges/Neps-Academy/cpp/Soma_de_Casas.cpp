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
typedef pair<int, int> pii;

int casa[NMAX];

int main(){

    fastin; fastout;
    int N, K, ini, fim, meio;

    cin>>N;
    for(int i=0; i<N; i++)
        cin>>casa[i];
    cin>>K;

    for(int i=1; i<N; i++){

        ini=0;
        fim=i-1;
        meio=-1;

        while(true){

            meio=(ini+fim)/2;

            if((casa[meio]+casa[i])==K){
                cout<<casa[meio]<<' '<<casa[i]<<endl;
                return 0;
            }
            else if((casa[meio]+casa[i])>K)
                fim=meio-1;
            else
                ini=meio+1;

            if(ini>fim)
                break;
        }
    }

    return 0;
}


