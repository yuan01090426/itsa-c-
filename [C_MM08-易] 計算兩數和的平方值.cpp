#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num1,num2;
    cin >> num1 >> num2;
    int sum,ans;
    sum = num1+num2;
    ans = pow(sum,2);
    cout << ans << endl;
    return 0;
}
