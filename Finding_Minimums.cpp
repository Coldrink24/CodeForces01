#include <iostream>
using namespace std;

int main()
{ 
    int N, K;
    long long defmin = 1000000000, min, num;

    min = defmin;

    cin >> N >> K;

        for (int i = 1; i <= N; i++){

            cin >> num;
            if( num < min ){
                min = num;
            }
            if (i % K == 0){
                cout << min << " ";
                min = defmin;
            }
            else if(i == N){
                cout << min;
            }
        }

    return 0;
}
