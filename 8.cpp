/*
Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

Задачата да се реши без употреба на низи и матрици.
*/
#include <iostream>
using namespace std;
int main() {
 int N,X;
    cin>>N>>X;
    for(int i=N-1;i>0;i--) {
        int counter=0;
        int tmi=i;
        while(tmi!=0) {
            int tmp=tmi%10;
            int tmmx=X;
            while(tmmx!=0) {
                int tmx=tmmx%10;
                if(tmp==tmx) {
                    counter++;
                }
                tmmx/=10;
            }
            tmi/=10;
        }
        if(counter==0) {
            cout<<i;
            break;
        }
        else {
            if(i==1) {
                cout<<"0";
            }
        }
            }
    return 0;
}
