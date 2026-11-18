#include <iostream>
using namespace std;

const int MAXX = 5;

struct queue{
    int bil[MAXX];
    int front = 0;
    int rear = 0;
};
void enqueue(queue &q, int x){
    if (q.rear == MAXX) {
        cout << "queue overflow!! cannot add more data" << endl;
    }else {
        q.bil [q.rear] = x;
        q.rear++;
        cout << x << " inserted successfully" << endl;
    }
}
void dequeue(queue &q, int &x) {
    if (q.front == q.rear){
        cout << "queue underflow!! cannot remove data" << endl;
    }else {
        int x = q.bil[q.front];
        q.front++;
        cout << x << " removed successfully" << endl;
    }
}
void front(queue &q){
    if (q.front == q.rear){
        cout << "queue is empty" << endl;
    }else {
        cout << "front element is: " << q.bil[q.front] << endl;
    }
}
void display(queue &q){
  if (q.front == q.rear){
        cout << "queue is empty" << endl;
    }else {
        cout << "queue ";
        for (int i = q.front;i < q.rear; i++){
            cout << q.bil[i] << " ";
        }
        cout << endl;
    }
}
int main () {
    queue q;
    int pil, x;
    pil = 0;
    while (pil != 5){
        cout << "\n===== QUEUE MENU =====" << endl;
        cout << "1. Enqueue 2. Dequeue 3. Front" << endl;
        cout << "4. Display 5. Exit" << endl;
        cout << "\n choice operation: ";
        cin >> pil;

        if (pil == 1){
            cout << "Enter value: ";
            cin >> x;
            enqueue(q, x);
        }else if (pil == 2){
            dequeue(q, x);
        }else if (pil == 3){
            front(q);
        }else if (pil == 4){
            display(q);
        }else {
            cout << "invalid choice" << endl;
        }
    }
    return 0;
}