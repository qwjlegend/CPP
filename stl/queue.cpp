#include <iostream>
#include <queue>
/*
1. FIFO
2. push at end, pop from front
3. front, back, push, pop, empty, size
*/
using namespace std;

void print(queue<int> q){
    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}

int main(){
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(1);
    print(q);
}

