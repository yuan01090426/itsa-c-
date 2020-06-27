#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int A,B,C;
    while(cin >> a >> b >> c){
        A=a*a;
        B=b*b;
        C=c*c;
        if(((a+b)<=c)||((a+c)<=b)||((b+c)<=a)){
            cout << "Not Triangle" << endl;
        }
        else if(((A+B)==C)||((A+C)==B)||((B+C)==A)){
            cout << "Right Triangle" << endl;
        }
        else if(((A+B)<C)||((A+C)<B)||((B+C)<A)){
            cout << "Obtuse Triangle" << endl;
        }
        else if(((A+B)>C)||((A+C)>B)||((B+C)>A)){
            cout << "Acute Triangle" << endl;
        }


    }
    return 0;
}

