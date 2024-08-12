#include <iostream>
using namespace std;


int Searching (int Array[] , int sta,int end,int key){
    int s = sta;
    int e = end;
    int mid = sta +(end-sta ) /2;

    // cout<<mid;
    while ( s <= e)
    {
        if(Array[mid] == key){
            
            return mid;
        } 
        else if (Array[mid] >key)
        {
            
           e = mid -1;
        }else{
         
            s = mid +1;
        }
        
       mid = s +(e-s ) /2;
    }
    return -1;

}



int PrivateArray (int Array[],int e,int key){

    int sta = 0;
    int end = e-1;
    int mid = sta +(end-sta ) /2;
    int result ;

    while ( sta < mid)
    {
       if(Array[mid] >= Array[0] ){
        sta = mid +1; 
       }else{
        end  =mid;
       }
       mid = sta +(end-sta ) /2;
    }



    if(Array[0] ==  key){
         return 0;
    }
    else if(Array[0] > key){
       result =  Searching(Array ,sta ,e-1 ,key);
    }else{
        result =  Searching(Array ,0 ,sta-1 ,key);
    }
    
    return result;


}


int main(){
    
    int arr[] ={12,13,34,2,3,4,5,6,7} ;
    int ans = PrivateArray(arr,9,34);
    cout<<ans;
    return 0;
}