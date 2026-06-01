#include<iostream>

using namespace std;
int main()
{
   int num, tot;
   cout<<"Enter the Number: ";
   cin>>num;
   for(tot=0; num>0; tot++)
      num = num/10;
   cout<<"\nTotal Digits = "<<tot;
   cout<<endl;
   return 0;
}