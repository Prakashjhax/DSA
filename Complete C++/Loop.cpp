#include<iostream>
using namespace std;
int main() {
    for (int i =0; i <= 10; i++){
        cout << "Hello World" << endl;
    }
}

// take input from user and print "Hello world" that many times;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        cout << "Hey how are you ? " << endl;
    }
}


// Print the number form 1 to 100;

#include<iostream>
using namespace std;
int main (){
    for (int i=1; i <= 100; i++){
        cout << i << endl;
    }
}


// Print all the even numbers from 1 to 100;

#include<iostream>
using namespace std;
int main (){
    for (int i=1; i <= 100; i++){
        if (i % 2 == 0){
            cout << i << endl;
        }
    }
    return 0; 
}

// // Print all the odd numbers from 1 to 100;
#include<iostream>
using namespace std;
int main (){
    for (int i=1; i <= 100; i++){
        if (i % 2 != 0){
            cout << i << endl;
        }
    }
    return 0; 
}

// another way to print even and odd number form 1 to 100;

#include<iostream>
using namespace std;
int main(){
    for (int i=2; i<= 100; i=i+2){
        cout << i << endl;
    }
}

// for odd numbersss;

#include<iostream>
using namespace std;
int main(){
    for (int i=1; i<= 100; i=i+2){
        cout << i << endl;
    }
}

//  wirte 19 ka table;

#include<iostream>
using namespace std;   
int main (){
    for (int i=19; i<= 190; i=i+19){
        cout << i << endl;
    }
}


// Print the table of "n". Here "n" is a integer which user will input;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter table no. : ";
    cin >> n;
    for (int i=n; i<=n*10; i=i+n){
        cout << i<< endl;
    }
}

// Display this AP 4, 7, 10, 13......... upto "n" terms;

//  Method : using extra variable and keeping 'i" ony for the iteration;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    int a = 4;
    for (int i=1; i<=n; i++){
        cout <<a <<" ";
        a = a+3;
    }
}


//  que: Display this GP - 1,2,4,8,16,32,... upto 'n' terms.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a = 1;
    for (int i=1; i<=n; i++){
        cout << a << " ";
        a = a * 2;
    }
}

//  Break 
//  wap to find the highest factor of a number 'n' (other than n itself)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int f = 1 ;
    for (int i = 1; i<= n/2; i++){
        if (n % i == 0) f = i;
    }
    cout << f; 
}

// //   now 100 to 1 in reverse order;

#include<iostream>
using namespace std;
int main(){
    for (int i=100; i>=1; i--){
        cout << i <<" ";
    }
    return 0;
}


// Composite or not;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i<=n/2; i++){
        if (n % i == 0){
            cout << "Composite Number" ;
            break;
    }
    }
}

// for finding prime and composite numbers;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = true;
    for (int i=2; i <= n/2; i++){
        if (n % i == 0){
            flag = false;
            break;
        }

    } 
    if (n==1){
        cout << "Neither Prime nor Composite " << endl;
    }
    
    else if (flag == true){
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Composite Number" << endl;
    }
    }

//  continue ;
//  skip the value of 5;
#include<iostream>
using namespace std;
int main (){
    for (int i=0; i<=10; i++){
        if (i== 5){
            continue;

        }
        cout << i << endl;
    }
}


// write a program print odd numbers form 1 to 100 using continue;

#include<iostream>
using namespace std;
int main(){
    for (int i=1; i<=100; i++){
        if (i % 2 == 0){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}

// while loop :
#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while ( i<=10){
        cout << "shut up!" << endl;
        i++;
    }
}

// Predict the output ;

#include<iostream>
using namespace std;
int main(){
    for (int i=1; i>0; i++)
        cout <<i<< " ";
    cout << 10 << " ";
}


// questions using operators;
// count digin of a given number;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number: " ;
    cin >> n;
    int count = 0;
    while (n!=0){
        n = n/10;
        count++;
    }
    cout << count;
}

//  write a program to print sum of digit of a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count = 0;
    while (n!=0){
        n = n/10;
        count++;
    }
    cout <<count ;

}
