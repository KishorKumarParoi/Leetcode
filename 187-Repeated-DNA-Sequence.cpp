// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 21-05-23
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
    vector<string> findRepeatedDnaSequences(string s) {
         map<string,int>mp;

  for(int i = 0; i + 10 <= (int)s.size(); ++i){
  	string ss = s.substr(i, 10);
  	mp[ss]++;
  }

  // PRINT(mp)
  vector<string>ans;
  for(auto x : mp){
  	if(x.second >= 2)
  		// cout << x.first << endl
      ans.push_back(x.first);
  }
  return ans;
  }
};

void solve(){
  
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}