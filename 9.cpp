/*
Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). 
Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри. 
Доколку добиениот декаден збир е делив со 16 се печати Pogodok. 
Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), 
се печати Poln pogodok инаку се печати самиот збир.
Пример:
влез: A 7 F 2 0 c A 5
излез: 61
(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)
*/
#include <iostream>

using namespace std;
int main() {
 char x;
    int zbir=0,tmp;
    while(x!='.') {
        cin>>x;
        switch(x) {
            case '.': {
                tmp=0;
                break;
            }
            case 'A':
            case 'a': {tmp=10;
                break;
            }
            case 'B':
                case 'b': {
                tmp=11;
                break;
            }
            case 'C':
                case 'c': {
                tmp=12;
                break;
            }
            case 'D':
                case 'd': {
                tmp=13;
                break;
            }
            case 'E':
                case 'e': {
                tmp=14;
                break;

            }
            case 'F':
                case 'f':{
                tmp=15;
                break;}
            default:
                tmp=x-48;
        }
        zbir+=tmp;
    }
    tmp=0;
    tmp=zbir%100;

   if((zbir%16==0)&&(tmp/16==1)) {
       cout<<"Poln pogodok";
   }
    else {
        if(zbir%16==0) {
            cout<<"Pogodok";
        }
        else
            cout<<zbir;
    }
    return 0;
}
