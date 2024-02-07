#include <iostream>
using namespace std;

int div_by_2(long long X)
{
    int count = 0;
    while (X > 1) {
        if (X % 2 == 0) {
            count++;
            X /= 2;
        }
        else
            break;
    }
    return count++;
}


int main()
{
    long long X; int N; long count = 0 ,max = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> X;
        count = div_by_2(X);
      
        if (count > max)
            max = count;
    }
    cout << max;

    return 0;
}
