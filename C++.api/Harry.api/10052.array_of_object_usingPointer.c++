#include <iostream>
using namespace std;

class ShopItem{
    int id;
    float price;

    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }

    void getData(){
        cout << "Code of this item is: " << id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};
    //1. pen
    //2. pencil
    //3. notebook

int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    
    int p;
    float q;
    for (int i = 0; i < size; i++){
        cout << "Enter id and price of item " << i+1 << " : ";
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    ptr = ptrTemp;

    for (int i = 0; i < size; i++){
        cout << "Item number: " << i+1 << endl;
        // (*ptr).getData();
        ptr->getData();
        ptr++;
    }

    return 0;
}