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
	unsigned long int x;
	int n;
	bool isPrime;
	scanf("%d",&n);
	while(n--){
		scanf("%lu",&x);
		isPrime = true;
		if(x <= 1){
			isPrime = false;
		}else if(x!=2 ){
			if(x%2 !=0){
				unsigned long int limite = sqrt(x);
				for(int i =3; i <= limite;i++){
					if(x%i ==0){
						isPrime = false;
						break;
					}
				}
			}else{
				isPrime = false;
			}
		}
		printf(isPrime?"Prime\n":"Not Prime\n");
	}
	return 0;
}