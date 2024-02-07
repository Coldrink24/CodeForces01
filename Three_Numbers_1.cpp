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

    int K,Sum;
    cin >> K >> Sum;
    int Min = min(K,Sum);
    int count = 0;

    //number of available digits
    for(int i = 0; i <= Min ; i++)
    {
        for(int j = 0; j <= Min; j++)
        {
               for(int k = 0; k <= Min; k++)
               {
                        if (i + j + k == Sum)
                        {
                            count++;
                            //cout << i <<" + " << j << " + "<< k << " = " << Sum <<endl;    //uncomment to understand the problem if needed
                        }
                        else continue;
               }
        }
    }
    cout << count;

    return 0;
}
