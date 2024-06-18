#include <iostream>
using namespace std;

bool isPrime(int Number){
  
    long X = Number;
    bool prime = false;
    int i = 2;
  
    do {

        if (X % i == 0)
        {
            prime = false;
            break;
        }
        else
            prime = true;
        i++;
    } while ( i < (X / 2) );

    return prime;
}


int main() {

    int N;
    cin >> N;
    bool prime;
    cout << 2;

    // loop for collecting number which we are gonna test
    for (int i = 3; i <= N; i+= 2){

        if (isPrime(i)) {
            cout << " "<<i;
        }

    }
    return 0;
}

------------------------------------------

  #include <iostream>
 
using namespace std;
int main(){
 
    int N;
    cin >> N;
 
    bool prime;
 
    for( int i = 2; i <= N; i++)
    {
        prime = true;
        for(int j = 2; j <= i/2 ; j++)
        {
            if(i % j == 0){
                prime = false;
                break;
            }
            else
                continue;
        }
        if(prime == true) cout << i << " ";
    }
    return 0;
}
