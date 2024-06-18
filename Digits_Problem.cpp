#include <iostream>
#include <string>
using namespace std;

string swapping(string N)
{
    string W = N;
    int size = W.size();
    int middle = size / 2;
    for ( int i = 0; i < size; i++)
    {
        if (size % 2 == 0)
        {
            W[i] = N[(size - i) - 1];
            W[(size - i) - 1] = N[i];
        }
        else
        {
            // [ 0 1 2 3 4 ]   0,4   1,3  2
            if (i == middle)
                W[i] = N[i];
            else
            {
                W[i] = N[(size - i) - 1];
                W[(size - i) - 1] = N[i];
            }
        }
    }

    return W;

}

string spacing(string W)
{
    string EX = W + W;
    int size2 = EX.size();

    for (int i = 0; i <= size2; i++)
    {

        if( i == 0)
            EX[i] = W[i];

        else if(i % 2 != 0)
            EX[i] = ' ';

        else
            EX[i] = W[i /2];
    }
    return EX;
}

int main() {

    int T;
    string N;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        string W = swapping(N);
        string EX = spacing(W);
        cout << EX << endl;

    }
    return 0;
}
--------------------------------------------------
#include <iostream>
#include <algorithm>
 
using namespace std;
int main(){
 
   int T;
   string N, newN;
 
   cin >> T;
 
   for(int i = 0 ; i < T ; i++){
 
       cin >> N;
       newN = N + N;
       reverse(N.begin(), N.end());
       for(int j = 0; j < N.size()*2  ; j++)
       {
          if(j%2 ==0)
          {
              newN[j] = N[j/2];
          }
          else
              newN[j] = ' ';
       }
       cout << newN << endl;
 
   }
    return 0;
}
