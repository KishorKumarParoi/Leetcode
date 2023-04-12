// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 12-04-23
#include <bits/stdc++.h>
            
#define endl "\n"
#define int long long
#define sz(s) (int)s.size()
#define pi acos(-1.0)
#define fr(i,a,b)                         for(int i=a;i<=b;++i)
#define all(v)                            v.begin(),v.end()
#define TEST                              int tc;cin>>tc; while(tc--)
// Debug
#define d(a)                              cout << #a << " : " << a << " ";
#define dl(a)                             cout << #a <<" : " << a << endl;
#define print(v)  for(auto x : v)         {cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v)         {cout<<x.first<<" "<<x.second<<endl;}
#define printArr(a,b,arr)                 for(int i=a;i<=b;++i) { cout<<arr[i]<< " ";} cout<<endl;

using namespace std;

const int N   = 1e6 + 5;
const int MOD = 1e9 + 7;


class Solution {
public:
 int N  = 1e5 + 9;
// const int M = 1e9 + 7;

int phi[100009];
void totient() {
	for (int i = 1; i < N; i++) phi[i] = i;
	for (int i = 2; i < N; i++) {
		if (phi[i] == i) {
			for (int j = i; j < N; j += i) phi[j] -= phi[j] / i;
		}
	}
}

int BinMultiply(int a, int b, int M) {
	int ans = 0;
	while (b) {
		if (b & 1)
			ans = (ans + a) % M;
		a = (a + a) % M;
		b >>= 1;
	}
	return ans;
}

int BinExpo(int a, int b, int M) {
	a %= M;
	int ans = 1;
	while (b) {
		if (b & 1)
			ans = BinMultiply(ans, a, M) % M;
		a = BinMultiply(a, a, M) % M;
		b >>= 1;
	}
	return ans;
}
    int superPow(int a, vector<int>& b) {
        totient();
        int val_b = 0, mul = 1, n = (int)b.size() ;

	for (int i = n - 1; i >= 0; i--) {
		int pow = BinExpo(10, n - i - 1 , phi[1337]);
		val_b += pow * b[i];
		// d(pow) d(val_b)
		val_b %= phi[1337];
		// d(val_b) dl(mul)
	}
    return BinExpo(a, val_b, 1337);
    }
};

void solve(){
  
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}