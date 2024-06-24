//time exceeded code

#include <iostream>
using namespace std;

int main(){


    string S;
    cin >> S;
    bool swapped;
    int N = S.size();
    char current;

    
    // sorting letters code
    for(int i = 0; i < N; i++)
    {
        swapped = false;
        for(int j = 1; j < N; j++){
            if(int(S[j]) < int(S[j - 1])){
                swapped = true;
                current = S[j];
                S[j] = S[j - 1];
                S[j - 1] = current;
            }
        }
        if(!swapped) break;
    }





    //counting code
    int counter = 1;

    for(int i = 0; i < N; i++)
    {
        if(S[i] == S[i + 1])
            counter ++;
        else
        {
            cout << S[i] <<" : " << counter << endl;
            counter = 1;
        }
    }

    return  0;
}
