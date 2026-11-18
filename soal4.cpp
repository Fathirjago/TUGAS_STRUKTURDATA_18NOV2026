#include <iostream>
using namespace std;

const int MAXX = 5;

struct queue{
    int bil[MAXX];
    int front = 0;
    int rear = 0;
    int count = 0;
};

void enqueue(queue &q, int x){
    if (q.count == MAXX) {
        cout << "queue overflow!! cannot add more data" << endl;
    }else {
        q.bil[q.rear] = x;
        q.rear = (q.rear + 1) % MAXX;
        q.count++;
        cout << x << " inserted successfully" << endl;
    }
}
void dequeue(queue &q){
    if (q.count == 0) {
        cout << "queue underflow!! cannot remove data" << endl;
    }else {
        int x = q.bil[q.front];
        q.front = (q.front + 1) % MAXX;
        q.count--;
        cout << x << " removed successfully" << endl;
    }
} 
void display(queue &q){
    if (q.count == 0){
        cout << "queue is empty" << endl;
    }else {
        for (int i = 0; i<q.count; i++){
            int x = q.bil[(q.front + i) % MAXX];
            cout << x << " ";
        }
        cout << endl;
    }
}
int main () {
    queue q;
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);

    dequeue(q);
    dequeue(q);

    enqueue(q, 60);
    enqueue(q, 70);

    display(q);
    return 0;
}