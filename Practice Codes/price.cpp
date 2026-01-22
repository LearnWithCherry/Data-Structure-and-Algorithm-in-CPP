#include <iostream>
using namespace std;

class Product{
    public: 
        string name;
        float price;
        int quantity;
    Product(){
        name = ""; 
        price = 0;
        quantity = 0;
    }

    int total_price(){
        return price * quantity;
    }
};
int main() {
    Product p1;

    cin >> p1.name >> p1.price >> p1.quantity;

    cout << p1.total_price() << " is total price..";
    return 0;
}