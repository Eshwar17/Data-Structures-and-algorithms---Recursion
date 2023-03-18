//CPP Program to print N to 1 lineraly
#include<bits/stdc++.h>
using namespace std;
void printNum(int i, int n) {
    if(i > n) {
        return;
    }
    printNum(i + 1, n);
    cout << i << endl;
}
//TC : O(n)->Because fn is called n times  SC : O(n)->Stack space
int main()
{
    int n, i = 1;
    cin >> n;
    printNum(i, n);
 return 0;
}