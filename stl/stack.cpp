#include <iostream>
#include <stack>

using namespace std;
/*
Internally using deque
empty, size, top, push, pop
*/

void print(stack<int> s){
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

int main(){
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(10);
    print(s);
}

