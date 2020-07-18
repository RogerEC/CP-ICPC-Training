#include<bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int,int>> pipii;
#define fastin cin.sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pos first
#define ini second.first
#define fim second.second

bool menor(pipii a, pipii b) {return a.ini<b.ini;}

int main()
{
    fastin;
    vector<pipii> segmento;
    bool marc[100000];
    int n, t, l, r;

    cin>>t;
    for(int k=0; k<t; k++){
        cin>>n;
        for(int i=0; i<n; i++)
            marc[i]=false;
        for(int i=0; i<n; i++){
            cin>>l>>r;
            segmento.pb(mp(i, mp(l, r)));
        }

        sort(segmento.begin(), segmento.end(), menor);

        int maior=0;
        bool aux=false;
        for(int i=0; i<n; i++){
            if(segmento[i].ini<=maior || i==0){
                maior=max(maior, segmento[i].fim);
                marc[segmento[i].pos]=true;
            }else{
                aux=true;
                break;
            }
        }

        if(aux){
            for(int i=0; i<n; i++){
                if(marc[i])
                    cout<<1;
                else
                    cout<<2;

                if(i!=(n-1))
                    cout<<' ';
            }
            cout<<endl;
        }
        else
            cout<<-1<<endl;

        segmento.clear();
    }

    return 0;
}
