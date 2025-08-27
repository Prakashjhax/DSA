//  function calling itself 

#include<iostream>
using namespace std;
void greet(){
    cout <<"Hey"<<endl;
    greet();
}
int main(){
    greet();
}

#include<iostream>
using namespace std;
void print (int n ){
    if(n==0) return;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(n);
}

// print 1 ot n;  method no 1;

#include<iostream>
using namespace std;
void print (int x, int n){
    if (x>n) return;
    cout<<x<<endl;
    print(x+1, n);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(1,n);
}

// Print 1 to n without extra parameters k;

#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n : " ;
    cin>>n;
    print(n);
}

// Print sum form 1 to n(return type )

#include<iostream>
using namespace std;
int sum(int n) {
    if (n==1) return 1;
    return n + sum(n-1);

}
int main(){
    int n;
    cout<<"Enter n : ";
    cin >>n;
    cout<<sum(n);
}

//  Make a function which calculates the factorial of n using recursion 

#include<iostream>
using namespace std;
int fact(int n){
    if (n==0 || n==1) return 1;
    return n*fact(n-1);

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<fact(n);
}

// fibonacci questions 

// write a function to calcualte the n th fibonacci number using recursion

#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fibo(n);
}

