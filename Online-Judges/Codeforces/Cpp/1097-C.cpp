#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define pb push_back

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, p, z, cont=0;
    vector<int> pos, neg;
    string ent;
    for(int i=0; i<500001; i++){
        pos.pb(0);
        neg.pb(0);
    }

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ent;
        p=z=0;
        for(unsigned int j=0; j<ent.length(); j++){
            if(ent[j]=='('){
                p++;
            }else{
                if(p==0)
                    z++;
                else
                    p--;
            }
        }
        if(p==0 && z==0)
            cont++;
        else if(p==0)
            neg.at(z)++;
        else if(z==0)
            pos.at(p)++;
    }
    cont/=2;

    for(int i=0; i<500001; i++)
        cont+=min(pos[i], neg[i]);

    cout<<cont<<endl;

    return 0;
}
