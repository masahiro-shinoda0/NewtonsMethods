// ニュートン法を利用して，sqrt(2)を求めるプログラムを作成

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input n : ";
    cin >> n;

    double t = 2;

    for(int i=0; i<n; i++){
        t = t/2 + 1/t;
    }

    cout << "Answer is " << t << endl;

    return 0;
}
