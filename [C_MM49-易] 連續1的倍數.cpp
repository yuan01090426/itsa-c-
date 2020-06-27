#include <iostream>
using namespace std;

int main() {
    int k, n, num=1, count = 1;
    cin >> k;
    for(int i = 0;i < k;i++) {
        cin >> n;
        for(;(num %= n)!=0;count++) {
            num = 10*num+1;
        }
        cout << count << endl;;
        num = 1;
        count = 1;
     }
    return 0;
}
