#include <bits/stdc++.h>
using namespace std;

class Stack {
    private:
    // DS used for implementation
    int arr[1000];
    int top = -1;

    public:
    // methods
    //1. push
    void push(int x) {
        top++;
        arr[top] = x;
    }
    //2. pop
    void pop() {
        if (top != -1) top--;
    }
    //3. size
    int sz() {
        return top+1;
    }
    //4. top
    int Top() {
        return arr[top];
    }
    //5. isEmpty
    bool isEmpty () {
        if (top == -1) return true;
        return false;
    }
    //6. isFull
    bool isFull() {
        if (top == 999) return true;
        return false;
    }
};

int main () {

    // Stack *s = new Stack();
    Stack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.push(a);
    }
    cout << s.sz() << endl;
    cout << s.Top() << endl; 

    while (!s.isEmpty()) {
        cout << s.Top() << " ";
        s.pop();
    }
    return 0;
}