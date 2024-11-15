/*
Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број. 
За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). 
Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:

[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]

0: 2

1: 3

2: 1

3: 1

4: 1


за броевите 97654 48654 12345 12343 1263 12443 12643 12777
*/
#include <iostream>
#include <cmath>
using namespace std;
int pozicija(int number) {
    int tmp=number,counter=0,pos;
    while(number>0) {
        number/=10;
        counter++;
    }
    int max=0;
    for(int i=0;i<counter;i++)
    {
        if(max<tmp%10) {
            max=tmp%10;
            pos=i;
        }
        tmp/=10;
    }
    return pos;
}
int main() {
    int x,cn0=0,cn1=0,cn2=0,cn3=0,cn4=0;
while(cin>>x) {
    if(pozicija(x)==0)
        cn0++;
    if(pozicija(x)==1)
        cn1++;
    if(pozicija(x)==2)
        cn2++;
    if(pozicija(x)==3)
        cn3++;
    if(pozicija(x)==4)
        cn4++;
}
    cout<<"0: "<<cn0<<endl;
    cout<<"1: "<<cn1<<endl;
    cout<<"2: "<<cn2<<endl;
    cout<<"3: "<<cn3<<endl;
    cout<<"4: "<<cn4<<endl;
    return 0;
}
