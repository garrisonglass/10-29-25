// 10-29-25.cpp : 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int least, greatest, num;
    cin >> num;
    greatest = num;
    least = num;

    while(num !=- 99)
    {
        if (num > greatest)
        {
            greatest = num;
        }
        if (num < least)
        { 
            least = num;
        }
        cin >> num;

    }
    cout << "The greatest is: " << greatest << endl;
    cout << "The least is: " << least;
    cout << "Hello World!\n";
    return 0;
}


