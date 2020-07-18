#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main(){

    lli N, M, soma=0, aux;
    vector<lli> mergulho;

    cin>>N>>M;
    mergulho.push_back(0);
    for(int i=0; i<N; i++){
        cin>>aux;
        mergulho.push_back(aux);
    }

    for(int i=1; i<=N; i++){

        if(mergulho[i-1]<=min(M-mergulho[i], mergulho[i])){
            mergulho[i]=min(M-mergulho[i], mergulho[i]);
            soma+=mergulho[i];
        }else if(mergulho[i-1]<=max(M-mergulho[i], mergulho[i])){
            mergulho[i]=max(M-mergulho[i], mergulho[i]);
            soma+=mergulho[i];
        }else{
            soma=-1;
            break;
        }
    }

    cout<<soma<<endl;

    return 0;
}
