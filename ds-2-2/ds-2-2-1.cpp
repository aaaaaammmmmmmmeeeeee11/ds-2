#include<iostream>
#define MAXSIZE 50
using namespace std;

struct seqlist{
    int data[MAXSIZE]={2,3,1,4,5};
    int size=5;
};

bool delMin(seqlist &l){
    if(l.size==0){
        return false;
    }
    int min=l.data[0];
    int index=0;
    for(int i=1;i<l.size;i++){
        if(min>l.data[i]){
            min=l.data[i];
            index=i;
        }
    }
    if(index<l.size-1){
        l.data[index]=l.data[l.size-1];
        l.data[l.size-1]=0;
    }
    l.size--;
    return true;
}
int main(){
    seqlist l;
    for(int i=0;i<l.size;i++){
        cout<<l.data[i]<<" ";
    }
    cout<<endl;
    delMin(l);
    for(int i=0;i<l.size;i++){
        cout<<l.data[i]<<" ";
    }


}