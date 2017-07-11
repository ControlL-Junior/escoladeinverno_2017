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

#define LIM 100000000

bool teste(vi heights,int k){
	for(int i =1;i<heights.size();i++){
		int diff = heights[i] - heights[i-1];
		if(diff > k)return false;
		if(diff == k) k--;
	}
	return true;
}

int main(){
	int t;
	scanf("%d",&t);
	bool passou = false;
	for(int i =1; i <= t; i++){
		int n,k,low,high,mid ;
		scanf("%d",&n);
		vi heights;
		heights.pb(0);
		while(n--){
			int x;
			scanf("%d",&x);
			heights.pb(x);
		}
		//high = heights[heights.size()-1];
		//low = *(heights.begin());
		low = 1;
		high = 100000000;
		while(low <= high){
			mid = (low+high)/2;
			if(teste(heights,mid)){
				k = mid;
				high= mid-1;
			}else{
				low = mid+1;
			}
		}
		printf("Case %d: %d\n",i,k);
	}
	return 0;
}