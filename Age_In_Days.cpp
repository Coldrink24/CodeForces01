#include <iostream>
using namespace std;

int main() {

    long long N;
    cin >> N;
    int year = N/365;
    int mnth = ( N - (year*365) ) / 30;
    int day = (N - ((mnth*30) + (year*365)));

    cout << year << " years\n";
    cout << mnth << " months\n";
    cout << day << " days";
    return 0;
}
