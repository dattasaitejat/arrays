#include<bits\stdc++.h>
using namespace std;
void sub_array_check(int a[],n,s){
    int fl=0;
    
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum =0;
            for(int k=i;k<=j;k++)
            {
               cout<<a[k]<<" ";
               sum=sum+a[k];
            }
            cout<<sum<<"\n";
            if(sum==s)
            {
                cout<<"true";
                flg=1;
                break;
            } 
        }
    }
    if(!fl)
    {
        cout<<"false";
    }
}
int main(){
    int n,s;//n is no.of elements s is possible sum to check in sub arrays
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sub_array_check(arr,n,s);
}