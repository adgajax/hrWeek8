#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int printAll(string str) { 
    int n = str.length();
    int count = 0;
    unsigned int opsize = pow(2, n); 
    for (int counter = 1; counter < opsize; counter++) { 
        string subs = ""; 
        for (int j = 0; j < n; j++) { 
            if (counter & (1<<j)) 
                subs.push_back(str[j]); 
        }
        do{ 
            count++; 
        } 
        while (next_permutation(subs.begin(), subs.end())); 
    }
    return count - n;
} 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[100];
    cin >> str;
    cout << printAll(str); 
    return 0;
}
