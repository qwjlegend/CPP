#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

/*
Based on quickselect

1. Sort integral data type
2. Sort user defined data types
3. Sort using a function object
4. Sort using lambda expression
*/
using namespace std;

int main(){
    vector<int> v{5, 6, 4, 3, 2, 6, 7, 9, 3};
    nth_element(v.begin(), v.end() + v.size()/2, v.end());
    cout << "Median " << v[v.size()/2] << endl;

    nth_element(v.begin(), v.begin() + 1, v.end(), greater<int>());
    cout << "Second Largest " << v[1] << endl;
}

