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
vector<vector<int>>allsubsets;
void generate(vector<int>&subset, int i, vector<int>&nums){
	
	if(i == (int)nums.size()){
		allsubsets.push_back(subset);
		return;
	}
	
	// not choosing current value
	generate(subset,i+1,nums);
	
	//choosing the current value
	subset.push_back(nums[i]);
	generate(subset,i+1,nums);
	subset.pop_back();
}
vector<vector<int>> subsets(vector<int>& nums){

    vector<int>subset;
    generate(subset, 0 , nums);
    return allsubsets;
}

};

void solve(){
  
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}