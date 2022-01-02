#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long 
#define deb(x) cout<< #x <<"="<< x <<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll>  vl;
typedef vector<pii> vpii;
typedef vector<pl>  vpl;
typedef vector<vi>  vvi;
typedef vector<vl>  vvl;


const int N=2e5 + 10;
vector<int>hsh(N,0);
vector<int>multiples(N,0);
vector<bool>sieve(N,true);
vector<int>hp(N,0),lp(N,0);

class DSU{
      vector<int>parent;
      vector<int>rank;
      public:
      DSU(int n){
            rank.resize(n+1);
            parent.resize(n+1);
            for(int i=0;i<=n;i++){
                  parent[i]=i;
                  rank[i]=1;
            }
      }
      
      int find(int x){
            if(x==parent[x]){
                  return x;
            }
            
            int temp=find(parent[x]);
            parent[x]=temp;
            return temp;
      }
      
      void Union(int x,int y){
            int parX=find(x);
            int parY=find(y);
            
            if(parX==parY){
                  return;
            }
            
            if(rank[parX]>rank[parY]){
                  parent[parY]=parX;
            }
            else if(rank[parY]>rank[parX]){
                  parent[parX]=parY;
            }
            else{
                  parent[parX]=parY;
                  rank[parY]++;
            }
            
            return;
      }
};
void SieveOf(){
      sieve[0]=sieve[1]=false;
      
      for(int i=2;i<N;i++){
            if(sieve[i]){
                  lp[i]=hp[i]=i;
                  for(int j=2*i;j<N;j+=i){
                        sieve[j]=false;
                        hp[j]=i;
                        if(lp[j]==0){
                              lp[j]=i;
                        }
                  }
            }
      }
      
      return;
}
int binexp(int a,int b,int m){
      int result=1;
      while(b>0){
            if(b&1){
               result=(result*1LL*a)%m;   
            }
           a=(a*1LL*a)%m;
           b>>=1; 
      }
      return result;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	      	// your code goes here
	}
	
	return 0;
}
