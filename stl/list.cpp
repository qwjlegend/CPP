#include <iostream>
#include <list>

using namespace std;

/*
1. Double linked list with more functions
2. Better than traditional double linked list
*/

int main(){
    list<int> list1 = {5, 2, 4, 6, 2};
    list<int> list2 = {7, 6, 1, 9};
    for (auto& elm: list1){
        cout << elm << ' ';
    }
    cout << endl;
    return 0;
}

