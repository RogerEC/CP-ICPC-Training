#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n;
    bool marc;
    vector<string> entrada;
    vector<bool> prefixo;
    string aux, parte1, parte2, palavra;
    cin>>n;
    marc=true;
    for(int i=0; i<n; i++)
        prefixo.push_back(false);
    for(int i=0; i<(n*2-2); i++)
    {
        cin>>aux;
        entrada.push_back(aux);
        if(aux.length()==n-1){
            if(marc==true){
                marc=false;
                parte1=aux;
            }
            else
                parte2=aux;
        }
    }
    if(parte2.find(parte1.substr(1,n-2))==0)
        palavra=parte1[0]+parte2;
    else
        palavra=parte2[0]+parte1;
    for(int i=0; i<(n*2-2); i++){
        if(palavra.find(entrada[i])==0){
            if(prefixo[entrada[i].length()-1]==false){
                cout<<"P";
                prefixo[entrada[i].length()-1]=true;
            }
            else
                cout<<"S";
        }
        else
            cout<<"S";
    }
    cout<<endl;
    return 0;
}
