#include <iostream>
using namespace std;

string read_string()
{
    string test = "purple";
    return test;
}

int main()
{
    /// passing, returning, assigning strings
    string str1 = "hello";
    string str2 = str1; // makes a new copy
    str1[0] = 'y';      // changes str1, but not str2
    cout << str1 << " " << str2 << endl;

    /// comparing two strings
    if (str2 == str1)
        cout << "str1 and str2 both changed!!!" << endl;
    if (str2 == "hello")
        cout << "str2 did not change!!!" << endl;

    /// You can use <, <=, >, and >= to compare strings as well.
    /// These operators compare strings lexicographically,
    ///     character by character and are case-sensitive.

    string str = read_string();
    str += '?';
    cout << str << endl;
}
