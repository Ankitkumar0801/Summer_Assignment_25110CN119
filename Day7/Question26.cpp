#include <iostream>
using namespace std;
int fibonnaci(int n)
{
     if(n == 0)
        return n;
     if(n == 1)
        return n;
     return fibonnaci(n - 1) + fibonnaci(n - 2);
}
int main()
{
     int n;
     cout << "Enter Number :--> ";
     cin >> n;
     cout << "Fibonacci Series :--> ";
     for(int i=0; i<n; i++)
        {
            int result = fibonnaci(i);
            cout << result << " ";
        }
        return 0;
}