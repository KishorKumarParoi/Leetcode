// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 03-05-23
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
	int divide(int dividend, int divisor) {
		if(divisor == dividend)
			return 1;

		bool isPositive = (dividend < 0 == divisor < 0);
		unsigned int a = abs(dividend);
		unsigned int b = abs(divisor);
		unsigned int val = 0;

		while(a >= b){
			unsigned int q = 0;
			while(a > (b << (q + 1)))
				++q;
			val += (1 << q);
			a -= (b << q);
		}

		if(val == 1 << 31 and isPositive)
			return INT_MAX;

		if(isPositive)
			return val;
		else
			return -val;
	}
	void solve(){
		int a, b; cin >> a >> b;
		cout << divide(a,b) << endl;
	}
};

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	Solution();
	
	return 0;
}