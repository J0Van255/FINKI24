/*
Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга. 
На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:

a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e

Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). 
Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
*/
#include <iostream>
#include <cmath>
using namespace std;
bool cikcak(int number) {
    int flag=3;
    while(number>9) {
        if(number%10 > (number/10)%10) {
            if(flag==1) {
                return false;

            }
            flag=1;

        }
        else if(number%10 < (number/10)%10) {
            if(flag==0) {
                return false;

            }
            flag=0;
        }
        else
            return false;
        number/=10;
    }
    return true;
}
int main() {
    int x;
    while(cin>>x) {
        if(x<10)
            continue;
        if(cikcak(x)) {
            cout<<x<<endl;
        }
    }
    return 0;
}
