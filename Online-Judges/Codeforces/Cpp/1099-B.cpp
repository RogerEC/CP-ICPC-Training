#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, c=1, cont=1, m=0;;

    cin>>n;
    for(i=1; i<=n; i+=c){
        m++;
        if(m==2){
            c++;
            m=0;
        }
        cont++;
    }
    if(n+c!=i)
        cont++;

    cout<<cont<<endl;

    return 0;
}
