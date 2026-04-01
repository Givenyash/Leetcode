#include<iostream>
using namespace std;

 bool isHappy(int n) {
        if(n==1 or n==7){
            return true; 
        }
        else if(n<10){
            return false;
        }
        else{
        
        int sum=0;
            while(n>0){
                int temp=n%10;
                sum= sum+temp*temp;
                n=n/10;
            }
            return isHappy(sum); 
        }
    }

int main ()
{
    int n;
    cin>>n;

    if( isHappy(n) == true ){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

   return 0;
}