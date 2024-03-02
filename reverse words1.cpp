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
string reverse_word(string line){
		stack<char>s;
		string str1="";
		int n = line.size();
		for(int i = 0 ; i <= n ; i++){
				if(line[i] == ' ' || i == n){
						while(!s.empty()){
								str1 = str1 + s.top();
								s.pop();
						}
						str1 += " ";
				}
				else{
						s.push(line[i]);
				}
		}
		return str1;
}
void S(int T = 0) {
		string str;
		getline(cin , str);
		cout << reverse_word(str);
}
signed main(){
		FAST_IO
		int TESTCASES = 1;
	//	cin >> TESTCASES;
		while(TESTCASES--){
				S();
		}
}

