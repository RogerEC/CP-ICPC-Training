#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n, aux, soma;
    vector<int> skill;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux;
        skill.push_back(aux);
    }
    soma=0;
    sort(skill.begin(), skill.end());
    for(int i=0; i<n; i+=2)
        soma+=skill[i+1]-skill[i];
    cout<<soma<<endl;
    return 0;
}
