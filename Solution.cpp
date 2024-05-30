#include<bits/stdc++.h>

#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing

#define pb push_back
#define endl '\n'
#define fi first
#define se second
#define INF INT64_MAX-INT32_MAX
#define inf INT64_MIN - INT32_MIN
#define mp make_pair
#define int long long

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;

#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

int M=1e9+7;

ll ceil(ll a,ll b)// ceil(a/b)
{
     if(a%b == 0)return a/b;
     else return (a/b)+1;
}

ll pow(long long x,int n, int m)
{
   if(n == 0)return 1;
     else
     {
         ll temp;
         temp = pow(x,n/2,m);
         temp = ((temp%m)*(temp%m))%m;
         if(n%2 == 1)return (temp*x)%m;
         return temp;
     }
}

int32_t main()
{ // never use power function of c++ ever again
// vector <vector<int>> grid(n,vector<int>(n,-1)); declaring a 2d vector
ios :: sync_with_stdio(false);
cin.tie(NULL);
cout.tie(0);
 
return 0;
}