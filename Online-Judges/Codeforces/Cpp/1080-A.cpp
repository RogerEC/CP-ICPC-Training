#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, k, soma;
    cin>>n>>k;
    soma=0;
    soma+=((2*n)/k);
    if((n*2)%k!=0)
        soma++;
    soma+=((5*n)/k);
    if((n*5)%k!=0)
        soma++;
    soma+=((8*n)/k);
    if((n*8)%k!=0)
        soma++;
    cout<<soma<<endl;
    return 0;
}
