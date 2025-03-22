#include<bits/stdc++.h>

using namespace std;

void reorder(int data[],int start,int end){
    while(start<end){
        int temp=data[start];
        data[start]=data[end];
        data[end]=temp;
        start++;
        end--;
    }
}

void leftN(int data[],int size,int p){
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
    reorder(data,0,size-1);
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
    reorder(data,0,size-p-1);
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
    reorder(data,size-p,size-1);
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
}

int main(){
    int data[7]={1,2,3,4,5,6,7};
    int size=7;
    int p=3;
    leftN(data,size,p);
}