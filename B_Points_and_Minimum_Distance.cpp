#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MX = 20005;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(2 * n);
        for (ll &x : v)
            cin >> x;

        sort(v.begin(), v.end());

        ll sum = 0;
        for (ll i = 1; i < n; i++)
        {
            sum += (abs(v[i] - v[i - 1]) + abs(v[i + n] - v[i + n - 1]));
        }
        cout << sum << "\n";
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " " << v[i + n] << "\n";
        }
    }
}
