#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b){
    return a + b;
}
int main() {
    int x , y;
    cin>> x>>y;
    int sum = solveMeFirst(x,y);
    cout << sum;
    
    return 0;
}
