#include <iostream>
#include <string> 
using namespace std;

class student {
    int roll_no;
    string prn_no, name;
public:
    void accept();
    void display();
};

class test : virtual public student {
    string s1[5];
    int c1[5], e1[5];
public:
    void accept_t();
    void display_t();
};

class sport : virtual public student {
    string name_sport;
    char G;
public:
    void accept_s();
    void display_s();
};

class result : public test, public sport {
public:
    void displayAll() {
        display();
        display_t();
        display_s();
    }
} R[10];

void student::accept() {
    cout << "Enter roll no, PRN no, and name:" << endl;
    cin >> roll_no >> prn_no >> name;
}

void student::display() {
    cout << "\n" << "Roll No" << "\t" << "PRN No" << "\t" << "Name" << endl;
    cout << roll_no << "\t" << prn_no << "\t" << name << endl;
}

void test::accept_t() {
    cout << "Enter the Subject Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter subject name, CIA marks, and end sem marks:" << endl;
        cin >> s1[i] >> c1[i] >> e1[i];
    }
}

void test::display_t() {
    cout << "\n" << "Subject Name" << "\t" << "CIA" << "\t" << "ESE" << endl;
    for (int i = 0; i < 5; i++) {
        cout << s1[i] << "\t" << c1[i] << "\t" << e1[i] << endl;
    }
}

void sport::accept_s() {
    cout << "Enter sport name and grade:" << endl;
    cin >> name_sport >> G;
}

void sport::display_s() {
    cout << "\n" << "Sport Name" << "\t" << "Grade" << endl;
    cout << name_sport << "\t" << G << endl;
}

int main() {
    int ch, choice,n,i;
    cout<<"enter value of n:";
    cin>>n;
    do {
        cout << "\n1. Accept\n2. Display";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
            for(i=0;i<n;i++)
            {
                R[i].accept();
                R[i].accept_t();
                R[i].accept_s();
                break;
            }
            case 2:
                for(i=0;i<n;i++)
            {
                R[i].displayAll();
                break;
            }
            
        }
        cout << "\nDo you want to continue (0/1)?:";
        cin >> ch;
    } while (ch == 1);
    return 0;
}
