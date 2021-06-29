#include <iostream>
#include <unordered_map>
using namespace std;

/*
1. Unordered associative container that supports multiple same keys
2. Search, insertion and removal have averaga constant-time complexity
3. Internally, the elements are organized into buckets
4. It uses hashing to insert elements into buckets
5. Allows fast access to individual elements.
*/

int main(){
    unordered_multimap<int, char> um = {{5, 'd'}};
    um.insert({1, 'a'});
    um.insert(pair<int, char>(2, 'b'));
    um.insert(make_pair(3, 'c'));
    um.insert(make_pair(3, 'd'));

    for(auto& elm: um) {
        cout << elm.first << " " << elm.second << endl;
    }
    return 0;
}

