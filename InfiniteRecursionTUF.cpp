//CPP Program to impement infinite recursion/Non-ending recursion which results in stack overflow when there are numerous function calls waiting in the stack

#include<bits/stdc++.h>
using namespace std;
void func() {
    cout << 1 << endl;
    func();
}
int main()
{
    func();
 return 0;
}