/*
Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook.

Chef's restaurant has X stoves and only 1 packet can be cooked in a single pan.

How many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?

Input Format
The first and only line of input contains two space-separated integers X and Y — the number of stoves and the number of minutes, respectively.
Output Format
Print a single integer, the maximum number of customers Chef can serve in Y minutes
Constraints
1≤X,Y≤1000

*/
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int X;
    int Y;
    cin >> X >> Y;
    cout << X * Y;
    return 0;
}