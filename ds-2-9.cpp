#include<bits/stdc++.h>

using namespace std;

void print_common(int a[],int an,int b[],int bn,int c[],int cn){
    int ia=0;
    int ib=0;
    int ic=0;
    while(ia<an&&ib<bn&&ic<cn){
        if(a[ia]==b[ib]&&b[ib]==c[ic]){
            cout<<a[ia]<<" ";
            ia++;
            ib++;
            ic++;
        }else{
            if(a[ia]<b[ib]&&a[ia]<c[ic]){
                ia++;
            }else if(b[ib]<a[ia]&&b[ib]<c[ic]){
                ib++;
            }else if(c[ic]<a[ia]&&c[ic]<b[ib]){
                ic++;
            }
        }
    }
}

int main(){
    int a[5]={1,3,5,7,9};
    int b[3]={2,4,5};
    int c[4]={5,6,7,8};
    int an=5;
    int bn=3;
    int cn=4;
    print_common(a,an,b,bn,c,cn);
}