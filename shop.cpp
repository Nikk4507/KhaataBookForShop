#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    string itemProd[100];
    int counter,n;
    public:
    //initiate the counter variable
    void initcounter(void);
    // set the price for item
    void SetPrice(void);
    //display the price of total items
    void DisplayPrice(void);
};

void shop :: initcounter(){
    counter = 0;
}

void shop :: SetPrice(){
    //enter the customer id number
    cout<<"Enter the ItemId of "<<counter+1<<" is :";
    cin>>itemId[counter];
    cout<<"Enter the product name: ";
    cin>>itemProd[counter];
    //here we have to enter the product price of item
    cout<<"Enter the ItemPrice of product "<<counter+1<<" is: ";
    cin>>itemPrice[counter];
    counter++;
}

void shop :: DisplayPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The ItemId is "<<itemId[i]<<", Product name -> "<<itemProd[i]<<" and Itemprice is: "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.SetPrice();
    dukaan.DisplayPrice();
}
