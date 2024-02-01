#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin,S);   //to read a sentence with spaces 
    for(int i=0; i <= S.size(); i++){
        if (int(S[i]) != 32){    // 32 is the ascii for spaces
            cout << S[i];
        }
        else{
            cout << "\n";}
    }
    return 0;
}
