#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    vector<int> seq;
    int n, aux;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux;
        seq.push_back(aux);
    }
    sort(seq.begin(), seq.end());
    if(n==2)
        cout<<0<<endl;
    else{
        if((seq[1]-seq[0])>(seq[n-1]-seq[n-2]))
            cout<<seq[n-1]-seq[1]<<endl;
        else
            cout<<seq[n-2]-seq[0]<<endl;
    }
    return 0;
}
