#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_ind]){
                min_ind=j;
            }
        }
        swap(a[i],a[min_ind]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    selection_sort(arr,n);
    cout<<"Sorted array:-\n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}