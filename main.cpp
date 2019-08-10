#include <iostream>
using namespace std;

int main() {
    int p;
    float x,p1;
    cin>>p>>p1;
    p1 = (p1/100);
    int c=p;
    while(p>0){
        x=p*p1;
        p=int(p-x);
        c =c + p;
    }
    cout<<c<<endl;
}
