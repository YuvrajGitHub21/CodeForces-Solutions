#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int count =0;
    for(int i=0;i<n;i++){
        int arr[3];
        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[j];
        }
        if(sum>1){
            count++;
        }
    }
    cout<<count;
    return 0;
}
