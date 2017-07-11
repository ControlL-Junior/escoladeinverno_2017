#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<string,int> msi;
typedef map<ii,int> mi;

int main(){
	int n;
	while(scanf("%d",&n) && n){
		priority_queue<int> pq;
		int custo =0;
		while(n--){
			int x;
			scanf("%d",&x);
			pq.push(-x);
		}
		while(!pq.empty()){
			int soma = pq.top();
			pq.pop();
			soma+=pq.top();
			pq.pop();
			pq.push(soma);
			custo-=soma;
		}
		printf("%d\n",custo);
	}
	return 0;
}