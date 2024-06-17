#include <iostream>
#include <cmath>

using namespace std;
int main(){
   long A, B, C;
    cin >> A >> B >> C;
    long X = fmin(A,B), Y = fmin(B,C);
    long Z = fmax(A,B), W = fmax(B,C);
    cout << fmin(Y,X) << " " << fmax(Z,W);

    return 0;
}
