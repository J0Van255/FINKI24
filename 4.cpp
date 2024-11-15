/*
Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100). 
Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)
*/

#include <iostream>
using namespace std;
bool isnumber(char znak) {
    if((znak>='0')&&(znak<='9'))
        return 1;
    return 0;
}
int main() {
    char znak;
    int zbir=0,kraen=0,flag=0;
    while(cin>>noskipws>>znak) {
        if(isnumber(znak)) {
            if(flag==0) {
                zbir+=(znak-'0');
                flag=1;
                continue;
            }
            else if(flag==1) {
                zbir=(zbir*10)+(znak-'0');
                flag=0;
                kraen+=zbir;
                zbir=0;
            }
        }
        else {
            kraen+=zbir;
            zbir=0;
        }
        if(flag==1)
            kraen+=zbir;
        flag=0;
        if(znak=='!')
            break;
      }
    cout<<kraen;
    return 0;
}
