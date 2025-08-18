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
