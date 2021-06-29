#include <iostream>
#include <unordered_map>

/*
1. Associative container that contains key-value pairs with unique keys
2. Search, insertion, removal have average constant time complexity
3. Internally, the elements are organized into buckets
4. This allows fast access to individual elements
*/


using namespace std;

int main(){
    unordered_map<int, char> umap = {{1, 'a'}, {2, 'b'}};
    cout << umap[1] << endl;
    umap[2] = 'c';
    cout << umap[2] << endl;

    for (auto& elm: umap){
        cout << elm.first << " " << elm.second << " ";
    }

    auto result = umap.find(2);
    if (result != umap.end()){
        cout << "Found " << result->first << " " << result->second << "\n";
    }else{
        cout << "Not found" << endl;
    }
}

