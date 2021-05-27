#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,n,ele,id;
    cout<<"Enter max size of array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter no.of elemnts\n";
    cin>>n;
    cout<<"Enter elements in array\n";
    for(int i=1;i<=n;i++)cin>>arr[i];
    cout<<"Elements are -";
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    cout<<"\n-----------------\n";
    cout<<"Enter elment to be deleted\n";
    cin>>ele;
    for(int i=1;i<=n;i++){
        if(arr[i]==ele){
             id=i;
            break;
        }
    }
    if(id>0){
        for(int j=id;j<=n;j++){
        if(id>0){
            arr[j]=arr[j+1];
        }
        }
    }
    else{
        cout<<"No such an elment in array\n";
    }
    cout<<"New array\n";
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    return 0;
}