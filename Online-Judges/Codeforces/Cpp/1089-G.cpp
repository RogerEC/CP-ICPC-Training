#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> semana;
    int t, k, aux, cont, cont2;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>k;
        cont=cont2=0;
        for(int i=0; i<7; i++){
            cin>>aux;
            semana.push_back(aux);
            if(aux==1)
                cont++;
        }
        if(cont==1)
            cout<<(k-1)*7+1<<endl;
        else{
            aux=0;
            for(int i=0; i<7; i++)
            {
                if(semana[i]==1){
                    aux++;
                }
                if(aux>0){
                    cont2++;
                }
                if(k%cont!=0){
                    if(aux==k%cont)
                    break;
                }
                else{
                    if(aux==cont)
                        break;
                }
            }
            if(k%cont!=0)
                cout<<(k/cont*7+cont2)<<endl;
            else
                cout<<((k/cont)-1)*7+cont2<<endl;
        }
        semana.clear();
    }
    return 0;
}
