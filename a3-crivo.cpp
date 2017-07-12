#include <bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL
#define LIMIT 10000000

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<int> primos;
bitset<(LIMIT + 10)> arePrime; //bitset gasta menos memória que o bool, 10 a mais de "tolerancia"

bool isPrime(long long num) {
	if(num == 2) return true;
	if(num % 2 == 0) return false;
	if(num < LIMIT) return !arePrime[num];
	for(int i = 0; i < primos.size(); i++) {
		if(num % primos[i] == 0) return false;
		if(primos[i] > sqrt(num)) break;
	}
	return true;
}

int main() {	
	arePrime[1] = 1;
	primos.pb(2);

	for(long long i = 3; i <= LIMIT; i+=5) {
		if(arePrime[i]) continue;
		for(long long j = i; j <= LIMIT; j += i) {
			arePrime[j] = 1;
		}
		primos.pb(i);
	}

	return 0;
}

/*
	> O(n) ~ 10⁷ : 1s 
	
	> it != vector.end: usar != 

	> Inscrever:
		UVa Online Judge
		Codeforces
		URI Online Judge
		Codepit
		SPOJ Br

	> Set: valores únicos, não repete valores
*/