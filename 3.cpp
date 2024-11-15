/*
Од стандарден влез се чита еден природен број n. 
Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. 
Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
*/
#include <iostream>
using namespace std;
int main() {
 int n,max=0,maxbr=0;
    cin>>n;
    for(int i=n-1;i>0;i--) {
        int counter=0;
        for(int j=i/2;j>0;j--) {
            if(i%j==0) {
                counter+=j;
            }
        }
        if(max<counter) {
            max=counter;
            maxbr=i;

        }
    }
    cout<<maxbr;
    return 0;
}
