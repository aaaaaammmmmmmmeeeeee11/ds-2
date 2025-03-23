#include <bits/stdc++.h>

using namespace std;

int getD(int a, int b, int c)
{
    return abs(a - b) + abs(a - c) + abs(b - c);
}

bool isMIn(int a, int b, int c)
{
    return a <= b && a <= c;
}

int getMinRemove(int a[], int an, int b[], int bn, int c[], int cn)
{
    int ai = 0;
    int bi = 0;
    int ci = 0;
    int d = INT_MAX;
    while (ai < an && bi < bn && ci < cn)
    {
        d = d < getD(a[ai], b[bi], c[ci]) ? d : getD(a[ai], b[bi], c[ci]);
        if (isMIn(a[ai], b[bi], c[ci]))
        {
            ai++;
        }
        else if (isMIn(b[bi], a[ai], c[ci]))
        {
            bi++;
        }
        else
        {
            ci++;
        }
    }
    return d;
}

int main()
{
    int a[3] = {-1, 0, 9};
    int b[4] = {-25, -10, 10, 11};
    int c[5] = {2, 9, 17, 30, 41};
    int an = 3, bn = 4, cn = 5;
    int d = getMinRemove(a, an, b, bn, c, cn);
    cout << d;
}