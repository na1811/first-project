#include<iostream>
using namespace std;

int n, x;
int a[100000];
bool kt( int left, int right)
{
    if( left <= right){
        int mid = (left + right) /2;
        if( x== a[mid]) return true;
        else {
            if(x>a[mid]) return kt( mid+1, right);
            else return kt( left, mid-1);
        }
    }
    else return false;
}

int main()
{
    cin>> n>>x;
    for(int i=0; i<n;i++){
      cin>> a[i];
    }
    if (kt(0, n-1)) cout<<"YES";
    else cout<<"NO";
    return 0;
}