#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){

    int T;
    size_t ini, fim;
    bool flag;
    string frase, aux;

    cin>>T;
    cin.ignore();
    for(int i=0; i<T; i++){

        getline(cin, frase);
        ini=0;
        flag=true;

        while(flag){

            fim=frase.find(' ', ini);

            if(fim==string::npos){
                fim=frase.size();
                flag=false;
            }

            aux=tolower(frase[ini]);
            frase.erase(ini, 1);
            frase.insert(fim-1, aux+"ay");

            ini=fim+3;
        }
        frase[0]=toupper(frase[0]);
        cout<<frase<<endl;
    }

    return 0;
}
