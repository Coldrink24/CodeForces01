#include <iostream>
using namespace std;

int main (){

    int A,B, X, max = 0;
    cin >> A >> B;

   if( A > B)
       X = A;
   else
       X = B;


    for (int i = 1 ; i <= X ; i++ ){
        if( A % i == 0 && B % i ==0 ){
            if ( i > max )
            max = i;
        }
        else
            continue;
    }

    cout << max;
    return 0;
}
