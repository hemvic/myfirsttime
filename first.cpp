
    //HEMANC21
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long             ll;
typedef long double           ld;
typedef pair<int,int>         pii;
typedef pair<ll,ll>           pll;
typedef pair<double,double>   pdd;
typedef vector<ll>            vl;
typedef vector<pll>           vpl;
typedef vector<pii>           vpi;
typedef vector<int>           vi;
typedef vector<vector<int> >   vvi;
typedef vector<vector<ll> >    vvl;
#define yeah                  cout<<"Yes"<<endl
#define nope                  cout<<"No"<<endl
#define forn(i,e)             for(ll i = 0; i < e; i++)
#define forsn(i,s,e)          for(ll i = s; i < e; i++)
#define rforn(i,s)            for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e)         for(ll i = s; i >= e; i--)
#define ln                    endl
#define dbg(x)                cout<<#x<<" = "<<x<<ln
#define mp                    make_pair
#define pb                    push_back
#define fi                    first
#define se                    second
#define INF                   2e18
#define all(x)                (x).begin(), (x).end()
#define sz(x)                 (ll)(x).size()
 
 ll modmul(ll a,ll b,ll m){
    a%=m;
    b%=m;
    return (a*b)%m;
 }
 
ll binpow(ll a, ll b, ll MOD) {
    a %= MOD;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
 
ll gcd(ll a, ll b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}
ll lcm (ll a, ll b) {
    return a / gcd(a, b) * b;
}
 
string DecimalToBinary(int num)
{
    string str;
    while(num){
    if(num & 1) 
        str+='1';
    else 
        str+='0';
    num>>=1; 
    }   
    return str;
}
 
 
ll MOD = 1000000007;
//const ll N=1e5+5;
//ll dp[N];
 
 bool unique(string str)
{
 
    // If length is greater than 265,
    // some characters must have been repeated
    
 
    bool chars[10000] = { 0 };
    for (int i = 0; i < str.length(); i++) {
        if (chars[int(str[i])] == true)
            return false;
 
        chars[int(str[i])] = true;
    }
    return true;
}

void solve(){
   
   string s;
   cin>>s;
   
   forn(i,s.size()){
       if(s[0]=='?') s[0]='0';
       else if(s[i]=='?') s[i]=s[i-1];
   }
   cout<<s<<ln;
        
    
    
}
      
    
 

 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
 
    cout<<fixed<<setprecision(0);
    ll t=1;
    cin >> t;
   
    forn(i,t)
    {   
        solve();
    }
    
    
    return 0;
}
