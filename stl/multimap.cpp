#include <iostream>
#include <vector>
#include <map>

/*
0. similar to sorted list in python
1. Multimap contains a sorted list of key-value pairs 
    while permitting multiple entries with the same key
2. It store key value pairs in sorted order on the basis of key
3. Backed by red-black tree
4. count, find, contains, equal_range, lower_bound, upper_bound
5. no [], or at();
*/

using namespace std;

int main(){
    multimap<char, int> Multimap;
    Multimap.insert(make_pair('a', 1));
    Multimap.insert(make_pair('a', 2));
    Multimap.insert(make_pair('a', 3));
    Multimap.insert(make_pair('b', 5));
    Multimap.insert(make_pair('b', 4));
    for (auto& elm: Multimap){
        cout << elm.first << " " << elm.second << endl;
    }
    //auto range = Multimap.equal_range('a');
    pair<multimap<char, int>::iterator, multimap<char, int>::iterator> range 
        = Multimap.equal_range('a');
    for(auto it = range.first; it!= range.second; ++it){
        cout << it->first << " " << it->second << endl;
    }

    auto pair = Multimap.find('a');
    cout << pair->first << " " << pair->second << endl;

    auto l = Multimap.lower_bound('a');
    cout << l->first << " " << l->second << endl;

    auto u = Multimap.upper_bound('a'); //one position more
    cout << u->first << " " << u->second << endl;
    
}

