#include <iostream>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
#define sp " "
#define el '\n'
#define int long long
#define FAST_IO cin.sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ss second
#define f first
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define prntv(vec) for(auto i : vec) cout << i << " "
#define memo(m, v) memset(m, v, sizeof(m))
using namespace std;
const int MOD = /*998244353;*/ 1e9 + 7;
const long long oo = 1e16;
const int N = 1000 + 5;
string yes = "YES", no = "NO";
/*
<--------------------CODE GOES FROM HERE --------------------->
*/
int rev_num(int num){
		stack<int>st;
		while(num != 0){
				st.push(num%10);
				num /= 10;
		}
		int mul = 1;
		int ret = 0;
		while(!st.empty()){
				ret += (mul * st.top());
				st.pop();
				mul *= 10;
		}
		return ret;
}
void S(int T = 0) {
		int n; cin >> n;
		cout << rev_num(n);
}
signed main(){
		FAST_IO
		int TESTCASES = 1;
	//	cin >> TESTCASES;
		while(TESTCASES--){
				S();
		}
}


