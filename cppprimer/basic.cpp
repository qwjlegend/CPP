#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    int& j = i;
    cout << j << endl;
    int *const p1 = &i;
    int const *p2 = &i;
    cout << p1 << endl;
    cout << p2 << endl;
    return 0;
}
