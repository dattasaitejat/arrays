#include<bits/stdc++.h>
using namespace std;
void reverse(int *arr,int n){
     int temp;
    for(int i=0;i<n/2+1;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<"\n-----\n";
    reverse(arr,n);
    cout<<"reversed array-\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}