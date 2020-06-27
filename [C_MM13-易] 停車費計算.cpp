#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;

int main() {
    int a, b, c, d, sum_time, money;
    while(cin >> a >> b && cin >> c >> d){
        if((0 <= a && a <= 23) && (0 <= c && c <= 23)){
            if((0 <= b && b <= 59) && (0 <= d && d <= 59)){
                sum_time = (c-a)*60 + (d - b);
                if(sum_time <= 120){
                    money = (floor(sum_time/30))*30;
                    cout << money << endl;
                }
                else if(240 >=sum_time && sum_time > 120) {
                    money = 4*30+(floor((sum_time-120)/30))*40;
                    cout << money << endl;
                }
                else if(240 < sum_time){
                    money = 4*30 + 4*40 + (floor((sum_time-240)/30))*60;
                    cout << money << endl;
                }
            }
        }
    }
    return 0;
}
