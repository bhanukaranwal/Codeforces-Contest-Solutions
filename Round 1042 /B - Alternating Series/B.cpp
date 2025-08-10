#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
 
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
#define no cout << "NO\n";
#define m1 cout << "-1\n";
 
typedef int64_t ll;
typedef unsigned long long ull;
typedef long double ld;
 
template<typename T>
void printa(const vec<T>& a) {
    for (const auto& p : a) {
        cout << p << ' ';
    }
    cout << endl;
}
 
template<typename T1, typename T2>
istream& operator>>(istream& in, pair<T1, T2>& p) {
    in >> p.first;
    in >> p.second;
    return in;
}
