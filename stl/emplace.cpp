#include <iostream>
#include <set>
using namespace std;

/*
1. Emplace is used to construct object in-place to avoid unnecessary copy of objs
2. Insert and emplace is equal for premitive data
*/

class A{
public:
    int x;
    A(int x= 0): x{x} {cout << "Construct" << endl;};
    A(const A& rhs) {x = rhs.x; cout << "Copy" << endl;}
};

bool operator < (const A& lhs, const A& rhs) {return lhs.x < rhs.x;}

int main(){
    set<A> Set;
    Set.insert(A(10));
    Set.emplace(2);
    return 0;
}

