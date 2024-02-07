#include <iostream>
using namespace std;

int main(){


    int N = 4;
    cin >> N;

    //print N sentences => N = 4

    for(int i = 1 ; i < 2*N ; i+=2) // i = 1 : 7 ...... i = 1, 3, 5 ,7
    {
        for(int j = N + (N - 3); j >= i ; j -= 2 )  // j = 5 : 1 ..... j = 5,3,1
        {                                           //  j = 5 : 3 .... j = 5,3
            cout << " ";
        }

        for(int j = 0; j < i ; j++) // j = 0
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
