#include <iostream>
using namespace std;

const int MAXX = 100;

struct stack {
    char bil[MAXX];
    int top = 0;
};

void push(stack &s, char x){
    if (s.top < MAXX) {
        s.bil[s.top] = x;
        s.top++;
    }
}

char pop(stack &s, char &x){
    if (s.top > 0) {
        s.top--;
        x = s.bil[s.top];
    }
    return x;
}
int main () {
    stack s;
    char word[100];
    char reverse[100];
    cout << "Enter a word: ";
    cin >> word;
    int j = 0;
    while (word[s.top] != '\0') {
        push(s, word[s.top]);
        j++;
    }
    int i = 0;
    while (s.top > 0) {
        pop(s, reverse[i]);
        i++;
    }
    reverse[i] = '\0';
    cout << "Original word: " << word << endl;
    cout << "Reversed word: " << reverse << endl;
    return 0;
}