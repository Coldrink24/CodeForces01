#include <iostream>
using namespace std;

int main(){

   int A,B,F;
   char C, D;
   cin >> A >> C >> B >> D >> F;

   switch (C){
       case '+':
           ((A + B) == F) ? cout << "Yes" : cout << A + B;
           break;
       case '-':
           ((A - B) == F) ? cout << "Yes" : cout << A - B;
           break;
       case '*':
           ((A * B) == F) ? cout << "Yes" : cout << A * B;
           break;

   }
  }
