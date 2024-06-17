#include <iostream>
using namespace std;

int main() {

   char X;
   cin >> X;
   int ascii = int(X);

   if (ascii >= 65 && ascii <= 90){
       ascii += 32;
   }

   else if (ascii >= 97 && ascii <= 122){
       ascii -= 32;
   }
    cout << char (ascii);

    return 0;
}

-------------------------------------------------------------
   
#include <iostream>
using namespace std;
int main(){
    char X;
    cin >> X;
    int mynum = int(X);
    (mynum >= 97)? cout << char(mynum - 32): cout << char(mynum + 32);


    return 0;
}
