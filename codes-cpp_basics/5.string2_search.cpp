#include <iostream>
using namespace std;

int main() {
    string str = "Yes, we went to Gates after we left the dorm.";
    int first_we = str.find("we"); // finds the first "we"
    int sec_we = str.find("we", first_we + 1); // finds "we" in "went"
    int third_we = str.find("we", sec_we + 1); // finds the last "we"
    int gPos = str.find('G');
    int zPos = str.find('Z'); // returns string::npos
    cout << "First we: " << first_we << endl;
    cout << "Second we: " << sec_we << endl;
    cout << "Third we: " << third_we << endl;
    cout << "Is G there? ";
    cout << (gPos != string::npos ? "Yes!" : "No!") << endl;
    cout << "Is Z there? ";
    cout << (zPos != string::npos ? "Yes!" : "No!") << endl;
    return 0;
}
