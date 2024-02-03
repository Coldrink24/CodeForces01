#include <iostream>
using namespace std;

int main (){

    char S;
    int N;
    cin >> S >> N;
    
    for(int i = 0; i < N; i++){

       int X;
       cin >> X;
        for(int j = 0; j < X ; j++){

           switch (S){
               case '+':
                   cout << S;
                   break;
               case '-':
                   cout << S;
                   break;
               case '*':
                   cout << S;
                   break;
               case '/':
                   cout << S;
                   break;
           }
        }
        cout << endl;
    }
    return 0;
}
