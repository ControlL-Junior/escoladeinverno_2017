#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

#define MAXE 109

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<string,int> msi;
typedef map<ii,int> mi;

vector<int> grafo[MAXE];
int vis[MAXE];


void dfs(int pai){
	vis[pai]= 1;
	for(int i =0;i <  grafo[pai].size();i++){
		if(!vis[grafo[pai][i]]){
			dfs(grafo[pai][i]);
		}
	}
}


int main(){
	int e,l,n=1;
	while(scanf("%d %d",&e,&l) && e && l){
		bool falha = false;
		while(l--){
			int a,b;
			scanf("%d %d",&a,&b);
			grafo[a].pb(b);
			grafo[b].pb(a);
		}
		memset(vis,0,sizeof vis);
		dfs(1);
		for(int i =1;i<=e;i++){
			if(!vis[i]){
				falha = true;
				break;
			}
		}
		printf("Teste %d\n",n);
		if(falha){
			printf("falha\n\n");
		}else{
			printf("normal\n\n");
		}

		for(int i =0;i<=e;i++){
			grafo[i].clear();
		}
		n++;
	}
	return 0;
}

