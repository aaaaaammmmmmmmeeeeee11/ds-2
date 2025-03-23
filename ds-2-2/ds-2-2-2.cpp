#include <bits/stdc++.h>
#define MAXSIZE 50
using namespace std;

struct seqlist
{
    int data[MAXSIZE] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
};

bool resort(seqlist &s)
{
    int temp = 0;
    int l = 0;
    int r = s.size - 1;
    while (l < r)
    {
        temp = s.data[l];
        s.data[l] = s.data[r];
        s.data[r] = temp;
        l++;
        r--;
    }
    return true;
}

int main()
{
    seqlist l;
    for(int i=0;i<l.size;i++){
        cout<<l.data[i]<<" ";
    }
    cout<<endl;
    resort(l);
    for(int i=0;i<l.size;i++){
        cout<<l.data[i]<<" ";
    }
}