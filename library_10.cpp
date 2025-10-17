// Define a structure library with book id , title and status (issued / available)  . create function to issue and return a book.
#include<iostream>
using namespace std;

struct library
{
    int book_id;
    string title;
    bool issued;
};

void issue(library a[], int n, int id)
{
    for(int i=0;i<n;i++)
    {
        if(a[i].book_id == id)
        {
            if(a[i].issued == 0)
            {
                a[i].issued = 1;
                cout << "Book issued successfully: " << a[i].title << endl;
            }
            else
            {
                cout << "Book already issued!" << endl;
            }
            return;
        }
    }
    cout << "Book ID not found!" << endl;
}

void ret(library a[], int n, int id)
{
    for(int i=0;i<n;i++)
    {
        if(a[i].book_id == id)
        {
            if(a[i].issued == 1)
            {
                a[i].issued = 0;
                cout << "Book returned successfully: " << a[i].title << endl;
            }
            else
            {
                cout << "Book was not issued!" << endl;
            }
            return;
        }
    }
    cout << "Book ID not found!" << endl;
}

int main()
{
    int n;
    cin>>n;
    library a[n];

    for(int i=0;i<n;i++)
    {
        cout <<"book id = ";
        cin>>a[i].book_id;

        cout <<"title = ";
        cin>>a[i].title;

        a[i].issued=0;  // initially available
    }

    int times;
    cin>>times;
    char choice;
    int b_id;

    for(int i=0;i<times;i++)
    {
        cout <<"Enter the book id: ";
        cin>>b_id;

        cout <<"Want to issue (i) or return (r)? ";
        cin>>choice;

        if(choice == 'i')
        {
            issue(a,n,b_id);
        }
        else 
        {
            ret(a,n,b_id);
        }
    }

    return 0;
}