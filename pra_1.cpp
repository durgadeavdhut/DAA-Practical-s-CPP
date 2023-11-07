
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    
    int i, n, t1 = 0, t2 = 1, nT;
    cout<< "Fibonacci Series in C++ Without Using Recursion ";
    cout<< "\nEnter any number:";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        cout << t1 << " ";
        nT = t1 + t2;
        t1 = t2;
        t2 = nT;
    }
    
    cout<< "\n\nFibonacci Series in C++ Using Recursion";
    cout<< "\nEnter any number:";
    int p;
    cin>>p;
    cout << fibonacci(p);
    
}

/*
/tmp/EPItSejYBF.o
Fibonacci Series in C++ Without Using Recursion 
Enter any number:15
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 

Fibonacci Series in C++ Using Recursion
Enter any number:15
377
*/