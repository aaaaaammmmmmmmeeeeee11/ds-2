#include <bits/stdc++.h>
#define MAXSIZE 50

using namespace std;

struct seqlist
{
  int data[MAXSIZE] = {1, 2, 2, 3, 3, 4, 4, 4, 5, 6, 7, 8, 9, 10};
  int size = 14;
};

void del(seqlist &l)
{
  int i = 0;
  int j = 1;
  int cnt = 0;
  while (j < l.size)
  {
    if (l.data[i] != l.data[j])
    {
      i++;
      l.data[i] = l.data[j];
      j++;
    }
    else
    {
      j++;
      cnt++;
    }
  }
  l.size -= cnt;
}

int main()
{
  seqlist l;
  for (int i = 0; i < l.size; i++)
  {
    cout << l.data[i] << " ";
  }
  cout << endl;
  del(l);
  for (int i = 0; i < l.size; i++)
  {
    cout << l.data[i] << " ";
  }
}