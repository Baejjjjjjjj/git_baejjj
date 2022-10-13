#include<iostream>
using namespace std;
int main() {
    string str;

    while (str != "exit") {
        cout << "input : ";
        cin >> str;
        if (str == "exit") {
            cout << str << endl << "program will exit";
            break;
        }
        str = "";
    }


}
