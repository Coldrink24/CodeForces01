#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string N, W;
    cin >> N;
    W = N;

    int count = 0;
    int size = N.length();
    int middle = size / 2;

    // swapping
    for ( int i = 0; i < size; i++){
        if ( size % 2 == 0){

            // [ 0 1 2 3 4 ]   0,4   1,3  2
            W[i] = N[(size - i)- 1];
            W[(size - i ) - 1] = N[i];
        }
        else {
            if(i == middle){
                W[i] = N[i];
            }
            else{
                W[i] = N[(size - i) - 1];
                W[(size - i) - 1] = N[i];
            }
        }
    }


    // deleting zeros
    for( int i = 0 ; i < size; i++){
        if (W[i] == '0'){
            W[i] = ' ';
          count++;
        }
        else{
        break;
        }
    }


   cout << W.substr(count,size) << endl;

    if (W == N){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;

}

-----------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
 
    string N, X;
    cin >> N;
    X = N;
 
 
    reverse(N.begin(),N.end());
 
    cout << stoi(N) << endl;
    (N == X)? cout << "YES": cout << "NO";
 
    return 0;
}
