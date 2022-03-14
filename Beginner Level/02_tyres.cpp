/*
There are N bikes and M cars on the road.

Each bike has 2 tyres.
Each car has 4 tyres.
Find the total number of tyres on the road.

Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers N,M.
Output Format
For each test case, output in a single line, the total number of tyres on the road.

Constraints
1≤T≤1000
0≤N,M≤100
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while(T){
        int N;
        int M;
        cin >> N >> M;
        cout << (M * 4) + (N * 2) << endl;
        T--;
    }
    return 0;
}