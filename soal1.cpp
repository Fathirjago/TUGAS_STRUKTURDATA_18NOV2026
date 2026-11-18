#include <iostream>
using namespace std;

const int MAXX = 5;

struct stack {
    int bil[MAXX];
    int top = 0;
};

void push(stack &s, int x){
    if (s.top == MAXX) {
        cout << "Stack is full" << endl;
    }else {
        s.bil[s.top] = x;
        s.top++;
    }
}
void pop(stack &s, int &x){
    if (s.top == 0) {
        cout << "stack is empty" << endl;
    }else{
        s.top--;
        x = s.bil[s.top];
        cout << "Removed successfully" << endl;
    }
}
void peak(stack &s){
    if (s.top == 0){
        cout << "stack is empty" << endl;
    }else {
        cout << "Top element: " << s.bil[s.top - 1] << endl;
    }
}
void display(stack &s){
    if (s.top == 0){
        cout << "stack is empty"<<endl;
    }else{
        for (int i = s.top - 1; i >= 0; i--){
            cout << s.bil[i] << " ";
        }
        cout << endl;
    }
}
int main () {
    stack s;
    int pil, x;
    pil = 0;
    while (pil != 5){
        cout << "\n===== STACK MENU =====" << endl;
        cout << "1. Push 2. Pop 3. Peak" << endl;
        cout << "4. Display 5. Exit" << endl;
        cout << "\n choice operation: ";
        cin >> pil;

        if (pil == 1){
            cout << "Enter value: ";
            cin >> x;
            push(s, x);
        }else if (pil == 2){
            pop(s, x);
        }else if (pil == 3){
            peak(s);
        }else if (pil == 4){
            display(s);
        }else {
            cout << "invalid choice" << endl;
        }
    }
    return 0;
}