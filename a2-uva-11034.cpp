#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

#define MAXE 109
#define ESQ 0
#define DIR 1

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
	int c;
	scanf("%d",&c);
	while(c--){
		int e,m,size=0,count=1;
		int lado = ESQ;//0 = esq, 1 = dir
		queue<int> l,r;
		scanf("%d %d",&e,&m);
		e*=100; 
		for(int i =0;i<m;i++){
			string side;
			int a;
			cin >>a >> side;
			if(side =="right"){
				r.push(a);
			}else{
				l.push(a);
			}
		}
		while(!l.empty() || !r.empty()){
			if(lado == ESQ){
				if(!l.empty() && l.front()+size <= e){
					size+=l.front();
					l.pop();
				}else{
					lado = DIR;
					size=0;
					count++;
				}
			}else {
				if(!r.empty() && r.front()+size <= e){
					size+=r.front();
					r.pop();
				}else{
					lado = ESQ;
					size=0;
					count++;
				}
			}
		}
		printf("%d\n",count );
	}
}