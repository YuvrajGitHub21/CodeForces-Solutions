#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a=0, b=0,count=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=b){
            count++;
            b=a;
        }
    }
    cout<<count;
    return 0;
}
