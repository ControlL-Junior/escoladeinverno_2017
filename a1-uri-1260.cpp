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

int main(){
    int n;
    scanf("%d",&n);
	getchar();
	getchar();
    while(n--){
    	msi mapa;
		string tree;
		int total = 0;
		while(getline(cin,tree) && !tree.empty()){
			mapa[tree]++;
			total++;
		}
		msi::iterator it;
		for(it = mapa.begin();it != mapa.end(); it++){
			printf("%s %.4lf\n",it->F.c_str(),((it->S)*100.0/total));
		}
		if(n)cout << endl;
    }
    return 0;
}
