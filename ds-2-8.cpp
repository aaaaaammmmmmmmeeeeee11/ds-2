#include<bits/stdc++.h>

using namespace std;

int findX(int data[],int x,int size){
    int l=0;
    int r=size-1;
    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(data[mid]==x){
            return mid;
        }else if(data[mid]<x){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return (l+r)/2+1;
}

void swapORinsert(int data[],int& x,int & size){
    int insert_index=findX(data,x,size);
    if(data[insert_index]==x&&insert_index!=size-1){
        int temp=data[insert_index];
        data[insert_index]=data[insert_index+1];
        data[insert_index+1]=temp;
    }
    else if(data[insert_index-1]!=x){
        for(int i=size;i>insert_index;i--){
            data[i]=data[i-1];
        }
        data[insert_index]=x;
        size++;
    }
}

int main(){
    int data[50]={0,1,2,3,4,5,6,7,8,9};
    int size=10;
    int x=4;
    swapORinsert(data,x,size);
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
    
}