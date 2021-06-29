#include <iostream>
#include <algorithm>
#include <list>
#include <numeric>
#include <vector>

using namespace std;

int main(){
    list<int> lst(10);
    iota(lst.begin(), lst.end(), -5);
    for(auto elm:lst){
        cout << elm << endl;
    }
    vector<list<int>::iterator> vec(lst.size());
    iota(vec.begin(), vec.end(), lst.begin());
    for(auto elm: vec){
        // cout << elm << endl; // it is not defined to have a value.
        cout << *elm << endl;
    }
}

