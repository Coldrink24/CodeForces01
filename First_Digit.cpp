#include <string>
#include <iostream>
using namespace std;

int main() {

    string str;
    cin >> str;
    int X = int(str[0]);
    (X % 2 == 0) ? cout << "EVEN" : cout << "ODD";
    return 0;
}
