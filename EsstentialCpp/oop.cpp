#include <iostream>
#include <typeinfo>

using namespace std;

class LibMat
{
public:
    LibMat()
    {
        cout << "LibMat base class constructor!"
             << "\n";
    }
    virtual ~LibMat()
    {
        cout << "LibMat base class destructor!"
             << "\n";
    }
    virtual void print() const
    {
        cout << "LibMat print, I am a LibMat object!"
             << "\n";
    }
};

class Book : public LibMat
{
public:
    Book(const string &title, const string &author)
        : _title(title), _author(author)
    {
        cout << "Book class constructor! Title is " << _title << " Author is " << _author << "\n";
    }
    virtual ~Book()
    {
        cout << "Book class descturctor"
             << "\n";
    }
    void print() const
    { //去掉const， 会导致print的调用被解析到父类对象的print上，但是virtual可以省略
        cout << "Book print, I am a Book object"
             << "\n";
    }
    const string &title() const { return _title; }
    const string &author() const { return _author; }

protected:
    string _title;
    string _author;
};

void print(const LibMat &mat)
{
    cout << "In non-member function, about to print"
         << "\n";
    mat.print();
}

int main()
{
    // cout << "Creating a LibMat object" << "\n";
    // LibMat libmat;
    // print(libmat);
    // cout << "Creating a Book object" << "\n";
    Book b("Papa", "Jingjing");
    // print(b);
    LibMat *c = &b;
    c->print();
    if (typeid(*c) == typeid(Book))
    {
        cout << "Yes" << endl;
        Book *cc = static_cast<Book *>(c);
        cc->print();
    }
}
