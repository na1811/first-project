#include<iostream>
using namespace std;

bool sNT (int a)
{
    int dem=0;
    for( int i=2; i<=a; i++){
        if(a%i==0) dem++;
    }
    if( dem <2) return true;
    else return false;
}

int main(){
    int n;
    cin>> n;
    for( int i=2; i<=n; i++){
        if( sNT(i)) cout<<i<<' ';
    }
    return 0;
}