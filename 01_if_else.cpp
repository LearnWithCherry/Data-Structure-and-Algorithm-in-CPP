#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 50;

    if (a == 4){
        cout << "A is 4"<< "\n";
    }else if (a == 5){
        cout << "A is 5"<< "\n";
    }if( b >= 80){
        cout << "Yes B is Greater then 80"<< "\n";
    }else if (b ==50){
        cout << "Yes B is less 50 "<< "\n";
    }
//-----------------------------------------------------------
    // int poly = false;
    int poly = true;
    if (poly) {
        cout << "Student will be in 2nd year"<< "\n";
    }else if(not poly){
        cout << "Student will be in 1st year"<< "\n";
    }else{
        cout << "Error...!!!!"<< "\n";
    }

    return 0;
}