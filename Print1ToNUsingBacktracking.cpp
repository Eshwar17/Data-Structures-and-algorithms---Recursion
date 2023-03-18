//CPP Program to print 1 to N using backtracking
#include<bits/stdc++.h>
using namespace std;
void printNum(int i, int n) {
    if(i < 1) {
        return;
    }
    printNum(i-1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    printNum(n, n);
 return 0;
}