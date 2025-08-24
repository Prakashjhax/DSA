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