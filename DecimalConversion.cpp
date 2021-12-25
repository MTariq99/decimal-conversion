#include <iostream>
using namespace std;
//converting decimal into binary using an array
int main() {
 int a, b[4], c, i, n ;


 cout << "Enter a number for conversion : ";
 cin >> a;


 for ( i = 0 ; a > 0 ; i++) {

b[i] = a % 2; 
a = a/2 ;
}

 for ( i = 3; i >=0; i--) {
cout <<b[i] ;
}
 
return 0 ;

}