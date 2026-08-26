#include <bits/stdc++.h>
using namespace std;
class Queue {
    int arr[1000];
    int front = 0;
    int rear = -1;
public:
    void enqueue(int x) {
        rear++;
        arr[rear] = x;
    }
    void dequeue() {
        if (front <= rear) front++;
    }
    int sz () {
        return rear - front + 1;
    }
    int first() {
        return arr[front];
    }
    int last() {
        return arr[rear];
    }
    bool isEmpty() {
        return front > rear;
    }
};
int main () {
    Queue q;
    q.enqueue(10);
    q.enqueue(13);
    q.enqueue(12);
    q.enqueue(0);

    q.dequeue();

    cout << "Size of queue: " << q.sz() << endl;
    cout << "Front of queue: " << q.first() << endl;
    cout << "Rear of queue: " << q.last() << endl;

    while (!q.isEmpty()) {
        cout << q.first() << " " ;
        q.dequeue();
    }
    return 0;
}