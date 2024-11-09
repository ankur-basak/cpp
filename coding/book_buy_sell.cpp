#include<iostream>
using namespace std;
class Book
{
    int id;
    string writerName;
    protected:
       int quantity;
    public:
        Book(){cout<< "default\n";}
        Book(int price){this->price=price;cout<<"parameterized\n";}
        ~Book(){cout<< "Destroying "<<price<<endl;}
        float price;
    void setID(int i)
    {
        id=i;
    }
    void setWriterName(string writerName)
    {
        this->writerName=writerName;
    }
    void setPrice(float price)
    {
        this->price=price;
    }
    void setQuantity(int quantity)
    {
        this->quantity=quantity;
    }
    int getID(){return id;}
    float getPrice(){return price;}
    string getWriterName(){return writerName;}
    int getQuantity(){return quantity;}
    void show()
    {
        cout<< "ID: "<<getID()<<endl;
        cout<< "Quantity: "<<getQuantity()<<endl;
    }
    void addBook(int amount)
    {
        if(amount>0)
        {
            quantity+=amount;
            cout<< "After adding "<<amount<< "Books total: "<<getQuantity()<<endl;
        }
    }
    void sellBook(int amount)
    {
        if(quantity>=amount)
        {
            quantity-=amount;
            cout<< "After selling "<<amount<< " Books total: "<<getQuantity()<<endl;
        }
    }

};
int main()
{
    Book b;
    b.setPrice(234.7);
    Book n(789);

    b.setID(123);

    b.setQuantity(10);
    b.setWriterName("XTY");
    b.show();
    int am;
    cout<< "Enter Adding amount: ";
    cin>>am;
    b.addBook(am);
    cout<< "Enter selling amount: ";
    cin>>am;
    b.sellBook(am);

}
