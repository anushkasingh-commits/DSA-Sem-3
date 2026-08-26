// Stack inplemetation using stl

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
// 	stack<int> st;

// 	st.push(10);
// 	st.push(20);
// 	st.push(30);

// 	st.pop();

// 	st.push(40);

// 	cout << st.top() << endl;
    
//     cout << st.size() << endl;

//     while(!st.empty()) {
//     	cout << st.top() << " ";
//     	st.pop();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;

	stack<int> st, temp;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.push(x);
	}
	while (!st.empty()) {
		if (st.top() % 2 != 0) {
			temp.push(st.top());
		}
		st.pop();
	} 
	while (!temp.empty()) {
		st.push(temp.top());
		temp.pop();
	} 
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main () {
// 	int n;
// 	cin >> n;

// 	stack<int> st, st2;

// 	for (int i = 0; i < n; i++) {
// 		int x;
// 		cin >> x;
// 		st.push(x);
// 	}
// 	while (!st.empty()) {
// 		st2.push(st.top());
// 		st.pop();
// 	}
// 	while (!st2.empty()) {
// 		cout << st2.top() << " ";
// 		st2.pop();
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;

// 	stack<int> st, st2;

// 	for (int i = 0; i < n; i++) {
// 		int x;
// 		cin >> x;
// 		st.push(x);
// 	}
//     int mid = n/2;
// 	for (int i = 0; i < mid; i++) {
//         st2.push(st.top());
//         st.pop();
// 	}
// 	cout << st.top() << endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main () {

// 	int n;
// 	cin >> n;

// 	stack<int> st, st2;
// 	for (int i = 0; i < n; i++) {
// 		char x;
// 		cin >> x;
// 		st.push(x);
// 	}
// 	while (!st.empty()) {
// 		if (st.top() == '(')
// 	}

// 	return 0;
// }



























