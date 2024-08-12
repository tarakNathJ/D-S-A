#include<iostream>
using namespace std;

// include simple sort problem
 long long int SquerRoot ( long long int number){
    long long int start = 0 ;
     long long int end = number ;
     long long int mid = start + (end - start)/2;

    while (start<=end)
    {
        if (mid * mid == number) return mid;
        else if (mid * mid > number)
        {
           end = mid;
        }
        else{
            start = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int a = SquerRoot(90);
    cout<<a;
    return 0;
}