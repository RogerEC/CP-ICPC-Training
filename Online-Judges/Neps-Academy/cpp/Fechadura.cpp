#include<bits/stdc++.h>

using namespace std;

int main(){

    int N, M, pino[1010], soma=0;

    cin>>N>>M;
    for(int i=0; i<N; i++)
        cin>>pino[i];

    for(int i=0; i<N; i++){

        soma+=abs(pino[i]-M);

        if(i!=(N-1)){

            if(pino[i]<M)
                pino[i+1]+=M-pino[i];
            else
                pino[i+1]-=pino[i]-M;
        }
    }

    cout<<soma<<endl;

    return 0;
}
