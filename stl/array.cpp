#include <iostream>
#include <array>
using namespace std;

/*
1. std::array is a container that encapsulates fixed size arrays
2. arraysize is needed at compile time
3. Assign by value is actually by value, pass array to function will create a copy
4. Access Elements
    a. at()
    b. []
    c. front[]
    d. back()
    e. data()
*/
int main(){
    array<int, 5> myarray = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++){
        cout << myarray[i] << endl;
    }
    cout << myarray.data() << endl;
    return 0;
}

