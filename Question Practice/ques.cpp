#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world ";
}


//  calculator program 

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter two numvbers "<<endl;
    cin>>a>>b;
    c=a*b;
    cout<<"sum is"<<c;

}



// print integer form 1 to 100; 


#include<iostream>
using namespace std;
int main(){
    int i;
    for (int i=1; i<=100; i++)
    {
        cout<<i<<endl;
    }
}


// print the table of 2,3,4,5,6,7,8,9,20

#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=2; i<=20; i+=2){
        cout<<i<<endl;

    }
}

// reverse of the table 

#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=100; i>=10; i-=10){
        cout<<i<<endl;

    }
}


//  how to check odd and even 


#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if (a%2==0){
        cout<<"Enven Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }
}

// print odd no. from 1 to 100;
#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=1; i<=100; i+=2)
    {
        cout<<i<<endl;
    }
}


// Print 2 to 10 table in one console 
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 2; j <= 10; j++) {
            cout << j << " x " << i << " = " << j*i << "\t";
        }
        cout << "\n";
    }
    return 0;
}


// swapping of two number

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}


// swapping of two numbers;

#include<iostream>
using namespace std;
int main(){
    int a=10, b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swapping value is : "<<a<<" " <<b;
}


// how to check vowel in c++

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "It is a vowel." << endl;
    } else {
        cout << "It is not a vowel." << endl;
    }

    return 0;
}


// Fibonacci Series


#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    return 0;
}


// Factorial in c++ Programming 

#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;  

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;  
    }

    cout << "Factorial of " << n << " = " << fact << endl;
    return 0;
}


// how to check year year in c++ 

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}



//  how to check prime no. in c++

#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number.";
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << n << " is not a prime number.";
            return 0;
        }
    }

    cout << n << " is a prime number.";
    return 0;
}


// Print prime number form 1 to 100:


#include <iostream>
using namespace std;

int main() {
    int i, j;
    for (i = 2; i <= 100; i++) {
        bool isPrime = true;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
    return 0;
}


//  sum of digit of a number 

#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    cout<<"sum is " <<sum;
}


// sum of a digit of a number;

#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    cout<<"Reverse is : "<<sum;
}


// palindrome  number in c++


#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,t;
    cout<<"Enter a number"<<endl;
    cin>>n;
    t=n;
    while (n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;    
    }
    if (t==sum)
    {
        cout<<"Palindrome number"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome number"<<endl;
    }
}

// Armstrong number in c++


#include<iostream>
using namespace std;
int main(){
    int n,r, sum=0,t;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(t==sum)
    {
        cout<<"Armstrong number"<<endl;

    }
    else{
        cout<<"not a armstrong number"<<endl;
    }

}


//  how to print hello world without semicolon


#include<iostream>
using namespace std;
int main(){
    if (cout<<"Hello world")
    {

    }
}

//  Hcf program in c++

#include<iostream>
using namespace std;
int main(){
    int a,b,hcf,r;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    while(true){
        hcf=b;
        r=a%b;
        a=b;
        b=r;
        if (b==0){
            break;
        }
    }
    cout<<"Hcf is "<<hcf;
}


// Lcm Program in c++

#include<iostream>
using namespace std;
int main(){
    int a,b,lcm,r;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    while (true)
    {
        lcm=a;
        r=a%b;
        if(r==0)
        {
            break;
        }
        a=a*2;
    }
    cout<<"LCM is "<<lcm<<endl;


}


// HCF and LCM Together 

#include<iostream>
using namespace std;
int main(){
    int a,b,lcm,hcf,r,x,y;
    cout<<"Enter two Number : ";
    cin>>a>>b;
    x=a;
    y=b;
    while(true){
        lcm=a;
        r=a%b;
        if(r==0){
            break;
        }
        a=a*2;
    }
    hcf=x*y/lcm;
    cout<<"LCM is : "<<lcm<<endl;
    cout<<"HCF is : "<<hcf;

}


// star pattern 1;


#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++)
        {
            if (j<=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

// star Pattern 2;


#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if (j<=6-i){
                cout<<"*";

            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}



// star pattern 3
#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j>=i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
}

// star pattern 4;

#include<iostream>
using namespace std;
int main(){
    int i,j;
    for (i=1; i<=5; i++ )
    {
        for(j=1; j<=5; j++){
            if (j>=6-i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

// Piramid star pattern

#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=2; j<=9; j++)
        {
            if(j>=6-i && j<=4+i){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        } 
        cout<<"\n";
    }
}

// star pattern 6

#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=i && j<=10-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";
    }
}



#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=10-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";
    }
}

