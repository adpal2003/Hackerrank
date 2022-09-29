#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine "
               }; 

    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<one[i]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else {
            cout<<"odd"<<endl;
        }
    }           


    return 0;
}
