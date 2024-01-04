// Author :- Mazin Shamshad
// Codeforces Problem
//  #pragma GCC optimize("Ofast")
//  #pragma GCC target("avx,avx2,fma")
//  #pragma GCC optimize ("O3")
//  #pragma GCC target ("sse4")
#include <bits/stdc++.h>
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
using namespace std;
// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type,less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;

// // find_by_order(k)  returns iterator to kth element starting from 0;

// order_of_key(k) returns count of elements strictly smaller than k;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

// Type Definitions
typedef unsigned long long ull;
typedef long long ll;
typedef long double lld;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<long double> vld;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

// Macros
#define pb push_back
#define eb emplace_back
#define mkp make_pair
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define forn(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Mazin_Shamshad           \
    ios::sync_with_stdio(false); \
    cin.tie(0);

// Input and Output
#define read_int(x) \
    int x;          \
    cin >> x;
#define read_ll(x) \
    ll x;          \
    cin >> x;
#define read_str(x) \
    string x;       \
    cin >> x;
#define write(x) cout << x;
#define writeln(x) cout << x << '\n';
#define flushit() cout.flush();

// string cshrtscts
string yup = "YES";
string nope = "NO";
string impossible = "impossible";
string possible = "possible";
string yes = "yes";
string no = "no";
string No = "No";
string Yes = "Yes";

void run_cases()
{
    read_str(s);
    read_int(m);
    while (m--)
    {
        read_int(l);
        read_int(r);
        read_int(k);
        while (k--)
        {
            char charToInsert = s[r - 1];
            s.insert(l - 1, 1, charToInsert);
            cout << s << endl;
            s.erase(s.begin() + r);
            rotate(s.begin() + l - 1, s.begin() + r - 1, s.begin() + r);
        }
    }
    writeln(s);
    return;
}

int main()
{
    Mazin_Shamshad;

    int test_cases = 1;
    cin >> test_cases;
    // IMPORTANT
    // check if there are t independent cases!!! IMPORTANT
    // cout << t==exists ? uncomment : leave as it is
    while (test_cases--)
    {
        run_cases();
    }
    return 0;
}