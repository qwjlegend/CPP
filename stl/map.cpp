#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

/*
1. map<T1, T2> obj;
2. Self balance binary search tree. AVL tree/Red black tree
3. Store key value pair in sorted order on the basis of key
*/

int main(){
    map<string, int, greater<string>> Map;
    Map["Weijun"] = 1;
    Map["Jingjing"] = 2;
    Map.insert(make_pair("Lydia", 3));

    for(auto& elm: Map){
        cout << elm.first << " " << elm.second << endl;
    }
    cout << Map["Weijun"] << endl;
}

