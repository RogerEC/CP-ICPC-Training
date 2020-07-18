#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, soma=0;

    cin>>N;

    soma+=N/100;
    N%=100;
    soma+=N/50;
    N%=50;
    soma+=N/25;
    N%=25;
    soma+=N/10;
    N%=10;
    soma+=N/5;
    soma+=N%5;

    cout<<soma<<endl;

    return 0;
}
