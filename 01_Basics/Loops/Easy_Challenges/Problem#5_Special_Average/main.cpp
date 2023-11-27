#include<iostream>

using namespace std;


int main()
{
    int N, num, i = 1;
    int oddAvg=0, evenAvg=0;
    int oddSum=0, evenSum=0;

    int evenCount, oddCount;

    cout << "Enter a Number: ";
    cin >> N;
    
    if(N % 2 == 0)
    {
        evenCount = N / 2;
        oddCount  = N / 2;
    }
    else 
    {
        evenCount = N / 2;
        oddCount  = N / 2 + 1;
    }

    while(i <= N)
    {
        cout << "Enter Number: ";
        cin >> num;
        
        if(i % 2 == 0)
        {
            evenSum += num;
        }
        else
        {
            oddSum += num;
        }

        i++;
    }
    cout << "The odd average is " << (oddSum / oddCount) << endl;
    cout << "The even average is " << (evenSum / evenCount) << endl;

    return 0;
}

