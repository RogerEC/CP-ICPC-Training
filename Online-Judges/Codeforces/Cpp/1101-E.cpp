#include<bits/stdc++.h>
using namespace std;
int main()
{
    string op;
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int n, menor, maior, x, y;
    cin>>n;
    menor=maior=0;
    for(int i=0; i<n; i++){
        cin>>op>>x>>y;
        if(op=="+"){
            if(maior<max(x, y))
                maior=max(x, y);
            if(menor<min(x, y))
                menor=min(x, y);
        }else{
        if (maior<=max(x, y) && menor<=min(x, y))
            printf("YES\n");
        else
            printf("NO\n");
        }
    }
    return 0;
}

