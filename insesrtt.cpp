#include<bits/stdc++.h>
using namespace std;
int main(){
    int as,ns,ele,pos,id;
    cout<<"Enter max size of array to be\n";
    cin>>as;
    cout<<"Enter no.of elments\n";
    cin>>ns;
    int arr[as];
    cout<<"Enter elments\n";
    for(int i=0;i<ns;i++){
        cin>>arr[i];
    }
    cout<<"orginal array\n";
    for(int i=0;i<ns;i++){
         cout<<arr[i]<<" ";
    }
    cout<<"\n----------------------------\n";
    cout<<"Enter number to be inserted and pos\n";
    cin>>ele>>pos;
    id=pos-1;
    if(as>ns){
        for(int j=ns-1;j>=id;j--){
            arr[j+1]=arr[j];
        }
        arr[id]=ele;
        ns++;
    }
    else{
        cout<<"No space available cant be inserted\n";
    }
    cout<<"New array is\n";
    for(int i=0;i<ns;i++){
         cout<<arr[i]<<" ";
        }
        return 0;
}