#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N;
    cin>>N;
    string palavra;
    string saida;
    for(int i=0; i<N; i++)
    {
        cin>>palavra;
        if(palavra.length()<=10)
            cout<<palavra<<endl;
        else
        {
            saida=palavra[0];
            saida+=to_string(palavra.length()-2);
            saida+=palavra[palavra.length()-1];
            cout<<saida<<endl;
        }
        saida.clear();
    }
    return 0;
}
