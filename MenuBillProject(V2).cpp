//Bill calculator
//try making this w 3 menus: starters,main,dessert (5 items each) [use object arrays] (create new project) FOOD ORDERING SYSTEM
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
    
    void menu_display()
};

int main()
{
    //creating an array of objects called starters from class called Item.
    Item starters[5]
    {
        Item("French Fries",100),Item("Paneer Chill",120),Item("Manchurian",130),Item("Bhel Puri",70),Item("Momos",90)
    };
    Item mains[5]
    {
        Item("Fried Rice",150),Item("Rajma Chawal",140),Item("Chole Bhature",130),Item("Pav Bhaji",110),Item("Biriyani",160)
    };
    Item dessert[5]
    {
        Item("Ice Cream",80),Item("Gulab Jamun",90),Item("Phirni",100),Item("Brownie",70),Item("Kulfi",70)
    };
    //creating an array of objects called dessert from class called Item.
    
    int qty,total=0,price, loop=1;
    char more;
   while(loop==1)
   {
    int menu_choice;
    cout<<"***Select menu***\n";
    cout<<"======================\n";
    cout<<"\tMENUS"<<endl
        <<"======================\n";
    cout<<"1.Starters\n2.Main Course\n3.Dessert\n4.Exit\n";    
    cout<<"======================";
    cout<<endl<<"Enter your choice: ";
    cin>>menu_choice;
    
    switch(menu_choice)
    {
        case 1:{
        Starters();
        break;
        }
        case 2:{
        Mains();
        break;
        }
        case 3:{
        Dessert();
        break;
        }
        case 4:{
        cout<<"\nGrand Total: "<<total;
        cout<<"\n======================";
        cout<<"\n***Thank you for you patronage***"
            <<"\n***Please visit again!***";
        loop=0;
        exit(0);
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

int Starters(int *total, int starters)
{
    int i=0, starters_choice;
    for(;;)
    {
    for(i=0;i<5;++i)
    {
        cout<<i+1<<"."<<starters.name[i];
    }
    cout<<"6.Switch Menu\n7.Exit";
    cin>>starters_choice;
    
    switch(starters_choice)
    {
        case 6:
        exit(0);
        break;
        
        default:
        cout 
    }
    <<"Invalid input!"<<endl;
    }
    
}
