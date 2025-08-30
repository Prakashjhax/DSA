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


