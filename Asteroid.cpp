class Solution {
public:
   vector<int> asteroidCollision(vector<int>& asteroids){
		vector<int>ans;
		vector<int>real_ans;
		stack<int>st;
		for(int i = 0; i < asteroids.size(); i++){
				int ast = asteroids[i];
				if(ast > 0){
						st.push(ast);
				}
				else{
						bool stop = false;
						int x = -1 * ast;
						if(st.empty()){
								stop = true;
								ans.push_back(ast);
						}
						while(!stop){
								if(x > st.top()){
										st.pop();
								}
								else{
										if(x == st.top()){
												st.pop();
												break;
										}
										stop = true;
								}
								if(st.empty()){
										stop = true;
										ans.push_back(ast);
								}
						}
				}
		}
		while(!st.empty()){
				real_ans.push_back(st.top());
				st.pop();
		}
		int n = ans.size();
		for(int i = n - 1 ; i >= 0 ;i--){
				real_ans.push_back(ans[i]);
		}
		reverse(real_ans.begin(), real_ans.end());
		return real_ans;
}
       
};