class Solution {
public:
bool isValid(string &s) {
		stack<char>st;
		for(int i = 0 ; i < s.size() ; i++) {
				if(s[i] == '[' || s[i] == '{' || s[i] == '(')
						st.push(s[i]);
				else{
						if(st.empty())
								return false;
						char z = st.top();
						if(z == '(' && s[i] == ')' || z == '[' && s[i] == ']' || z == '{' && s[i] == '}') {
								st.pop();
								continue;
						}
						else{
								return false;
						}
				}
		}
		if(!st.empty())
				return false;
		return true;
}
};