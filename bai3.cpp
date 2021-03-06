#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, n,m;
    cin>> a>>n>>m;
    int kq=1;
    for(int i=0; i< n; i++){
        kq = kq * (a%m);
        if ( kq>m) kq %=m;
    }
    cout<< kq;
    return 0;
}