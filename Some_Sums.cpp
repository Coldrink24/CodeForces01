#include <string>
#include <iostream>

using namespace std;
int digit_summer(int i)
{
    string N = to_string(i);
    int size = N.size();
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += (int(N[i]) - 48);
    }
   return sum;
}
int main(){

    int A, B, N, sum = 0;
    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++){

        if(digit_summer(i) >= A && digit_summer(i) <= B)
            sum += i;
        
        else
            continue;
    }
    cout << sum;

    return 0;
}
