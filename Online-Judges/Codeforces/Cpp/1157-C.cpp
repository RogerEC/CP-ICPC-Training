#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main(){

    fastin;
    vector<int> sequence;
    int l, r, last, n, aux;
    string movement;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>aux;
        sequence.pb(aux);
    }
    l=last=0; r=n-1;
    while(l<=r){
        if(l==r && sequence[l]>last){
            movement+="R";
            l++;
        }else if(sequence[l]==sequence[r]){
            if(sequence[r]==sequence[r-1] && sequence[l]==sequence[l+1]){
                if(sequence[r]>last)
                    movement+="R";
                break;
            }else if(sequence[r]==sequence[r-1]){
                movement+="L";
                last=sequence[l];
                l++;
            }else if(sequence[l]==sequence[l+1]){
                movement+="R";
                last=sequence[r];
                r--;
            }else
                break;
        }else if(sequence[l]<sequence[r]){
            if(sequence[l]>last){
                movement+="L";
                last=sequence[l];
                l++;
            }else if(sequence[r]>last){
                movement+="R";
                last=sequence[r];
                r--;
            }else
                break;

        }else if(sequence[r]<sequence[l]){
            if(sequence[r]>last){
                movement+="R";
                last=sequence[r];
                r--;
            }else if(sequence[l]>last){
                movement+="L";
                last=sequence[l];
                l++;
            }else
                break;
        }else
            break;
    }

    cout<<movement.size()<<endl;
    cout<<movement<<endl;

    return 0;
}

