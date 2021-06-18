#include<iostream>
using namespace std;
int count=0;
void bubble_sort(int a[],int n){
    int n1=n;
    for(int i=0;i<n-1;i++){
        int fl=0;
        for(int j=0;j<n-1;j++){
            count++;
            if(a[j+1]<a[j]){
                swap(a[j],a[j+1]);
                fl=1;
            }
        }
        if(fl==0){
            break;
        }else if(fl==1){
            n1--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    bubble_sort(a,n);
    cout<<"---\n";
    cout<<"count= "<<count<<"\n";
    cout<<"Sorted list is:- \n";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}