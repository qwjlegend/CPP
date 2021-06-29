#include <iostream>

using namespace std;

template < typename elemType>
class BinaryTree{
public:
    BinaryTree();
    BinaryTree(const BinaryTree&);
    ~BinaryTree();
    BinaryTree& operator=( const BinaryTree& );

    bool empty(){
        return _root == 0;
    }
    void clear();
private:
    Btnode<elemType> *_root;
    void copy(BTnode<elemType>*tar, BTnode<elemType>*src);                                                                 
};

template < typename valType>
class BTnode{
friend class BinaryTree<valType>;
public:

private:
    valType _val;
    int _cnt;
    BTnode *_lchild;
    BTnode *_rchild;
};

int main(){

}

