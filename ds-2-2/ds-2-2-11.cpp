#include<bits/stdc++.h>

using namespace std;

int abTc(int a[],int an,int b[],int bn,int c[]){
    int ia=0;
    int ib=0;
    int ic=0;
    while(ia<an&&ib<bn){
        if(a[ia]<b[ib]){
            c[ic]=a[ia];
            ia++;
            ic++;
        }else if(a[ia]>b[ib]){
            c[ic]=b[ib];
            ic++;
            ib++;
        }else{
            c[ic]=a[ia];
            ia++;
            ic++;
        }
    }
    while(ia<an){
        c[ic]=a[ia];
        ic++;
        ia++;
    }
    while(ib<bn){
        c[ic]=b[ib];
        ic++;
        ib++;
    }
    return ic+1;
}

int main(){
    int a[5]={11,13,15,17,19};
    int b[5]={2,4,6,8,20};
    int an=5;
    int bn=5;
    int c[10];
    int cn=abTc(a,an,b,bn,c);
    cout<<c[cn/2-1];
}