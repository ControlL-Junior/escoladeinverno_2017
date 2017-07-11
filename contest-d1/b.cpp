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
	int n;
	while(scanf("%d",&n) != EOF){
		vi sequence;
		si jolly;
		int m =n;
		while(n--){
			int x;
			scanf("%d",&x);
			sequence.pb(x);
		}
		for(int i = 0;i<m-1;i++){
			int x = abs(sequence[i]-sequence[i+1]);
			jolly.insert(x);
			//printf("%d ",x);
		}
		//si::iterator it;
		//for(it = jolly.begin();it != jolly.end();it++) printf("%d",*it);
		if(m ==1 ){
			printf("Jolly\n");
		}else if(jolly.size() != m-1){
			printf("Not jolly\n");
		}else if(*(--jolly.end()) >= m){
			printf("Not jolly\n");
		}else if(*(jolly.begin())<1){
			printf("Not jolly\n");
		}else{
			printf("Jolly\n");
		}
	}
	return 0;
}

