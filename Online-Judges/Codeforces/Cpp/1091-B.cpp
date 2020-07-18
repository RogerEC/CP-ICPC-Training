#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

typedef struct pair<int, int> pii;
#define pb push_back
#define mp make_pair
#define f first
#define s second

int main()
{
    pii maior, menor, aux;
    int n;

    cin>>n;
    cin>>maior.f>>maior.s;
    for(int i=1; i<n; i++){
        cin>>aux.f>>aux.s;
        maior=max(maior, aux);
    }

    cin>>menor.f>>menor.s;
    for(int i=1; i<n; i++){
        cin>>aux.f>>aux.s;
        menor=min(menor, aux);
    }

    cout<<maior.f+menor.f<<' '<<maior.s+menor.s<<endl;

    return 0;
}
