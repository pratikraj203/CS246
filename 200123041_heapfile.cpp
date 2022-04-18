#include<bits/stdc++.h>
using namespace std;
# define ll long long int 
# define rep(i,a,b) for(int i=a;i<=b;i++)
# define MOD 1000000007
//--exponentiation--//
ll bpow(ll x,ll y){
    ll ans=1;
    while(y>0){
        if(y%2==1){
            ans=(ans*x);
            
        }
        x=(x*x);
        y/=2;
    }
    return ans;
}
 
    
// }
// //----seive----//
// # define MAX 250009
// bool primmes[MAX+1];
// vector<int> v;
// void sieve(){
//     // bool *primes = new bool[MAX+1];
//     for(ll i =0; i<MAX+1; i++) {
//         primmes[i] = true;
//     }
//     ll sqr = sqrt(MAX);
//     primmes[0] = false;
//     primmes[1] = false;
//     for(ll p=2; p<=sqr; p++){
//         if(primmes[p]) {
//         for(ll i = p*p; i<=MAX; i+=p) {
//             primmes[i] = false;
//         }
//         }
//     }   
//     // vector<int> v;
//     rep(i,2,MAX){
//         if(primmes[i]){
//             v.push_back(i);
//         }
//     }
// }
//     //--logg--//
ll logg(ll x,ll y){
    ll c=1;
    ll count=0;
    while(c<x){
        c*=y;
        if(c>x){
            break;
        }
        count++;
    }
    return count;
}
// long long gcd(long long int arr, long long int b)
// {
// if(b==0)
//     return arr;
//     return gcd(b, arr % b);
// }
// long long lcm(ll arr, ll b)
// {
//     return (arr/gcd(arr, b))*b;
// }
// bool primes(int n){
//     rep(i,2,sqrt(n)){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// ll fac(int n){
//     int temp=n;
//     ll ans=1;
//     while(temp>0){
//         ans*=temp;
//     }
//}
//--DSU--//
// const int N=1e5+1; 
// int par[N];
// int size[N];
// void make(int v){
//     par[v]=v;
//     size[v]=1;
// }

// int find(int v){
//     if(v==par[v]){
//         return v;
//     }
//     return par[v]=find(par[v]);
// }
// void Union(int a,int b){
//     a=find(a);
//     b=find(b);
//     if(a!=b){
//         if(size[a]<size[b]){
//             swap(a,b);
//         }
//         par[b]=a;
//         size[a]+=size[b];
//     }
// }
int pg_size;
vector<vector<int>> pages;
int pct=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>pg_size;
    vector<int> v={pg_size-16};
    pages.push_back(v);
    while(1){
        int x;
        cin>>x;
        if(x==4){
            break;
        }else if(x==1){
            int si,key;
            cin>>si>>key;
            int chh=0;
            rep(i,0,pct){
            if(pages[i][0]>=(si+4)){
                chh=1;
                pages[i].push_back(key);
                pages[i][0]-=(si+4);
                break;
            }
            }
            if(chh==0){
                pct++;
                pages.push_back(v);
                pages[pct].push_back(key);
                pages[pct][0]-=(si+4);
                
            }

        }else if(x==2){
            if(pages[0][0]==pg_size-16){
                cout<<0<<endl;
            }else{
                cout<<pct+1<<" ";
                for(int i=0;i<=pct;i++){
                    cout<<pages[i].size()-1<<" ";
                }
                cout<<endl;
            }
        }else if(x==3){
            int pk;
            cin>>pk;
            int ch=0;
            int pgn,sno;
            rep(i,0,pct){
                rep(j,0,pages[i].size()-1){
                    if(pages[i][j]==pk&&j!=0){
                        ch=1;
                        pgn=i;
                        sno=j;
                        break;
                    }
                }
                if(ch==1){
                    break;
                }
            }
            if(ch==0){
                cout<<"-1"<<" "<<"-1"<<endl;
            }else{
                cout<<pgn<<" "<<sno-1<<endl;
            }
        }

    }
}

   
   

   
   
   
   

 




