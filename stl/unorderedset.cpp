#include <iostream>
#include <unordered_set>
using namespace std;
/*
== hashset
*/
int main(){
    unordered_set<int> us = {4, 1, 3, 2,1,5};
    auto search = us.find(2);
    if (search != us.end()){
        cout << "Found " << *search << '\n';
    }else{
        cout << "Not Found" << endl;
    }

    for (auto& elm: us){
        cout << elm << endl;
    }
}

