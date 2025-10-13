// create a structure book with fields: title author and price. input details of 5  books and display the cheapest book.
#include<iostream>
using namespace std;
struct book {
    string title;
    string author;
    int price;
};
book input{
    book b;
        cout << "Title: "<<endl;
        getline(cin, b.title);
        cout << "Author: "<<endl;
        getline(cin, b.author);
        cout << "Price: "<<endl;
        cin >> b.price;
        return b;
}
int main()
{
 book b[5];
    
 for(int i=0;i<5;i++)
{
    b[i]= input(i);
}
int cheapest = b[0].price;
    for (int i = 1; i < 5; i++) {
        if (b[i].price < cheapest) {
           cheapest = b[i].price;
        }
    }

  cout <<"cheapest price= "<<cheapest;
    return 0;

}

