/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
*/

#include <iostream>
using namespace std;
int main() {
 int broj;
    cin>>broj;
    if(broj<9)
        cout<<"Brojot ne e validen";
    else {
        for(int i=broj-1;i>=9;i--) {
            int flip=0,counter=0;
            int n=i;
            while(n!=0) {
                flip=(flip*10)+(n%10);
                n/=10;
                counter++;
            }
            if(flip%counter==0) {
                cout<<i<<endl;

                break;
            }

        }
    }
    return 0;
}
