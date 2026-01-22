#include <iostream>
using namespace std;
class Bank{
    private:
        float balance;
    public:
        string name;
        int account_number;

    Bank(){
        name = "";
        account_number = 0;
        balance = 0;
    }
    float know_balance(){
        return balance;
    }
    float add_amount(int money){
        return balance += money;
    }
};
int main() {
    Bank b1;
    int pin;
    string add;
    cout << "Account Holder Name is: "; 
    cin >> b1.name;
    cout << "Account number is: " ; 
    cin >> b1.account_number;
    cout << "Enter pin to check balance: ";
    cin >> pin;
    if(pin == 2006){
        cout << "Balance: "<< b1.know_balance() << endl;
        cout << "Want to Add money: " << endl;
        cin >> add;
        if(add == "yes"){
            cout << "Enter amount you want to enter: ";
            int amount;
            cin >> amount;
            b1.add_amount(amount);
            cout << "updated balance: " << b1.know_balance();
        }
    }else{
        cout << "Wrong pin!!" << endl;
    }
    return 0;
}