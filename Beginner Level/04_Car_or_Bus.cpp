/*

Chef wants to reach home as soon as possible. He has two options:

Travel with his BIKE which takes X minutes.
Travel with his CAR which takes Y minutes.
Which of the two options is faster or do they both take same time?

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X,Y representing the time taken to travel with BIKE and CAR respectively.
Output Format
For each test case, print CAR if travelling with Car is faster, BIKE if travelling with Bike is faster, SAME if they both take the same time.

You may print each character of CAR, BIKE and SAME in uppercase or lowercase (for example, CAR, Car, cAr will be considered identical).

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while(T){
        int X;
        int Y;
        cin >> X >> Y;
        if(X>Y){
            cout << "BIKE"<<endl;
        }else if(Y>X){
            cout << "CAR"<<endl;
        }else{
            cout << "SAME"<<endl;
        }
        T--;
    }
    return 0;
}