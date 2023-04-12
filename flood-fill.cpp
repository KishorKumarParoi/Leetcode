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
#define sz(x) (int)x.size()

void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>>& image) {
	int n = sz(image);
	int m = sz(image[0]);

	if (i < 0 || j < 0) return ;
	if (i >= n || j >= m) return;
	if (image[i][j] != initialColor) return;

	image[i][j] = newColor;

	dfs(i + 1, j, initialColor, newColor, image);
	dfs(i - 1, j, initialColor, newColor, image);
	dfs(i , j + 1, initialColor, newColor, image);
	dfs(i , j - 1, initialColor, newColor, image);
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
	int initialColor = image[sr][sc];
	int newColor = color;
	if (initialColor != newColor)
		dfs(sr, sc, initialColor, newColor, image);
	return image;
}
};

void solve(){
  
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}