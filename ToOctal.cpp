#include <iostream>
using namespace std;


int main() {

int a , b[3] , c , i , n ;


cout << "Enter a decimal number : "; 
cin >> a ;


for ( i = 0; a > 0 ; i++) {

b[i] = a % 8;
a = a / 8;


} 

for ( i = 2; i >= 0; i--){

    cout << b[i] ;
}
cout << "in Octal form ";
return 0 ;


}