#include <iostream>
using namespace std;

int main(){

    float N;
    cin >> N;
    if (int(N) == N)
        cout << "int " << N;
    else
        cout << "float " << int(N) << " " << N - int(N);
    return 0;
  }
