#include <iostream>
#include <vector>

using namespace std;

/*
1. a struct template
2. map-like data structures can use pair to insert data.
*/
void print(pair<int, int>& obj){
    cout << obj.first << " " << obj.second << endl;
}

int main(){
    {
        pair<int, int> obj(10, 20);
        print(obj);
    }
    {
        pair<int, int> obj = make_pair(10, 20);
        print(obj);
    }
    {
        vector<pair<string, int>> list;
        list.push_back(make_pair("Weijun", 30));
        list.push_back(pair<string, int>("Jingjing", 35));
        list.push_back(pair("Lydia", 2));
        for(auto& elm: list){
            cout << elm.first << " " << elm.second << endl;
        }
    }
}

