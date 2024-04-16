// ------------------------------------------------------------------------------------
// Author: spexcher
// Name: Gourab Modak
// email: spexcher@gmail.com
// Linktree: https://linktr.ee/spexcher/
// Github: https://github.com/spexcher/
// linkedin : https://www.linkedin.com/in/gourabmodak/
// ------------------------------------------------------------------------------------
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class key, class value, class cmp = less_equal<key>>
using omap = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template <typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
#define ll long long
#define ull unsigned long long
#define lld long double
#define eb emplace_back
#define pb push_back
#define ppb pop_back
#define sqrt(x) sqrtl((x))
#define ceil(x) ceill((x))
#define abs(x) labs((x))
#define floor(x) floorl((x))
#define ceildiv(a, b) ((a + b - 1) / b)
#define vi vector<int>
#define vll vector<ll>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvb vector<vector<bool>>
#define vvpii vector<vector<pii>>
#define vvpll vector<vector<pll>>
#define vpii vector<pii>
#define vpll vector<pll>
#define si set<int>
#define sll set<ll>
#define sc set<char>
#define mii map<int, int>
#define mll map<ll, ll>
#define mci map<char, int>
#define mcll map<char, ll>
#define pqi priority_queue<int>
#define pqll priority_queue<ll>
template <class T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <class T>
using max_heap = priority_queue<T>;
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sortall(x) sort(all(x))
#define ff first
#define ss second
#define spre(x) cout << fixed << setprecision(x)
#define PI 3.1415926535897932384626
#define infinity 1e18
#define py cout << "YES\n"
#define pm cout << "-1\n"
#define pn cout << "NO\n"
#define pm cout << "-1\n"
#define pl cout << "\n"
#define nl "\n"
#define sp " "
#define print(x) cout << x << "\n"
#define deb(x) cout << #x << "=" << x << endl
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())
#define unq(v) v.resize(distance(v.begin(), unique(all(v))))
#define getunique(v)                  \
  {                                   \
    sort(all(v));                     \
    v.erase(unique(all(v)), v.end()); \
  }
#define sum(v) accumulate(all(v), 0)
#define sz(x) (ll) x.size()
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) \
  for (int i = k; k <= n ? i <= n : i >= n; k <= n ? i += 1 : i -= 1)
#define FoS(i, k, n, step) \
  for (int i = k; k <= n ? i <= n : i >= n; k <= n ? i += step : i -= step)
#define setbits(n) __builtin_popcountll(n)
#define counttz(n) __builtin_ctzll(n)
#define countlz(n) __builtin_clzll(n)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define fast_io                      \
  startTime = clock();               \
  ios_base::sync_with_stdio(false);  \
  cin.tie(NULL);                     \
  cout.tie(NULL);                    \
  cout << fixed << setprecision(25); \
  cerr << fixed << setprecision(10)
clock_t startTime;
// i/p o/p overloads
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
  for (auto &x : a)
    cin >> x;
  return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
  for (auto &x : a)
    cout << x << '\n';
  return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
  int n = a.size();
  if (!n)
    return cout;
  cout << a[0];
  for (int i = 1; i < n; i++)
    cout << ' ' << a[i];
  return cout;
}
template <class Fun>
class y_combinator_result
{
  Fun fun_;

public:
  template <class T>
  explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}
  template <class... Args>
  decltype(auto) operator()(Args &&...args) { return fun_(*this, std::forward<Args>(args)...); }
};
template <class Fun>
decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }

//---------------------------------------------Snippet area---------------------------------------------------
namespace number_theory
{
  ll mod = 1000000007; // 1000000007 1000000009 998244353 2147483647
  ll fpow(ll x, ll y)
  {
    ll res = 1;
    x = x % mod;
    if (x == 0)
      return 0;
    while (y > 0)
    {
      if (y & 1LL)
        res = (res * x) % mod;
      y = y >> 1LL;
      x = (x * x) % mod;
    }
    return res;
  }
  bool isPowerOfTwo(int n)
  {
    if (n == 0)
      return false;
    return (ceil(log2(n)) == floor(log2(n)));
  }
  ll inv(ll a, ll p = mod) { return fpow(a, p - 2); }
  bool isPerfectSquare(ll x)
  {
    if (x >= 0)
    {
      ll sr = sqrt(x);
      return (sr * sr == x);
    }
    return false;
  }
  ll gcd(ll x, ll y)
  {
    if (x == 0)
      return y;
    if (y == 0)
      return x;
    return gcd(y, x % y);
  }
  bool isprime(ll n)
  {
    if (n <= 1)
      return false;
    if (n <= 3)
      return true;

    if (n % 2 == 0 || n % 3 == 0)
      return false;

    for (ll i = 5; i * i <= n; i += 6)
      if (n % i == 0 || n % (i + 2) == 0)
        return false;

    return true;
  }

  bool prime[15000105];
  void sieve(int n)
  {
    for (ll i = 0; i <= n; i++)
      prime[i] = 1;
    for (ll p = 2; p * p <= n; p++)
    {
      if (prime[p] == true)
      {
        for (ll i = p * p; i <= n; i += p)
          prime[i] = false;
      }
    }
    prime[1] = prime[0] = 0;
  }

  vector<ll> primelist;
  bool __primes_generated__ = 0;

  void genprimes(int n)
  {
    __primes_generated__ = 1;
    sieve(n + 1);
    for (ll i = 2; i <= n; i++)
      if (prime[i])
        primelist.push_back(i);
  }

  vector<ll> factors(ll n)
  {
    if (!__primes_generated__)
    {
      cerr << "Call genprimes you dope" << endl;
      exit(1);
    }
    vector<ll> facs;

    for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++)
    {
      if (n % primelist[i] == 0)
      {
        while (n % primelist[i] == 0)
        {
          n /= primelist[i];
          facs.push_back(primelist[i]);
        }
      }
    }
    if (n > 1)
    {
      facs.push_back(n);
    }
    sort(facs.begin(), facs.end());
    return facs;
  }

  vector<ll> getdivs(ll n)
  {
    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        divs.push_back(i);
        divs.push_back(n / i);
      }
    }

    getunique(divs);
    return divs;
  }
}

using namespace number_theory;

//---------------------------------------------End Snippet area-----------------------------------------------
#define int long long
void solve();
signed main()
{
  fast_io;
  int t = 1;
  cin >> t;
  Fo(i, 1, t)
  { // eprintf("--- Case #%lld start ---\n", i);eprintf("Case #%lld: ", i);solve();eprintf("--- Case #%lld end ---\n", i);eprintf("time = %.5lf\n", getCurrentTime());eprintf("++++++++++++++++++++\n");
    solve();
  }
  return 0;
}

void solve()
{
  // could not solve this problem sorry...
}