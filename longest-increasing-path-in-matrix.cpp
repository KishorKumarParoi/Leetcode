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
int dp[222][222];
int dfs(vector<vector<int>>& mat, int prev, int i, int j) {
	int h = mat.size(), w = mat[0].size();

	if (prev >= mat[i][j]) return 0;
	// if (i < 0 || j < 0) return 0;
	// if (i >= h || j >= w) return 0;

	if (dp[i][j]) return dp[i][j];

	int d[10];
	d[0] = i < h - 1 ? dfs(mat, mat[i][j], i + 1, j) : 0;
	d[1] = i ? dfs(mat, mat[i][j], i - 1, j) : 0;
	d[2] = j < w - 1 ? dfs(mat, mat[i][j], i, j + 1) : 0;
	d[3] = j ? dfs(mat, mat[i][j], i, j - 1) : 0;

	dp[i][j] = max(d[0], max(d[1], max(d[2], d[3]))) + 1;
	return dp[i][j];
}

int longestIncreasingPath(vector<vector<int>> &	mat) {
	int h = mat.size(), w = mat[0].size();
	int maxlen = 0;

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			maxlen = max(maxlen, dfs(mat, -1, i, j));
		}
	}

    return maxlen;
 } 

};

void solve(){
  
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}