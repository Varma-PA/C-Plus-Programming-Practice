#include <iostream>

using namespace std;

class Book{
    public:
        string name;
        string author;
        int pages;

    Book(string name){
        std::cout << name << std::endl;
    }

};



int main()
{

    Book book1("Harry Potter and the sorcerer's stone");
    // book1.name = "Harry Potter";

    // book1.author = "JK Rowling";

    // book1.pages = 500;

    std::cout << book1.name << std::endl;


    return 0;
}
