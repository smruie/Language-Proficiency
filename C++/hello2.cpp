#include <iostream>
using namespace std;


int main(){
    std::cout<<"Hello World\n"; //namspace std, cout is linked to standard output
    // >> is extraction operator - this is used with cin
    // << is insertion operator - this is used with cout 
   int amount1;
   int amount2;

   int amount_total;

   cin>>amount1; 
   cin>>amount2;

   amount_total=amount1+amount2;
   cout<<"The total amount with Rahul right now is "<<amount_total;


    return 0;
}