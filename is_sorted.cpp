#include<bits/stdc++.h>
using namespace std;
int is_sorted(int a[],int n1){
    int flag=1;
    if(a[1]>a[2]){
        for(int i=0;i<n1-1;i++){
            if(a[i]<a[i+1]){
                flag=0;
                break;
            }
        }
    }else if(a[1]<a[2]){
        for(int j=0;j<n1-1;j++){
            if(a[j]>a[j+1]){
                flag=0;
                break;
            }
        }
    }
    return flag;
}
int main(){
    int n,res;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    res=is_sorted(arr,n);
    cout<<res;
    return 0;
}