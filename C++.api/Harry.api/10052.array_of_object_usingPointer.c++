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

    void getData(int i){
        cout << "code of item " << i+1 << " is : " << id << endl;
        cout << "price of item " << i+1 << " is : " << price << endl;
    }
};

int main(){
    
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    
    int p;
    float q;

    for(int i = 0; i < size; i++){
        cout << "Enter the code and price of item " << i+1 << " : " ;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++){
        ptrTemp->getData(i);
        ptrTemp++;
    }

    return 0;
}