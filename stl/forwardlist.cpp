#include <iostream>
#include <forward_list>
using namespace std;

/*
1. Single linked list
2. More functions than single linkedlist
3. =, assign, front, empty, max_size, clear, insert_after...
*/
int main(){
    forward_list<int> list1 = {5, 4, 6, 2};
    forward_list<int> list2 = {7, 6, 1, 9};
    // list1.insert_after(list1.begin(), 8);
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // for(auto& elm: list1){
    //     cout << elm << endl;
    // }
    list1.splice_after(list1.begin(), list2); //it will clear list2
    for(auto& elm: list1){
        cout << elm << endl;
    }
}

