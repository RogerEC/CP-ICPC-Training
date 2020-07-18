#include<bits/stdc++.h>
using namespace std;
#define inf 3000000

int main()
{
    ios_base::sync_with_stdio(false);
    unsigned int n, cont[3][3]={0,0,0,0,0,0,0,0,0}, trocas=0;
    string girlanda, rgb="RGB", padrao="AAA";

    cin>>n;
    cin>>girlanda;

    for(unsigned int i=0; i<3; i++){
        for(unsigned int j=0; j<3; j++){
            for(unsigned int k=j; k<n; k+=3)
                if(girlanda[k]!=rgb[i])
                    cont[i][j]++;
        }
    }

    unsigned int menor=inf, lin, col;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(menor>cont[i][j]){
                menor=cont[i][j];
                lin=i;
                col=j;
            }

    trocas+=menor;
    padrao[col]=rgb[lin];

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(i==lin || j==col)
                cont[i][j]=inf;

    menor=inf-1;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(menor>cont[i][j]){
                menor=cont[i][j];
                lin=i;
                col=j;
            }

    trocas+=menor;
    padrao[col]=rgb[lin];

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(i==lin || j==col)
                cont[i][j]=inf;

    menor=inf-1;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(menor>cont[i][j]){
                menor=cont[i][j];
                lin=i;
                col=j;
            }

    trocas+=menor;
    padrao[col]=rgb[lin];

    for(unsigned int i=0; i<n; i++)
        girlanda[i]=padrao[i%3];

    cout<<trocas<<endl;
    cout<<girlanda<<endl;

    return 0;
}
