#include <string>
#include <iostream>
using namespace std;

bool lucky(string str){
    bool luck = false;
    int size = str.length();

    for(int i = 0; i < size ; i++){
        if(str[i] == '7'){
            luck = true;
        }
        else if(str[i] == '4')
        {
            luck = true;
        }
        else
        {
            luck = false;
            break;
        }
    }
    return luck;
}
int main (){
//
   long A, B;
   cin >> A >> B;

   int count =0;
   string AT = to_string(A),
   BT = to_string(B) ;

   // 100000
   for(int i = A; i <= B; i++)
   {
       string h = to_string(i);

       if(lucky(h)){
           cout << i << " ";
           count ++;
       }
       else
           continue;

   }
    if (count == 0){
        cout << -1;
    }
    return 0;
}

-------------------------------------------------------------

#include <iostream>


using namespace std;
int main(){

    int A, B, counter = 0;
    bool lucky = false;
    cin >> A >> B;

    for(int i = A; i <= B ; i++)
    {
        string str = to_string(i);
        int N = str.size();
        for(int j = 0; j < N; j++){

            if(str[j] == '4' || str[j] == '7'){
                lucky = true;
                continue;
            }
            else{
                lucky = false;
                break;
            }
        }
        if (lucky) {
            cout << i << " ";
            counter++;
        }

     }
    if(counter == 0) cout << -1;

    return 0;
}

