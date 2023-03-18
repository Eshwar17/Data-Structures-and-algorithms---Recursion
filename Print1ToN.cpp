//CPP Program to print 1 to N lineraly
#include<bits/stdc++.h>
using namespace std;
void printNum(int i, int n) {
    if(i > n) {
        return;
    }
    cout << i << endl;
    printNum(i + 1, n);
}
//TC : O(n)->Because fn is called n times  SC : O(n)->Stack space
int main()
{
    int n, i = 1;
    cin >> n;
    printNum(i, n);
 return 0;
}