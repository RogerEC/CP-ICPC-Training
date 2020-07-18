#include<iostream>
#include<vector>
using namespace std;

bool marc=false;
int tam, aux;
vector<int> graus;

void backtrack(int pos, int soma){
    if(pos==tam){
        if(soma%360==0)
            marc=true;
        return;
    }
    backtrack(pos+1, soma+graus[pos]);
    backtrack(pos+1, soma-graus[pos]);
}

int main()
{
    cin>>tam;

    for(int i=0; i<tam; i++){
        cin>>aux;
        graus.push_back(aux);
    }

    backtrack(0, 0);

    if(marc)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
