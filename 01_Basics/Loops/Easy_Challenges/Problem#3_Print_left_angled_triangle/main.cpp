#include<iostream>

using namespace std;


int main()
{
    int N, i=1, j;
    char x = '*';
    cin >> N;

    while(i <= N)
    {
        j = i;
        while(j)
        {
            cout << x;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}

