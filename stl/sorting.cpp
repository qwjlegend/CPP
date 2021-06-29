#include <iostream>
#include <vector>
#include <algorithm>

/*
1. Can sort user defined data
2. Introsort = Quicksort + Heapsort(unfair partition) + InsertionSort(array size small)
3. Can use parallel execution policy for better performance
*/

using namespace std;

class Point{
public:
    int x;
    int y;
    Point(int x=0, int y=0): x{x}, y{y} {}
};

bool comp(const Point& p1, const Point& p2) {
        return (p2.x + p2.y) < (p1.x + p1.y);
    };

int main(){
    vector<int> vec = {5, 4, 6, 7, 3, 2, 8, 9, 1};
    sort(vec.begin(), vec.end(), greater<int>());
    // for (auto elm: vec){
    //     cout << elm << endl;
    // }
    // vector<Point> vec = {{1, 2}, {3, 1}, {0, 1}};
    // sort(vec.begin(), vec.end(), comp);
    // for(auto elm: vec){
    //     cout << elm.x << " " << elm.y << endl;
    // }
    // cout << is_sorted(vec.begin(), vec.end(), greater<int>()) << endl;

    vector<int> vec1 = {4, 3, 2, 6, 7, 8, 1};
    // auto it = is_sorted_until(vec1.begin(), vec1.end(), greater<int>());
    // auto diff = distance(vec1.begin(), it);
    // cout << diff << endl;

    partial_sort(vec1.begin(), vec1.begin() + 4, vec1.end());
    for (int val: vec1){
        cout << val << " ";
    }
}

