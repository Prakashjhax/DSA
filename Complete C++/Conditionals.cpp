// Take Positive integer intput and tell if it is even or odd 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if (n%2==0) cout<<"Even number";
    if (n%2!=0) cout<<"Odd Number";
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    if (n % 2 == 0) cout << "Even number :";
    else cout << "odd number :" ;
}

// question: take interger input and print the absolute value of that integer

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;
    if(n >= 0) {
        cout << n;
    }
    else {
        cout << -n;
    }
}

#include <iostream>
using namespace std;
int main (){
    int cp;
    cout << "enter cost price : ";
    cin >> cp;
    int sp;
    cout << "enter selling price : ";
    cin >> sp;
    if (sp > cp) {
        cout << "Profit is " << sp - cp;
    }
    else if (sp < cp) {
        cout << "loss" << cp - sp;

    } 
    else {
        cout << "No profit no Loss";
    }
}

//  Three digit or not 

#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "enter n : ";
    cin >> n;
    if (n>99 and n<1000) {
        cout << "Three digit number";
    }
    else {
        cout << "not a Three digit number";
    
    }
}

// Take 3 number intput and tell  if they can be teh sides of a tringle

#include <iostream>
using namespace std;
int main(){
    int a, b ,c ;
    cout << "Enter three sides of a triangle: " << endl;
    cout << "Enter first side: ";
    cin >> a;
    cout << "Enter second side: ";
    cin >> b;
    cout << "Enter third side: ";
    cin >> c;
    if (a+b>c and a+c>b and b+c>a){
        cout << "These sides can form a triangle";
    }
    else {
        cout << "There sides cannot form a triangle";
    }
}


// Take 3 positive integer input and print the greatest of them.

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three positive integers: " << endl;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Greatest number is: " << a;
    } else if (b >= a && b >= c) {
        cout << "Greatest number is: " << b;
    } else {
        cout << "Greatest number is: " << c;
    }
}


//  Take 3 positive integers input and print the least of them.

#include <iostream>
using namespace std;
int main (){
    int a, b, c;
    cout << "Enter three Positive Integers: " << endl;
    cout << "Enter first Integer: ";
    cin >> a;
    cout << "Enter second Interger: ";
    cin >> b;
    cout << "Enter third Integer: " ;
    cin >> c;
    if (a <= b and a <= c) {
        cout << "Least number is: " << a;
    }
    else if (b <= a and b <= c) {
        cout << "Least number is: " << b;

    }
    else {
        cout << "Least number is : " << c;

    }
}

// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integr: ";
    cin >> n;
    if ((n % 5 == 0 or n % 3 == 0) and n % 15 != 0) {
        cout << "The number is divisible by 5 or 3 but not divisible by 15";

    }
    else {
        cout << "The number is not divisible by 5 or 3 or it is divisible by 15 " << endl;


    }
}

// Take 3 positive integer input and print the greatest of them.

