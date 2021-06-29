#include <iostream>
#include <unordered_set>

/*
1. Constant time
2. hashset with duplication allowed
*/

using namespace std;

int main(){
    unordered_multiset<int> umset = {4, 1, 3, 4, 2, 4,5, 9, 1};
    auto search = umset.find(2);
    if (search != umset.end()){
        cout << "Found " << *search << endl;
    }else{
        cout << "Not Found" << endl;
    }

    for (auto& elm: umset){
        cout << elm << " ";
    }
    cout << endl;
}

