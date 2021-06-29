#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

template <typename IteratorType, typename elemType>
IteratorType findNumber(IteratorType first, IteratorType last, const elemType &value){
    for (; first != last; ++first){
        if (value == *first)
        return first;
    }
    return last;
}

int main(){
    const int asize = 6;
    int ia[asize] = {1,2,3,4,5,6};
    vector<int> iv = {1,2,3,4,5,6};

    int *pia = findNumber(ia, ia + asize, 4);
    if (pia != ia + asize){
        cout << "Found" << endl;
    }


    vector<int>::iterator it;
    it = find(iv.begin(), iv.end(), 6);
    if (it != iv.end()){
        cout << "Vector found" << endl;
    }
}

