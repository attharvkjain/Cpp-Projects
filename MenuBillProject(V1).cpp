//Bill calculator
#include <iostream>
using namespace std;

class Item
{
    public:
    string name;
    int price;
    
    Item(string name, int price)
    {
        this->name=name;
        this->price=price;
    }
};

int main()
{
    int qty,total=0,price, loop=1;
    char more;
   while(loop==1)
   {
    int choice;
    cout<<"***What do you want to order today?***\n";
    cout<<"======================\n";
    cout<<"\tMENU"<<endl
        <<"======================\n"
        <<"1.French Fries\t|100/-\n2.Burger\t|120/-\n3.Pastry\t|100/-\n4.Cola  \t|80/-\n5.Cold Coffee\t|100/-\n6.Pizza \t|200/-\n7.Iced Tea\t|90/-\n8.Exit\t\t|\n";
    cout<<"======================";
    cout<<endl<<"Enter your choice: ";
    cin>>choice;
    if (choice==8)
    {
        cout<<"======================";
        cout<<"\nGrand Total: "<<total;
        cout<<"\n======================";
        cout<<"\n***Thank you for you patronage***"
            <<"\n***Please visit again!***";
        loop=0;
        exit(0);
    }
    cout<<"\n======================";
    cout<<"\nEnter desired quantity: ";
    cin>>qty;
    
    switch(choice)
    {
        case 1:{
        Item a("French Fries",100);
        price=a.price*qty;
        break;
        }
        
        case 2:{
        Item b("Burger",120);
        price=b.price*qty;
        break;
        }
        
        case 3:{
        Item c("Pastry",100);
        price=c.price*qty;
        break;
        }
        
        case 4:{
        Item d("Cola",80);
        price=d.price*qty;
        break;
        }
        
        case 5:{
        Item e("Cold Coffee",100);
        price=e.price*qty;
        break;
        }
        
        case 6:{
        Item f("Pizza",200);
        price=f.price*qty;
        break;
        }
        
        case 7:{
        Item g("Iced Tea",90);
        price=g.price*qty;
        break;
        }
        
        default:
        cout<<"Invalid input"<<endl;
    }
    total+=price;
    
    cout<<"\n======================";
    cout<<"\nAnything else? (Y/N): ";
    cin>>more;
    cout<<"======================";
    if(more=='n'||more=='N')
    {
        //cout<<"\n======================";
        cout<<"\nGrand Total: "<<total;
        cout<<"\n======================";
        cout<<"\n***Thank you for you patronage***"
            <<"\n***Please visit again!***";
        loop=0;
        exit(0);
    }
   }
    return 0;
}


