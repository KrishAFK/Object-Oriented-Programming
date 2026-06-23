#include <iostream>

using namespace std;

class LibraryBook {

private:
    string title;
    string author;
    bool borrowed;

public:
    LibraryBook(string title,string author,bool borrowed) 
    {
        SetTitle(title);
        SetAuthor(author);
        SetBorrow(borrowed);
    }

    void SetTitle(string title) {
        this->title=title;
    }

    void SetAuthor(string author) {
        this->author=author;
    }

    void SetBorrow(bool borrowed) {
        this->borrowed=borrowed;
    }

    void GetTitle() {
        cout << "The title of the book is : " << title << endl;
    }

    void GetAuthor() {
        cout << "The author of the book is : " << author << endl;
    }

    void GetBorrow() {
        cout << "The book has been borrowed? : " << borrowed << endl;
    }

    void BorrowBook() {
        borrowed=true;
        cout << "The book has been issued" << endl;
    }

    void ReturnBook() {
        borrowed=false;
        cout << "The book has been returned" << endl;
    }

    void PrintStatus() {
        GetTitle();
        GetAuthor();
        GetBorrow();
    }
};

int main() {
    LibraryBook lb("Wise Words","Krish Shah",false);
    lb.PrintStatus();
    lb.BorrowBook();
    lb.PrintStatus();
    lb.ReturnBook();
    lb.PrintStatus();
}