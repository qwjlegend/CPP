#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // ofstream outfile("test.txt", ios_base::app );
    // if (!outfile){
    //     cerr << "Something wrong!!" << endl;
    // }else{
    //     outfile << "Jingjing" << ' ' 
    //     << "那你快乐吗？" << endl
    //     << "那你开心吗？" << endl;
    // }

    ifstream infile("test.txt", ios_base::in);
    string line;
    while(infile >> line){
        cout << line << endl;
    }
    infile.close();
}

