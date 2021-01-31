// GuessIt vs AI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int SetGoal()
{
    return rand() % 100 + 1;
}

int enter()
{
    int n;
    cout << "Enter a number between 1 and 100: ";
    cin >> n;
    return n;
}

bool check(int m, int n)
{
    if (n == m)
    {
        cout << "You won!";
        return true;
    }
    else if (n > m)
    {
        cout << "too big" << endl;
        return false;
    }
    else
    {
        cout << "too small" << endl;
        return false;
    }
}
int main(int argc, char *argv[])
{
    srand(time(0));

    int m = SetGoal();
    int n = enter();
    bool c = check(m, n);
    
    do 
    {
        n = enter();
        check(m, n);
    } while (c == false);
    if (c == true)
        return 0;
}

