#include<bits/stdc++.h>

using namespace std;

int getKeyValue(int a[],int size){
    int cnt[size-1]={0};
    for(int i=0;i<size;i++){
        cnt[a[i]]++;
    }
    for(int i=0;i<size;i++){
        if(cnt[i]>size/2){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[8]={0,5,5,3,5,7,5,5};
    int size=8;
    int key=getKeyValue(a,size);
    cout<<key<<endl;
}