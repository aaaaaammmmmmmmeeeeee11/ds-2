#include<bits/stdc++.h>
#define MAXSIZE 50

using namespace std;

struct seqlist{
    int data[MAXSIZE]={1,2,3,4,2,5,6,2,7,2};
    int size=10;
};

int delX(seqlist &l,int x){
    int cnt=0;
    for(int i=0;i<l.size;i++){
        if(l.data[i]!=x){
            l.data[cnt]=l.data[i];
            cnt++;
        }
    }
    l.size=cnt;
    return l.size-cnt;

}

int main(){
    seqlist l;
    for(int i=0;i<l.size;i++){
        cout<<l.data[i]<<" ";
    }
    cout<<endl;
    delX(l,2);
    for(int i=0;i<l.size;i++){
        cout<<l.data[i]<<" ";
    }
    cout<<endl;

}