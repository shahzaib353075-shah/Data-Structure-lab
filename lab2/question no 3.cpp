#include <iostream>
using namespace std;

/* -------- TEMPLATE BINARY SEARCH -------- */
template <class T>
int binarySearch(T arr[], int size, string key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid].getKey() == key)
            return mid;

        if (arr[mid].getKey() < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

/* -------- ABSTRACT CLASS -------- */
class Publication
{
public:
    virtual void display() = 0;
};

/* -------- BOOK CLASS -------- */
class Book : public Publication
{
private:
    string title;
    string author;
    int pages;

public:
    Book() {}

    Book(string t, string a, int p)
    {
        title = t;
        author = a;
        pages = p;
    }

    string getKey()
    {
        return title;
    }

    int getPages()
    {
        return pages;
    }

    void display()
    {
        cout << "Book: " << title
            << ", Author: " << author
            << ", Pages: " << pages << endl;
    }
};

/* -------- NEWSPAPER CLASS -------- */
class Newspaper : public Publication
{
private:
    string name;
    string date;
    string edition;

public:
    Newspaper() {}

    Newspaper(string n, string d, string e)
    {
        name = n;
        date = d;
        edition = e;
    }

    string getKey()
    {
        return name;
    }

    string getEdition()
    {
        return edition;
    }

    void display()
    {
        cout << "Newspaper: " << name
            << ", Date: " << date
            << ", Edition: " << edition << endl;
    }
};

/* -------- LIBRARY CLASS -------- */
class Library
{
private:
    Book books[10];
    Newspaper newspapers[10];
    int bookCount;
    int newsCount;

public:
    Library()
    {
        bookCount = 0;
        newsCount = 0;
    }

    void addBook(Book b)
    {
        books[bookCount++] = b;
    }

    void addNewspaper(Newspaper n)
    {
        newspapers[newsCount++] = n;
    }

    void displayCollection()
    {
        cout << endl;
        cout << "Books:" << endl;

        for (int i = 0; i < bookCount; i++)
            books[i].display();

        cout << endl;
        cout << "Newspapers:" << endl;

        for (int i = 0; i < newsCount; i++)
            newspapers[i].display();
    }

    /* ----- SORT BOOKS BY TITLE ----- */
    void sortBooksByTitle()
    {
        for (int i = 0; i < bookCount - 1; i++)
        {
            for (int j = 0; j < bookCount - i - 1; j++)
            {
                if (books[j].getKey() > books[j + 1].getKey())
                {
                    Book temp = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = temp;
                }
            }
        }
    }

    /* ----- SORT NEWSPAPERS BY NAME ----- */
    void sortNewspapersByName()
    {
        for (int i = 0; i < newsCount - 1; i++)
        {
            for (int j = 0; j < newsCount - i - 1; j++)
            {
                if (newspapers[j].getKey() > newspapers[j + 1].getKey())
                {
                    Newspaper temp = newspapers[j];
                    newspapers[j] = newspapers[j + 1];
                    newspapers[j + 1] = temp;
                }
            }
        }
    }

    /* ----- SEARCH BOOK USING BINARY SEARCH ----- */
    Book* searchBookByTitle(string title)
    {
        sortBooksByTitle();

        int index = binarySearch(books, bookCount, title);

        if (index != -1)
            return &books[index];

        return NULL;
    }

    /* ----- SEARCH NEWSPAPER USING BINARY SEARCH ----- */
    Newspaper* searchNewspaperByName(string name)
    {
        sortNewspapersByName();

        int index = binarySearch(newspapers, newsCount, name);

        if (index != -1)
            return &newspapers[index];

        return NULL;
    }
};

/* -------- MAIN FUNCTION -------- */
int main()
{
    Book book1("The Catcher in the Rye", "J.D. Salinger", 277);
    Book book2("To Kill a Mockingbird", "Harper Lee", 324);

    Newspaper newspaper1("Washington Post", "2024-10-13", "Morning Edition");
    Newspaper newspaper2("The Times", "2024-10-12", "Weekend Edition");

    Library library;

    library.addBook(book1);
    library.addBook(book2);
    library.addNewspaper(newspaper1);
    library.addNewspaper(newspaper2);

    cout << "Before Sorting:" << endl;
    library.displayCollection();

    cout << endl;
    cout << "After Sorting:" << endl;

    library.sortBooksByTitle();
    library.sortNewspapersByName();

    library.displayCollection();

    Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");

    if (foundBook)
    {
        cout << endl;
        cout << "Found Book:" << endl;
        foundBook->display();
    }
    else
    {
        cout << endl;
        cout << "Book not found." << endl;
    }

    Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");

    if (foundNewspaper)
    {
        cout << endl;
        cout << "Found Newspaper:" << endl;
        foundNewspaper->display();
    }
    else
    {
        cout << endl;
        cout << "Newspaper not found." << endl;
    }

    return 0;
}