#include <iostream>
using namespace std;

int main()
{
    long long L, R, T, sum, min ,max;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        sum = 0;
        cin >> L >> R;
        if ( L > R){
            min = R;
            max = L;
        }
        else if ( R > L){
            min = L;
            max = R;
        }
        min--;
        sum = (max* (max+1) / 2 ) - ( min* (min+1) / 2 );
        cout << sum << endl;
    }

  return 0;
}
