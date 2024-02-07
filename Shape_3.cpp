#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i = 1; i <= 2*N ; i+=2)
    {

        for(int k = 2 * N - 1; k > i; k-=2)
        {
      /* i = 1 ... k = 7,5,3
       * i = 3 ... k = 7,5
       * i = 5 ... k = 7
       * i = 7 ... k = null */

            cout << " ";
        }
        for(int j = 0; j < i ; j++)
        {

        /* i = 1 ... j = 0
         * i = 3 ... j = 0,1,2
         * i = 5 ... j = 0,1,2,3,4
         * i = 7 ... j =0,1,2,3,4,5,6 */
            cout << "*";
        }
        cout << endl;

    }


    for(int i = 2*N -1; i >= 1; i-=2)
    {

        for(int k = 2 * N - 1; k > i; k-=2)
        {
            cout << " ";
        }
        for(int j = 0; j < i ; j++)
        {
            cout << "*";
        }


        if(i == 1){
            break;
        }
        else
        cout << endl;

    }


}
