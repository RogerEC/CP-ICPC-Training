#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> divisor;
    vector<bool> marcador;
    int n, x, y;

    for(int i=0; i<10001; i++)
        marcador.push_back(true);

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        divisor.push_back(x);
    }

    x=0;
    for(int i=0; i<n; i++)
        x=max(x, divisor[i]);

    for(int i=0; i<n; i++)
        if(marcador[divisor[i]] && (x%divisor[i])==0){
            marcador[divisor[i]]=false;
            divisor[i]=0;
        }

    y=0;
    for(int i=0; i<n; i++)
        y=max(y, divisor[i]);

    cout<<x<<' '<<y<<endl;

    return 0;
}
