#include <iostream>
using namespace std;
int min(int a, int b){
    int Min;
    if (a < b) Min = a;
    else Min = b;

    return Min;
}
int main()
{

    int K,Sum, rest;
    cin >> K >> Sum;
    int Min = min(K,Sum);
    int count = 0;

    //number of available digits
    for(int i = 0; i <= Min ; i++)
    {
        for(int j = 0; j <= Min; j++)
        {
            rest = Sum - j - i;
            if(rest >= 0 && rest <= K )
            {
                count++;
                rest = 0;
            }
            else
                continue;
        }
    }
    cout << count;

    return 0;
}
