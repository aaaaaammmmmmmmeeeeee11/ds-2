#include<bits/stdc++.h>
#define MAXSIZE 50

using namespace std;

struct seqlist{
    int data[MAXSIZE];
    int size;
};

seqlist tt1(seqlist &l1,seqlist &l2){
    seqlist l3;
    int i=0;
    int j=0;
    int k=0;
    while(i<l1.size&&j<l2.size){
        if(l1.data[i]<l2.data[j]){
            l3.data[k]=l1.data[i];
            i++;
            k++;
        }else if(l1.data[i]>l2.data[j]){
            l3.data[k]=l2.data[j];
            j++;
            k++;
        }else{
            l3.data[k]=l1.data[i];
            i++;
            k++;
            j++;
        }
    }
    if(i<l1.size){
        for(;i<l1.size;i++){
            l3.data[k]=l1.data[i];
            k++;
        }
    }
    if(j<l2.size){
        for(;j<l2.size;j++){
            l3.data[k]=l2.data[j];
            k++;
        }
    }
    l3.size=k;
    return l3;
}

int main(){
    seqlist l1={{1,3,5,6,7,9},6};
    seqlist l2={{1,2,4,6,8,10},6};
    seqlist l3=tt1(l1,l2);
    for(int i=0;i<l3.size;i++){
        cout<<l3.data[i]<<" ";
    }
}