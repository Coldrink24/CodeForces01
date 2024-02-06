#include <cmath>
#include <iostream>
using namespace std;

long long ones_to_bin(int count)
{
    // if count == 5
    // 1  1  1  1   1
    // 0  1  2  3   4
    // 1  2  4  8  16
    long long dec = 0;
  
    for (int i = 0; i < count; i++)
        dec += pow(2,i);

    return dec;

}

int dec_to_bin(long long dec)
{
    int count = 0;
    string bin = "00000000000000000000000000000000";
    //            01234567890123456789012345678901

    int size = bin.size() - 1;
    int remin = 0 ;   // for reminder
    long long division = dec;  // for division result
    for(int i = 0; i < 32; i++)
    {
        remin = division % 2; 
        if(remin == 1)
            count ++;
        division /= 2;
        bin[size-i] = char (remin + 48);  // 0=> 48 & 1 => 49 in ascii

        if(division == 0) // end of conversion
            break;
    }
    
    return count;
}

int main(){

    int T;
    long long N;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> N;
        cout << ones_to_bin(dec_to_bin(N)) << endl;
    }

}
