// ASSIGNMENT 2 UPGRADE

#include<iostream>
using namespace std;
int main(){

int i=0,j=0;
int*p=&i, *q=&j;
q=p;
*q=2;
cout<<i<<" "<<j;
return 0;
}

/// OUTPUT----- 2  0
