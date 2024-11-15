/*
Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), 
да се најде и испечати најмалиот „благ број“. 
Ако не постои таков број, да се испечати NE.
*/
#include <iostream>
using namespace std;
int main() {
 int m,n,tmp;
    cin>>m>>n;
    for(int i=m;i<=n;i++) {
        tmp=i;
        int counter=0,counter1=0;
        while(tmp!=0) {
            int x=tmp%10;
            tmp/=10;
            counter++;
            if(x%2==0) {
                counter1++;
            }
        }
        if(counter==counter1) {
            cout<<i;
            break;
        }
        else {
            if(i==n)
            cout<<"NE";
        }
    }
    return 0;
}
