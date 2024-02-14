#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Aryaman";
    string s2 = "Rao";
    // Append
    cout << s1.append(s2) << endl;
    //Assign
    s1.assign("Aryaman");
    //Insert
    s1.insert(7, " Rao");
    cout << "Full Name: " << s1 << endl;
    //Integer to String
    int x = 564;
    cout << "String: " << to_string(x) << endl;
    //String to integer
    string a = "2606";
    cout << stoi(a) << endl;
    return 0;
}