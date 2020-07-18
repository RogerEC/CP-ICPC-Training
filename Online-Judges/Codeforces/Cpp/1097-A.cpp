#include<iostream>
#include<string>
using namespace std;

int main()
{
    bool marc=false;
    string mesa, mao;
    cin>>mesa;

    for(int i=0; i<5; i++){
        cin>>mao;
        if(mesa[0]==mao[0] || mesa[1]==mao[1])
            marc=true;
    }

    if(marc)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

/*

20
(()
(()()(
)))(
))
((
(()
((()((
()()
()()()))
()()
(()()(
()(
)
)
)
))
((
))
((
))

*/
