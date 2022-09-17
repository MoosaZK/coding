#include<iostream>
using namespace std;

bool checkSubSequence(string I, string P)
{
    int n = I.length();
    int m = P.length();

    if(n > m){
        return false;
    }
    int ptrI = 0;
    int ptrP = 0;

    while (ptrI < n && ptrP < m)
    {
        if(I[ptrI] == P[ptrP])
        {
            ptrI++;
            ptrP++;
        }
        else
            ptrP++;
            
    }
    if(ptrI == n)
        return true;
    else
        return false;
        


}

int main(){
    int testCase;
    cin >> testCase;
    string i[testCase],p[testCase];
    bool ans[testCase];
    for(int j = 0 ; j<testCase; j++)
    {   
        

        cin >> i[j];
        cin >> p[j];
        ans[j] = checkSubSequence(i[j] , p[j]);
    }
    for (int j = 0; j < testCase; j++)
    {
        if (ans[j])
        {
            int n = p[j].length() - i[j].length() ;
           cout<< "Case #"<<j+1<<": "<< n <<endl;
        
        }
        else
            cout<< "Case #"<<j+1<<": IMPOSSIBLE"<<endl;
    }
    
    
    

    return 0;
}