#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=1;i<n+1;i++){cin>>arr[i];}
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(i==arr[j]){
                cout<<j<<" ";
            }
        }
    }
    return 0;
}
