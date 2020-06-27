#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int a;
  int i;
  int flag=0;
  while(cin >> a){
    for(i=2,flag=0;i<a;i++){
      if((a%i)==0){
            break;
      }
      if(i==(a-1)){
            flag=1;
      }
    }
    if(a==2){
        cout << "YES" << endl;
    }
    else if(flag==0){
        cout << "NO" << endl;
    }
    if(flag==1){
        cout << "YES" << endl;
    }
  }
  return 0;
}
