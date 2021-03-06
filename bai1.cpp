#include<iostream>
using namespace std;

int main(){
    int n, hang[10000], cot[10000];
    cin>> n;
    for( int i=1; i<=n; i++){
        cin>> hang[i]>> cot[i];
    }
    bool kt = false;
    for( int i=1; i<=n; i++){
        for( int j=i+1; j<=n;j++){
            if( hang[i]==hang[j]) kt =true;
        }
    }
    for( int i=1; i<=n; i++){
        for( int j=i+1; j<=n;j++){
            if( cot[i]==cot[j]) kt =true;
        }
    }
    for( int i=1; i<=n; i++){
        for( int j=i+1; j<=n;j++){
            if((hang[i]+ cot[i])==(hang[j]+ cot[j]) || (hang[i]- cot[i])==(hang[j]- cot[j])) kt =true;
        }
    }
    if(kt) cout<<"yes";
    else cout<<"no";
}
