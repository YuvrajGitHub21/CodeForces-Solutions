#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,h,a=0,b=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=h){
            a++;
        }
        else{
            b++;
        }
    }
    cout<<a+(2*b);
    return 0;
}
