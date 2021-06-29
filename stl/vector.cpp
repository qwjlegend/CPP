#include <iostream>
#include <vector>

using namespace std;

/*
1. std:vector is a sequence container and also known as Dynamic array or Array list
2. Its size can grow and shrink dynamically, and no need to provide size at compile time

Element access
at(), [], front[], back(), data()

Modifiers:
insert(), emplace(), push_back(), emplace_back(), pop_back()
resize(), swap(), erase(), clear()

*/


int main(){
    vector<int> arr1;
    vector<int> arr2 (5, 20);
    vector<int> arr3 = { 1, 2, 3, 4, 5 };
    vector<int> arr4 {1, 2, 3, 4, 5};
    arr2[3] = 10;
    vector<int> arr5;
    arr5.reserve(100);
    for(int i = 0; i <= 5; i++){
        arr5.push_back(i);
        cout << arr5.size() << " " << arr5.capacity() << endl;
    }
}

