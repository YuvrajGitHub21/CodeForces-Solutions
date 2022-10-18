#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    for(int i=n+1;i<9000;i++){
        int a=i%10;
        int b=(i/10)%10;
        int c=(i/100)%10;
        int d=(i/1000)%10;
        // cout<<"a is "<<a<<endl;
        // cout<<"b is "<<b<<endl;
        // cout<<"c is "<<c<<endl;
        // cout<<"d is "<<d<<endl;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<i;
            break;
        }

    }
    return 0;
}
