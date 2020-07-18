#include<bits/stdc++.h>
using namespace std;

int main()
{
    string acorde;
    size_t bi, bf, pi, pf;
    cin>>acorde;

    bi=acorde.find('[');
    if(bi!=string::npos)
        pi=acorde.find(':', bi);
    else
        pi=bi;

    if(pi==string::npos || bi==string::npos){
        cout<<-1<<endl;
        return 0;
    }

    bf=acorde.find_last_of(']');
    if(bf!=string::npos)
        pf=acorde.find_last_of(':', bf);
    else
        pf=bf;

    if(pf==string::npos || bf==string::npos){
        cout<<-1<<endl;
        return 0;
    }

    if(bi<bf && pi<pf){
        int cont=0;
        for(unsigned int i=pi+1; i<pf; i++)
            if(acorde[i]=='|')
                cont++;
        cout<<(4+cont)<<endl;
    }
    else
        cout<<-1<<endl;

    return 0;
}
