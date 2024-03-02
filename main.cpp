#include <iostream>
using namespace std;
class Stack{
private:
		int length { };
		int top { };
		int *array;
public:
		Stack(int length) : length(length) , top(-1){
				array = new int[length];
		}
		~Stack() {
				delete[] array;
		}
		void push(int val){
				array[++top] = val;
		}
		int pop(){
				return array[top--];
		}
		int peek(){
				return array[top];
		}
		int isFull() {
				return top == length - 1;
		}
		int isEmpty() {
				return top == -1;
		}
		// Hard homework 3
		// 0(N) time and memory
		void insert_bottom(int val){
				for(int i = top ; i >= 0 ; i--){
						array[i+1] = array[i];
				}
				top++;
				array[0] = val;
		}

		void reverse_stack(){
				if(isEmpty())
						return;
				int cur = pop();
				reverse_stack();
				insert_bottom(cur);
		}

		void print(){
				for(int i = top ; i >= 0 ; i--){
						cout << array[i] << " ";
				}
				cout << '\n';
		}
};
int main() {
		Stack st(5);
		st.push(5);
		st.push(2);
		st.push(3);
		st.print();
		st.insert_bottom(1);
		st.print();

}
