 This is where i solve basic questions of C++
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world";
}




#include <stdio.h>

#include<stdlib.h>
 
void merge(int A[], int left, int right, int mid)

{

    int i,j,k;

    int l=mid-left+1;

    int r=right-mid;

    int leftarray[l],rightarray[r];

    for(i=0;i<l;i++)

    {

        leftarray[i]=A[left+i];

    }

    for(j=0;j<r;j++)

    {

        rightarray[j]=A[mid+1+j];

    }

    i=0;

    j=0;

    k=left;

    while(i<l && j<r)

    {

        if(leftarray[i]<=rightarray[j])

        {

            A[k]=leftarray[i];

            i++;

        }

        else

        {

            A[k]=rightarray[j];

            j++;

        }

        k++;

    }

    while(i<l)

    {

        A[k]=leftarray[i];

        i++;

        k++;

    }

    while(j<r)

    {

        A[k]=rightarray[j];

        j++;

        k++;

    }

}
 
 
void mergesort(int A[], int left, int right)

{

    if(left<right)

    {

        int mid=left+(right-left)/2;

        mergesort(A, left, mid);

        mergesort(A, mid+1, right);

        merge(A, left, right, mid);    

    }

}
 
int main()

{

    int i,n;

    printf("Enter size of array:");

    scanf("%d",&n);

    int A[n];

    printf("Enter the array");

    for(i=0;i<n;i++)

    {

        scanf("%d",&A[i]);

    }

    mergesort(A,0,n-1);

    printf("The sorted array is:\n");

    for(i=0;i<n;i++)

    {

        printf("%d",A[i]);

    }

    return 0;

}


Trying to solve some questions with c++ 


Print hello world 

#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world"<<endl;
    cout<<"Welcome Prakash kumar jha";
}

 
// make a calculator
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    c=a+b;
    cout<<"sum is "<<c;
}

// Print 1 to 100

#include<iostream>
using namespace std;
int main(){
    int i;
    for (int i=1; i<=100; i++){
        cout<<i<<endl;
    }
}


// Print a table of 2 to 10

#include<iostream>
using namespace std;
int main(){
    int i;
    for(int i=2; i<=20; i+=2){
        cout<<i<<endl;
    }
}


// inverse of the table 

#include<iostream>
using namespace std;
int main(){
    int i;
    for (int i=20; i>=2; i-=2 ){
        cout <<i<<endl;
    }
}


// how to check odd and even 

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter one number"<<endl;
    cin>>a;
    if (a%2==0){
        cout<<"Even Number"<<endl;

    }
    else{
        cout<<"Odd Number "<<endl;
    }
    
}


// how to print odd and even no. in 1 to 100

#include<iostream>
using namespace std;
int main(){
    int i;
    for(int i=2; i<=100; i+=2){
        cout<<i<<endl;
    }

    
}


// swapping of two no.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two number : "<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Swappint value is : ";
    cout<<a<<" "<<b;

}


// swapping of two numbers 

#include<iostream>
using namespace std;
int main(){
    int a=10, b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swapping value is : "<<a<<" "<<b;

}

// check the vowel in c++

#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a char : "<<endl;
    cin>>c;
    if (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' ||c=='o' || c=='O' || c=='u' || c=='U'  )
        cout<<"Vowel" <<endl;
    else{
        cout<<"constant";
    }
}


// Fabonacii Seires in c++

#include<iostream>
using namespace std;
int main(){
    int n1=0, n2=1, n3, i;
    cout<<n1<<n2;
    for(int i=1; i<=10; i++){
        n3 =n1 + n2;
        n1 = n2;
        n2=n3;
        cout<<n3;

    }     
}


// for user upto which you want to iterate 

#include<iostream>
using namespace std;
int main(){
    int n1=0, n2=1, n3,i,n;
    cout<<"Enter a number upto which you want to iterate "<<endl;
    cin>>n;
    cout<<n1<<n2;
    for(int i=1; i<=n; i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3;
    }
}



// Factorial in c++ Programming 

#include<iostream>
using namespace std;
int main(){
    int n,i,f;
    cout<<"Enter the number : ";
    cin>>n;
    f=n;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    cout<<"Factiorial number is : "<<f;

}


// how to check leap year 


#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Enter a year: ";
    cin >> y;

    if (y % 400 == 0) {
        cout << "It's a Leap Year" << endl;
    }
    else if (y % 100 == 0) {
        cout << "Not a Leap Year" << endl;
    }
    else if (y % 4 == 0) {
        cout << "It's a Leap Year" << endl;
    }
    else {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}


How to check prime number 

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number : ";
    cin>>n;
    for ( i=2; i<n; i++){
        if(n%i==0){
             cout<<"Not a Prime no."<<endl;
             break;
        }
    }
    if (i==n){
        cout<<"Number is Prime"<< endl;
    }
}


// print prime number till nth term

#include<iostream>
using namespace std;
int main(){
    int n,i,k;
    cout<<"enter nth number: ";
    cin>>n;
    for(int i=2; i<n; i++){
        for (k=2; k<i; k++){
            if (i%k==0)
            {
                cout<<"";
                break;
            }
        }
        if(k==i)
        {
            cout<<k;
        }
    }
}

// sum of digit of a number 

#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"Enter a number "<<endl;
    cin>>n;
    while (n>0)
    {
        r=n%10;
        sum =sum+r;
        n=n/10;
    }
    cout<<"sum is : "<<sum;
}


//  reverse of a Number

#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"Enter a number " <<endl;
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    cout<<"Reverse is : "<<sum;
}


