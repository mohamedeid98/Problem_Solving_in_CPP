#include<iostream>

using namespace std;


int main()
{
    int N, i=1;
    char x = '*';
    cout << "Enter Number " ;
    cin >> N;

    while(N)
    {
        i = N;
        while(i)
        {
            cout << x;
            i--;
        }
        N--;
        cout << endl;
    }

    return 0;
}

