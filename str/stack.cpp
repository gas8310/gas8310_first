#include <iostream>
#include <stack>

using namespace std;

int main(void){
	stack<int> s;
	s.push(7)	;
	s.push(5);
	while(!s.empty()){
		cout << s.top() << ' ';
		s.pop();
	}
	return 0;
}
