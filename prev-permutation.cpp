// Fail and Try, Loop ^+^
// author : @I_Love_My_Sherniii

// 17-09-23
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

void prevPermutation(vector<int>& nums) {
	print(nums);

	int break_point = 0;
	int length = nums.size();

	for(int i = length - 2; i >= 0; --i){
		if(nums[i] < nums[i+1]){
			break_point = i;
			break;
		}
	}

	int firstGreaterValue = INT_MAX;
	int indexOfFirstGreaterValue = -1;

	for(int i = break_point + 1; i < length; ++i){

		if(nums[i] > nums[break_point]){

			if(firstGreaterValue > nums[i]){
				firstGreaterValue = nums[i];
				indexOfFirstGreaterValue = i;
			}
		}
	}

	d(break_point) d(firstGreaterValue) dl(indexOfFirstGreaterValue)

	if(indexOfFirstGreaterValue < 0){
		sort(nums.begin(), nums.end());
	}
	else{
		swap(nums[break_point], nums[indexOfFirstGreaterValue]);
		sort(nums.begin()+break_point+1, nums.end());
	}
	print(nums)

	// 4 5 2 2 2 3 1  
}

void solve(){
	int n; cin >> n;
	vector<int>arr(n);

	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	prevPermutation(arr);
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}