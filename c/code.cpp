#include<bits/stdc++.h>  
//code by usernameharsh
using namespace std;
#define ll long long int
#define eol cout<<"\n";
#define co cout<<
#define test() ll T; cin>>T; for(ll tc=0;tc<T;tc++)

#define f0i(n) for(ll i=0;i<n;i++)
#define f0j(n) for(ll j=0;j<n;j++)
#define f0k(n) for(ll k=0;k<n;k++)

#define f1i(n) for(ll i=1;i<=n;i++)
#define f1j(n) for(ll j=1;j<=n;j++)
#define f1k(n) for(ll k=1;k<=n;k++)


class graph{
    public : 
};

void input(ll a[],ll n){
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
}
void output(ll a[],ll n){
    for(ll i=0;i<n;i++){
        co a[i]<<" ";
    }eol
}

int main(){
    
    /*ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    // test(){

    // }
}

/*
Sample input :- 
3
24 3 4

Sample output :- 
waiting time : 0 24 27 
turnaround time : 24 27 31 
*/