#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define m1 cout << "-1\n";
#define no cout << "NO\n";
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const long double EPS = 1e-9;
const int MAXN = 1e5 * 5;
const int LOGN = __lg(MAXN) + 1;
 
template<typename T>
void printa(const vec<T>& a) {
  for (auto& p: a) {
    cout << p << ' ';
  }
  cout << endl;
}
template<typename T1, typename T2>
istream& operator >> (istream& in, pair<T1, T2>& p){
  in >> p.first;
  in >> p.second;
  return in;
}
