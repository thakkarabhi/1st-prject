


#include<bits/stdc++.h>

#define ll long long
#define si set<int>
#define sll set<ll>
#define sc set<char>
#define lcm(a,b) a*b/__gcd(a,b)
#define siitr set<int>::iterator
#define scit set<char>::iterator
#define mp make_pair
#define mapint map<int, int >
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vc vector<char>
#define vb vector<bool>
#define vd vector<double>
#define vviitr vector<vector<int> >::iterator
#define vvi vector<vector<int> >
#define vvc vector< vector<char> >
#define vvb vector<vector<bool> >
#define viitr vector<int>::iterator
#define vcitr vector<char>::iterator
#define f(i,j,n,k) for(int i=j;i<=n;i+=k)
#define all(c) c.begin(),c.end()
#define allr(c) c.rbegin(),c.rend()
#define pb push_back
#define pi pair<ll int,ll int>
#define endl '\n'
#define MOD 1000000007
#define hell 1000000007

ll int  gcdfun(ll int x, ll int y){ if(y==0) return x; else return gcdfun(y,x%y); }
using namespace std;
ll int lcmfun(ll int x,ll int y){
     return x*y/gcdfun(x,y);
}
ll int power(ll int x,ll int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)%hell ) * ( power(x, y / 2) )%hell)%hell;
    else
        return ((x %hell) * ((power(x, y / 2))%hell) * ((power(x, y / 2) )%hell));
}
 
ll minf(ll a,ll b){if(a<b) return a; else return b;}
ll maxf(ll a,ll b){if(a<b) return b; else return a;}
 class Complex
{
    int a,b;
public:
    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &dout,Complex c)
{
    cout<<c.a<<" "<<c.b<<endl;
    return dout;
}
istream& operator>>(istream &din,Complex &c)
{
    cin>>c.a>>c.b;
    return cin;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    Complex c1;
    cin>>c1; //c.operator>>(c1)
    cout<<c1;//h
}

