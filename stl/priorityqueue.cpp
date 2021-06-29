#include <iostream>
#include <queue>
#include <vector>
#include <functional>

/*
1. Constant time lookup of the largest or smallest element
2. By default, vector is the container used inside
3. Insertion, extraction is log time
4. make_heap, push_heap, pop_heap
*/

using namespace std;

template<typename T> void print_queue(T& q){
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    {
        priority_queue<int> q;
        for(int elm: {1, 3, 4, 5, 0, 9, 7, 2}){
            q.push(elm);
        }
        print_queue(q);
    }
    {
        priority_queue<int, vector<int>, greater<int>> q2;
        for(int elm: {1, 3, 4, 5, 0, 9, 7, 2}){
            q2.push(elm);
        }
        print_queue(q2);
    }
    {
        auto cmp = [](int left, int right) {return (left) < (right); };
        priority_queue<int, vector<int>, decltype(cmp) > q3(cmp);
        for(int elm: {1, 3, 4, 5, 0, 9, 7, 2}){
            q3.push(elm);
        }
        print_queue(q3);
    }
}

