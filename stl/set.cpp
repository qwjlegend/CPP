#include <iostream>
#include <set>
#include <string>
#include <functional>

/*
1. set is an associative container that contains a sorted set of unique objects of type key
2. Implemented using red-black tree
3. Insertion, removal, search have logarithmic complexity
4. Customize type of data needs compare function in order to be inserted into set
5. Pass the order of sorting while constructing set obecject
*/

using namespace std;

int main(){
    set<int> s = {1,2,3,4,3,5,1};
    for (auto& e: s){
        cout << e << endl;
    }
}

