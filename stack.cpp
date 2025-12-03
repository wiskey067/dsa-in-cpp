#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st; //LIFO structure
	st.push(10); // push elements onto stack
	st.push(20); // push another element
	st.pop();    // pop the top element (no argument)
	int top = st.empty() ? -1 : st.top(); // get the top element safely
	st.pop(); // remove the top element
	int size = st.size(); // get the size of the stack
	cout << "top: " << top << ", size: " << size << endl; // print top and size
	return 0;
}
