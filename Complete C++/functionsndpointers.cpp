This is a new chapter called functionsndpointers.cpp

#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning Dost"<<endl;
    cout<< "How are you"<< endl;

}
int main(){
    greet();
    cout<<"Hey " <<endl;
    greet();
}

#include<iostream>
using namespace std;

void usa(){
    cout<<"you are in USA"<<endl;

}
void india(){
    cout<< "you are in India"<<endl;

}
int main(){
    usa();
    cout<<"You are in main"<<endl;
    india();
} 

pass by value concept: .......


#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<<a+b;

}
int main(){
    sum(7,50);
}


Return type sum >>>>>>>>>

#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main (){
    cout<<sum(44,2);
}

library functions ke bare me baat karte hain 

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<sqrt(4000);
}

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    int a =1;
    for (int i=1; i<=n; i++){
        a *=i;
    }
    int b = 1;
    for (int i=1; i<=r; i++){
        b *= i;
    }
    int c =1;
    for (int i=1; i<=n-r; i++){
        c *=i;
    }
    cout<<a/(b*c);
}           


#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i=1; i<=x; i++){
        f *=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin >> n;
    int r;
    cout<< "Enter r : " ;
    cin>>r;
    int a = fact(n);
    int b = fact(r);
    int c = fact (n-r);
    cout<<a/(b*c);
}

pascals Traingle 

#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i=1; i<=x; i++){
        f *=i;
    }
    return f;
}
int ncr(int n, int r){
    // int a = fact(n);     
    // int b = fact(r);
    // int c = fact(n-r);
    // return a/(b*c);          
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin >>n;
    for (int i=0; i<=n; i++){
        for (int j=0; j<=i; j++){
            cout<<ncr(i,j) <<" ";
        }
        cout<<endl;
    }
}

 questions of swap >>>>>

#include<iostream>
using namespace std;
int main(){
    int x=2;
    int y=5;
    cout <<x<<" "<<y<<endl;
    int temp;
    temp = x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
}

swap two no. wihout using extra Variable:>>>>>>>>>

#include<iostream>
using namespace std;
int main(){
    int x =2;
    int y = 5;
    cout<<x<<" " <<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout <<x<<" " <<y<< endl;
}

Pass by value and Pass by reference ..>>>>>>>>>>

#include<iostream>
using namespace std;
void swap(int x, int y){
    int temp = x;
    x =y;
    y =temp;
}
int main (){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    // swap(x,y);
    int temp =x;
    x=y;
    y = temp;
    cout <<x<<" "<<y<<endl;
}


Pointers>>>>>>>>>>>>>

How to print address :::::::::


#include<iostream>
using namespace std;
int main (){
    int x =3;
    cout <<&x<<endl;
}

Pointers x ke address ko store karta hai oky ;>>>

#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout << &x <<endl;
    cout <<p<< endl;
}

Dereference Operator >>>>>>>>>>>


#include<iostream>
using namespace std;
int main (){
    int x = 3;
    int* p = &x;
    cout <<&x<<endl;
    cout <<p<<endl;
    cout<<*p<<endl;
    cout <<&p<< endl; 
}


#include<iostream>
using namespace std;
int main(){
    int x=12;
    int* ptr = &x;
    cout <<x<<endl;
    *ptr = 23;
    cout <<x<<endl;
}


 swap using pointers>>>>>>>>>>>>

#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main(){
    int x = 12;
    int y = 34;
    cout <<x<< " " <<y<<endl;
    swap (&x,&y);
    cout<<x<<" " <<y<<endl;
}
