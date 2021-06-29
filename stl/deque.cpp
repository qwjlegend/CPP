#include <iostream>
#include <deque>

/*
1. deque is and indexed squence container.
2. Allows fast insertion at both begining and end
3. Unlike vector, elements of dequeue are not stored contiguous
4. Uses individual allocated fixed size array, with additional
bookkeeping, meaning index based access to dequeu must perform 
two pointer dereference, but in vector we get in one dereference.
5. The storage of a deque is automatically expanded and contracted as needed
6. Expansion of dequeue is cheaper than expansion of vector
7. A deque holding just one element has to allocate its full internal array
8. Multiple linked vectors underlying

Random access - constant
Insertion or removal at the end or begining - constant
Insertion or removal randomly - o(n)
*/

using namespace std;

void print(const deque<int>& d){
    for (int num: d){
        cout << num << endl;
    }
}

int main(){
    {
        deque<int> dqu = {2, 3, 4};
        dqu.push_front(1);
        dqu.push_back(5);
        print(dqu);
    }
    {
        deque<int> dqu = {2, 3, 4};
        dqu.pop_front();
        dqu.pop_back();
        print(dqu);
    }

}

