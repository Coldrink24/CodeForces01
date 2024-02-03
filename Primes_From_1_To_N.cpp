#include <iostream>
using namespace std;

bool isPrime(int Number){
  
    long X = Number;
    bool prime = false;
    int i = 2;
  
    do {
        if (X == 2){
            prime = true;
            break;
        }

        if (X % i == 0)
        {
            prime = false;
            break;
        }
        else
            prime = true;
        i++;
    } while ( i < (X / 2) );

    return prime;
}


int main() {

    int N;
    cin >> N;
    bool prime;
    cout << 2;

    // loop for collecting number which we are gonna test
    for (int i = 3; i <= N; i+= 2){

        if (isPrime(i)) {
            cout << " "<<i;
        }

    }
    return 0;
}
