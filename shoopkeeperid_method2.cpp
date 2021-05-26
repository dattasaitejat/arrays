#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int *max=max_element(arr,arr+n);
    int freq[*max]={0};
    for(int i=0;i<*max;i++){
        freq[arr[i]]+=1;
    }
    for(int i=0;i<*max;i++){
        cout<<freq[i];
    }
}
