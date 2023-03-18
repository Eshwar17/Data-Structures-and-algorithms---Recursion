//Base Condition: The condition we use to stop the resursion is called as base condition

#include<iostream>
using namespace std;

// global variable
int global = 0;

// global variable accessed from
// within a function
void display()
{
    if(global == 3)
        return;
	cout<<global<<endl;
    global++;
    display();
}

// main function
int main()
{
	display();
}
