#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of id's\n";
    cin>>n;
    int arr[n];
    cout<<"Enter id's\n";
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,int>dic;
    int max=0,id;
    for(int i=0;i<n;i++){
        dic[arr[i]]++;
        if(max<dic[arr[i]]){
            max=dic[arr[i]];
            id=arr[i];
        }
    }
    cout<<id;
    return 0;
}