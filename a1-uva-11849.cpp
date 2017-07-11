#include <bits/stdc++.h>
#define F first
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF && (n|m)){
        si ja,ji;
        for(int i =0;i<n;i++){
            int x;
            scanf("%d",&x);
            ja.insert(x);
            
        }
        for(int i =0;i<m;i++){
            int x;
            scanf("%d",&x);
            ji.insert(x);
            
        }

        int cont=0;
        
        si::iterator it;
        for(it = ja.begin();it != ja.end();it++){
            int x = *it; 
            if(ji.find(x) != ji.end()){
                cont++;
            }
        }

        printf("%d\n",cont);
    }
    return 0;
}
