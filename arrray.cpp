#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array emements\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    int *maxi=max_element(arr,arr+n);
    int freq[*maxi]={0};
    int max=0,id;
    for(int i=0;i<n;i++){
        freq[arr[i]]+=1;
        if (freq[arr[i]]>max){
            max=freq[arr[i]];
            id=arr[i];
        }
    }
    cout<<"id number "<<id<<" repeated most of the times"<<endl;
    return 0;
}