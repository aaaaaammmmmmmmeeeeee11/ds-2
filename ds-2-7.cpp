#include<bits/stdc++.h>

using namespace std;

void re_order(int data[],int m,int n){
    int l=m;
    int r=n;
    while(l<r){
        int temp=data[l];
        data[l]=data[r];
        data[r]=temp;
        l++;
        r--;
    }
}

int main(){
    int data[9]={4,5,6,7,8,9,1,2,3};
    re_order(data,0,8);
    for(int num:data){
        cout<<num<<" ";
    }
    cout<<endl;
    re_order(data,0,2);
    for(int num:data){
        cout<<num<<" ";
    }
    cout<<endl;
    re_order(data,3,8);
    for(int num:data){
        cout<<num<<" ";
    }
}