#include <bits/stdc++.h>
#define MAXSIZE 50
using namespace std;

struct seqlist
{
  int data[MAXSIZE] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
  int size = 10;
};

void delXtoY(seqlist &l, int x, int y)
{
  if(l.size==0){
    cout<<"err"<<endl;
  }
  int cnt = 0;
  for (int i = 0; i < l.size; i++)
  {
    if (l.data[i] < x || l.data[i] > y)
    {
      l.data[cnt] = l.data[i];
      cnt++;
    }
  }
  l.size = cnt;
}

int main()
{
  seqlist l;
  for (int i = 0; i < l.size; i++)
  {
    cout << l.data[i] << " ";
  }
  cout<<endl;
  delXtoY(l, 2, 4);
  for (int i = 0; i < l.size; i++)
  {
    cout << l.data[i] << " ";
  }
}