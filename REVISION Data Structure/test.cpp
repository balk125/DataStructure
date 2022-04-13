#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int first, second, lowerbound, upperbound, digitSum, temp, remainderNum, digitNum;
    lowerbound = 1, upperbound = 1;

    cout << "Enter Frist Number: ";
    cin >> lowerbound;
    if (lowerbound > 100)
    {
        cout << "Please Enter more than 100 first number";
    }
    else
    {
        cout << "Enter Second Number: ";
        cin >> upperbound;
        cout << "Armstrong Numbers between " << lowerbound << " and " << upperbound << " are: ";
        for (int num = lowerbound; num <= upperbound; num++)
        {
            temp = num;
            digitNum = 0;
            while (temp != 0)
            {
                digitNum++;
                temp = temp / 10;
            }
            temp = num;
            digitSum = 0;
            while (temp != 0)
            {
                remainderNum = temp % 10;
                digitSum = digitSum + pow(remainderNum, digitNum);
                temp = temp / 10;
            }
            if (num == digitSum)
                cout << num << " ";
        }
    }
    return 0;
}