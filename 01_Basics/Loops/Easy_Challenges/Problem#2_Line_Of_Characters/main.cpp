#include<iostream>

using namespace std;


int main()
{
    int N;
    char ch;

    cin >> N >> ch;

    while(N > 0)
    {
        cout << ch;
        N--;
    }

    return 0;
}

