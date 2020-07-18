#include<iostream>
#include<string>
using namespace std;
int main()
{
    string entrada;
    size_t pos;
    int t;
    bool marc;
    char aux;
    cin>>t;
    for(int k=0; k<t; k++){
        cin>>entrada;
        marc=true;
        for(pos=0; pos<entrada.length()/2; pos++){
            if(entrada[pos]!=entrada[entrada.length()-1-pos]){
                marc=false;
                break;
            }
        }
        if(marc==false)
            cout<<entrada<<endl;
        else{
            pos=1;
            marc=false;
            while(pos<=entrada.length()/2){
                if(entrada[0]!=entrada[pos]){
                    marc=true;
                    aux=entrada[0];
                    entrada[0]=entrada[pos];
                    entrada[pos]=aux;
                    break;
                }
                pos++;
            }
            if(marc==true)
                cout<<entrada<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
