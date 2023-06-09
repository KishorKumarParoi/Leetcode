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

void solve(){
  int n, target; cin >> n >> target;
  vector<int>v(n);

  map<int,int>mp;

  for(int i = 0; i < n; ++i){
    cin >> v[i];
    mp[v[i]] = i + 1;
  }

  vector<int>ans;

  for(int i = 0; i < n; ++i){
    int find = target - v[i];
    // d(find) dl(mp[find])

    if(mp[find] > 0 && mp[find] != (i+1)){
      ans.push_back(i);
      ans.push_back(mp[find] - 1);
      break;
    }
  }

  // cout << n << target << endl;
  // print(v)

  print(ans)
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}