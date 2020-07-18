#include<bits/stdc++.h>
using namespace std;
int main()
{
    string msg;
    int bastao, floco, tam;
    bastao=floco=0;

    cin>>msg;
    cin>>tam;
    for(unsigned int i=0; i<msg.length(); i++){
        if(msg[i]=='*')
            floco++;
        else if(msg[i]=='?')
            bastao++;
    }

    if((floco==0 && (msg.length()-(floco+bastao))<tam) || ((msg.length()-(floco+bastao)*2)>tam))
        cout<<"Impossible"<<endl;
    else{
        if((msg.length()-(floco+bastao))<tam){

            size_t pos=msg.find('*');
            string t;
            t=msg[pos-1];

            for(int i=0; i<(tam-(msg.length()-(floco+bastao))); i++)
                msg.insert(pos, t);

            pos=msg.find('*');
            while(pos!=string::npos){
                msg.erase(pos, 1);
                pos=msg.find('*');
            }
            pos=msg.find('?');
            while(pos!=string::npos){
                msg.erase(pos, 1);
                pos=msg.find('?');
            }

        }else if((msg.length()-(floco+bastao)*2)>tam){

        }
        cout<<msg<<endl;
    }

    return 0;
}
