#include<iostream>
using namespace std;
int main()
{

    int testCase;
    cin >> testCase;
    cout << testCase;
    int n; //bags
    int m; //kids
    int ans[testCase];    
    for(int i = 0 ; i < testCase ; i++)
    {
        cin >> n;
        cin >> m;
        int c[n];
        int sumC = 0;

        for(int j; j < n ; j++)
        {
            cin >> c[j];
            cout << c[j] << "*";
            sumC+=c[j];
        }
        int preRem;
        int curRem = 0;
        int b=0;
        do{
            preRem = curRem;
            curRem = sumC - m * b;
            b++;
            cout <<  preRem ;
            
        }while(curRem > 0);
        ans[i] = preRem;
    }

    for(int i =0 ;i < testCase ; i++)
    {
        cout<< ans[i] << endl;
    }
}