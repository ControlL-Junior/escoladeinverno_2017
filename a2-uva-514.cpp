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

int main(){
	int n;
	while(scanf("%d %d ",&n) && n){
		int x;
		while(scanf("%d",&x) && x){
			stack<int> s;
			queue<int> q;
			q.push(x);
			for(int i =1;i<n;i++){
				scanf("%d",&x);
				q.push(x);
			}
			x =1;
			while(!q.empty()){
				if(x == n+2) break;
				while(!s.empty() && q.front() == s.top()){
					q.pop();
					s.pop();
				}
				if(q.empty()) break;
				if(s.empty()  || q.front() != s.top()){
					s.push(x);
					x++;
				}
			}
			if(!q.empty()){
				printf("No\n");
			}else{
				printf("Yes\n");
			}
		}
		printf("\n");
	}
	return 0;
}