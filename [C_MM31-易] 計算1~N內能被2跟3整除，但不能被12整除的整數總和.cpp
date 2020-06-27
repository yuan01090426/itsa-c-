#include <iostream>
using namespace std;
int main(){
    int n,i,a;
    while(cin >> n){
        a=0;
        for(i=0;i<=n;i++){
            if(i%6==0&&i%12!=0){
                a=a+i;
            }
        }
        cout << a << endl;
    }
    return 0;
}
