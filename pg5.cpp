#include <iostream>
 using namespace std;
int main() {
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age<18)
    cout << "Not Eligible to Vote"<< endl;
    else if(age > 18 && age < 65)
    cout << "Eligible to Vote and work" << endl;
    else
    cout << "Senior Citizen" << endl;
    return 0;
}