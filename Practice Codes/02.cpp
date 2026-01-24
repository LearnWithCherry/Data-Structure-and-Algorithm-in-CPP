// 1. Sum of All Even Numbers in Array

#include <iostream>
using namespace std;

int main() {
    int n;  
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0) sum += arr[i];

    cout << sum;
}



// 2. Count Vowels in a String

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    for(char c : s) {
        c = tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            count++;
    }

    cout << count;
}



// 3. Swap Two Numbers Using References

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    swapNumbers(a, b);
    cout << a << " " << b;
}



// 4. Largest ASCII Character in String

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char mx = s[0];
    for(char c : s) 
        if(c > mx) mx = c;

    cout << mx;
}



// 5. Employee Salary Calculator (Class + Constructor)

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int salary, bonus;

    Employee(string n, int s, int b) {
        name = n;
        salary = s;
        bonus = b;
    }

    int totalSalary() {
        return salary + bonus;
    }
};

int main() {
    string name;
    int sal, bonus;
    cin >> name >> sal >> bonus;

    Employee e(name, sal, bonus);
    cout << e.totalSalary();
}



// 6. Inheritance: Person → Student

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int roll;
    int marks;

    void display() {
        cout << name << " " << age << " " << roll << " " << marks;
    }
};

int main() {
    Student s;
    cin >> s.name >> s.age >> s.roll >> s.marks;
    s.display();
}



// 7. Prime Number Check

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 2) {
        cout << "false";
        return 0;
    }

    bool prime = true;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) prime = false;

    cout << (prime ? "true" : "false");
}



// 8. Reverse String Without Using reverse()

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = 0, j = s.length() - 1;
    while(i < j) {
        swap(s[i], s[j]);
        i++; j--;
    }

    cout << s;
}



// 9. Print Array Using Pointer Arithmetic

#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int *p = arr;
    for(int i = 0; i < n; i++)
        cout << *(p + i) << " ";
}



// 10. File Handling: Write + Read a Sentence

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    ofstream w("data.txt");
    w << text;
    w.close();

    ifstream r("data.txt");
    string read;
    getline(r, read);
    r.close();

    cout << read;
}
