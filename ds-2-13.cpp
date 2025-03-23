#include<bits/stdc++.h>

using namespace std;

int minPlus(int a[],int size){
    int plus[size+1]={0};
    for(int i=0;i<size;i++){
        if(a[i]>0&&a[i]<=size){
            plus[a[i]]++;
        }
    }
    for(int i=1;i<=size;i++){
        if(plus[i]==0){
            return i;
        }
    }
    return size+1;
}

int main(){
    int a[4]={5,6,7,8};
    int min=minPlus(a,4);
    cout<<min;
}