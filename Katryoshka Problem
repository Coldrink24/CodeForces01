#include <iostream>
using namespace std;

int main() {

    long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;

    long long cnt = 0, cnt2 = 0, total;

    if ( eyes < mouths )
    {
        cnt2 = eyes;
        cnt = (eyes - cnt2) / 2;

    }
    else if (eyes > mouths){
        cnt2 = mouths;
        cnt = (eyes - cnt2) / 2;
    }

    total = cnt + cnt2;
    if (bodies >= total){
        cout << total;
    }
    else if (bodies < total){
        cout << bodies;
    }

    return 0;
}
