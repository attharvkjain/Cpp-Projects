//Bill calculator
//try making this w 3 menus: starters,main,dessert (5 items each) [use object arrays]

#include <iostream>
using namespace std;

class Items
{
    public:
    string name; int price;
    int total;
    
    int add_total(int total,int price)
    {
        this->name=name;
        this->price=price;
        this->total=total;
        
        total+=price;
        return total;
    }
    
    
    
    Items(string name,int price)
    {
        this->name=name;    //not sure if this is needed
        this->price=price;  //now I am
    }
};

class Starters: public Items{
    public:
    Starters(string name,int price)
    {
        this->name=name;    
        this->price=price;  
    }
    
    void display_starters(Starters s)
    {
        // this->name=name;
        // this->price=price;
        
        for(i=0;i<5;++i)
        {
            cout<<i+1<<"."<<s[i].name<<"\t"<<s[i].price<<endl;
        }
        
    }
};
class Mains: public Items{
    public:
    Mains(string name,int price)
    {
        this->name=name;    
        this->price=price;     
    }
};
class Desserts: public Items{
    public:
    Desserts(string name,int price)
    {
        this->name=name;    
        this->price=price;  
    }
};

int main()
{
    Starters s[5]
    {
        Starters("French Fries",100),Starters("Paneer Chill",120),Starters("Manchurian",130),Starters("Bhel Puri",70),Starters("Momos",90)
    };
    Mains m[5]
    {
        Mains("Fried Rice",150),Mains("Rajma Chawal",140),Mains("Chole Bhature",130),Mains("Pav Bhaji",110),Mains("Biriyani",160)
    };
    Desserts d[5]
    {
        Desserts("Ice Cream",80),Desserts("Gulab Jamun",90),Desserts("Phirni",100),Desserts("Brownie",70),Desserts("Kulfi",70)
    };
    
    int menu_choice;
    
    cout<<"***Welcome! What do you want to order today?***\n";
    cout<<"======================\n";
    
    cout<<"Choose Menu: \n";
    cout<<"1.Starters\n2.Main Course\n3.Dessert\n4.Exit\n";
    cin>>menu_choice;
    
    switch(menu_choice)
    {
        case 1:
        s.display_starters();
        break;
        case 2:
        m.display_items();
        break;
        case 3:
        d.display_items();
        break;
        case 4:
        cout<<"Grand Total: "<<total<<endl;
        cout<<"======================\n";
        cout<<"***Thank you for you patronage***\n"
            <<"***Please visit again!***\n";
    }
    

    return 0;
}

