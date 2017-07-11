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
typedef map<int,int> mi;

int main(){
	int n,m,x;
	scanf("%d",&n);
	m=n;
	mi ini,sec,third;
	while(n--){
		scanf("%d",&x);
		ini[x]++;
	}
	n=m-1;
	while(n--){
		scanf("%d",&x);
		sec[x]++;
	}
	n=m-2;
	while(n--){
		scanf("%d",&x);
		third[x]++;
	}
	mi::iterator it;
	for(it = ini.begin(); it != ini.end(); it++){
		if(sec[it->F] != it->S){
			printf("%d\n",it->F );
		}
	}
	for(it = sec.begin(); it != sec.end(); it++){
		if(third[it->F] != it->S){
			printf("%d",it->F );
		}
	}

	return 0;
}