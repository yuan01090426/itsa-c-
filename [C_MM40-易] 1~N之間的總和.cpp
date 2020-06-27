#include <iostream>
using namespace std;
int main() {
    int N, sum;
    while(cin >> N)  {
        for(int i = 1;i <= N;i++)  {
            sum = sum + i;
        }
        for(int j = 1;j <= N;j++)  {
            if(j == 1)  {
                cout << "1";
            }
            else  {
                cout << " + " << j;
            }
        }
        cout << " = " << sum << endl;
        sum=0;
    }
    return 0;
}

