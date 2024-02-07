#include <iostream>
using namespace std;

int main()
{
     //1 2 3 4 5 6 7 8  9  10  11
     //0 1 1 2 3 5 8 13 21 34  55

    int N, pre1, pre2, current;
    // pre 1 => previous num, pre 2 => pre-previous
  
    cin >> N;
    // number of digits that will be printed
    for(int i = 1; i <= N ;i++)
    {
        if(i == 1)
            cout << 0;

        else if(i == 2 || i == 3)
        {
            cout << " " << 1;
            pre1 = 1;
            pre2 = 1;
        }
        else
        {
            current = pre1 + pre2;
            cout << " " << current;
            pre2 = pre1;
            pre1 = current;
        }
    }

    return 0;
}
