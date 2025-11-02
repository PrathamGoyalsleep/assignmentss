#include <bits/stdc++.h>
using namespace std;

class mystack {
public:
    int size = 2;     // max capacity
    int st[2];        // fixed storage
    int top = -1;

    void push(int x) {
        if (top >= size - 1) {
            cout << "Stack overflow" << endl;
        } else {
            top++;
            st[top] = x;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return -1;
        } else {
            int x = st[top];
            top--;
            return x;
        }
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return st[top];
    }

    int sizeofstack() {
        return top + 1;
    }

    bool isempty() {
        return (top == -1);
    }

    bool isfull() {
        return (top == size - 1);
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            for (int i = 0; i <= top; i++) {
                cout << st[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    mystack s1;
    s1.push(2);
    cout << "Peek: " << s1.peek() << endl;
    cout << "Popped: " << s1.pop() << endl;

    s1.push(3);
    s1.display();

    s1.push(5);
    s1.display();

    cout << "Is full? " << (s1.isfull() ? "Yes" : "No") << endl;

    return 0;
}
