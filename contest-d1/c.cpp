#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

#define MAXESP 10000
#define MAXARV 1000000

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<string,int> msi;
typedef map<ii,int> mi;

int main(){
	int n,m;
	scanf("%d",&n);
	while(n){
		map<si,int> combos; 
		m=n;
		while(n--){
			si courses;
			for(int i =0;i<5;i++){
				int x;
				scanf("%d",&x);
				courses.insert(x);
			}
			combos[courses]++;
		}
		map<si,int>::iterator it,aux;
		aux = it = combos.begin();
		int max = it->S;
		for(it++;it != combos.end();it++){
			if(it->S == aux->S)
				max+=it->S;
			else if(it->S > aux->S){
				max = it->S;
				aux = it;
			}
		}
		printf("%d\n",max);
		scanf("%d",&n);
	}
	return 0;
}

