#include <iostream>
using namespace std;

int max(int N, int M){
    int Max = 0;
    if( N > M)
        Max = N;
    else
        Max = M;

    return Max;
}
int min(int N, int M){
    int Min = 0;
    if( N > M)
        Min = M;
    else
        Min = N;

    return Min;
}
int main(){

    int N, M, Max, Min, Sum;
    for (int  j= 0; j < 100; j++ ){

        cin >> N >> M;
        if(N <= 0 || M <= 0){
            break;
        }
        else
        {
            Max = max(N,M);
            Min = min(N,M);
            Sum = 0;
            for(int i = Min; i <= Max ; i++)
            {
                Sum += i;
                cout << i << " ";
            }

            cout << "sum =" <<Sum;
            cout << endl;

        }

    }
    return 0;
}
