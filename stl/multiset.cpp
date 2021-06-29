#include <iostream>
#include <set>
#include <string>
#include <functional>

/*
1. Allows duplicate objects
2. Red-black tree
3. Logarithmic time
4. Custom object needs a compare function
5. Pass the order of sorting while constructing set object
*/
using namespace std;

class Person{
public:
    float age;
    string name;
bool operator < (const Person& rhs) const{ return age < rhs.age; }
bool operator > (const Person& rhs) const{ return age > rhs.age; }
};

int main(){
    //multiset<int, greater<int>> s = {1,2,3,4,3,5,1};
    multiset<Person, greater<>> s = {{25, "Weijun"}, {20, "Jingjing"}};
    for (auto& e: s){
        cout << e.age << endl;
    }
}

