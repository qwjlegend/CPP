#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <numeric>


/*
1. copy_n: copy given number of elements from source to dest
2. copy_backward(): copy the elements from the range defined by [fisrt, last]
to another range ending at d_last, elements are copied in reverse order
*/

using namespace std;

void print(vector<int>& vec){
    for (auto x: vec){
        cout << x << '\t';
    }
    cout << endl;
}

int main(){
    vector<int> from_vector(10);
    iota(from_vector.begin(), from_vector.end(), 0);

    vector<int> to_vector1;
    copy_n(from_vector.begin(), 4, back_inserter(to_vector1));
    print(to_vector1);

    vector<int> to_vector2(15);
    copy_backward(from_vector.begin(), from_vector.end(), to_vector2.end());
    print(to_vector2);
}

