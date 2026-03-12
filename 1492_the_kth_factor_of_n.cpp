#include<iostream>
using namespace std;

int kthFactor(int n, int k) {
        
        int factorCount = 0;  
    
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                factorCount++;   
                if (factorCount == k) {
                    return i;
                }
            }
        }
        
        return -1;
    }

int main ()
{
    int n;
    cin>>n;

    int k;
    cin>>k;

    cout<<kthFactor(n,k);
    
   return 0;
}