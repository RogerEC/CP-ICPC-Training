#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
typedef struct{
    int id, p;
    bool esc;
}HEROI;
bool maior(HEROI a, HEROI b){return a.p>b.p;}
int main()
{
    HEROI aux;
    vector<HEROI> heroi;
    map<int, int> par;
    int m, n, a, b, ini;
    cin>>n>>m;
    for(int i=0; i<2*n; i++)
    {
        cin>>aux.p;
        aux.id=i+1;
        aux.esc=false;
        heroi.push_back(aux);
    }
    sort(heroi.begin(), heroi.end(), maior);
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        par.insert(make_pair(a, b));
        par.insert(make_pair(b, a));
    }
    cin>>ini;
    ini--;
    a=-2;
    if(ini==1)
        cout.flush();
    for(int i=ini; i<(2*n+ini); i++)
    {
        if((i%2)==0)
        {
           if(par.find(a)!=par.end())
            {
                for(int j=0; j<heroi.size(); j++)
                    if(heroi[j].id==par.find(a)->second)
                    {
                        if(heroi[j].esc==true)
                            goto cont;
                        cout<<heroi[j].id<<endl;
                        cout.flush();
                        heroi[j].esc=true;
                        break;
                    }
            }
            else
            {
                cont:
                for(int j=0; j<heroi.size(); j++)
                {
                    if(heroi[j].esc==false)
                    {
                        cout<<heroi[j].id<<endl;
                        cout.flush();
                        heroi[j].esc=true;
                        break;
                    }
                }
            }
        }
        else
        {
            cin>>a;
            if(a==-1)
                break;
            for(int j=0; j<heroi.size(); j++)
                if(heroi[j].id==a)
                {
                    heroi[j].esc=true;
                    break;
                }
        }
    }
    return 0;
}
