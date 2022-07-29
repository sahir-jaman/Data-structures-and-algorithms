// if i give u 432 digit;
// you should give me four,three,two as output; 

#include<bits/stdc++.h>
using namespace std;

void digitRecursion(int);
void printDigit(int);

void digitRecursion(int n)
{
    if(n==0)
    {
        return; 
    }

    digitRecursion(n/10);
    //cout<<n%10<<" ";
    printDigit(n%10);

}

void printDigit(int p){

    string str[10] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    cout<<str[p]<<" ";

}

int main()
{
    int n;
    cin>>n;
    digitRecursion(n);
}
