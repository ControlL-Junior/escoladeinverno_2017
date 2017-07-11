#include <bits/stdc++.h>
#define F first
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

vi v;

int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		vi::iterator it;
		for(it=v.begin();it != v.end();it++){
			if(x <= *it){
				break;
			}
		}
		v.insert(it,x);
		int mid = v.size()/2;
		int ans = v.size()%2 == 0 ? (v[mid] + v[mid-1])/2:v[mid];
		printf("%d\n",ans);
	}
	return 0;
}
