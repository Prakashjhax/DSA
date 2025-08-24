#include<iostream>
using namespace std;
int main(){
    cout<< "*****"<<endl;
    cout<< "*****"<<endl;
    cout<< "*****"<<endl;
}

// rectangle banana hai kuch aise ki meri no. of rows jo hai variable hai 

// rows -> m, cols -> 5

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    int n;
    cout << "Enter number of cols : ";
    cin>>n;
    for (int  i=1; i<=m; i++){
        for (int i=1;i<=n; i++){
            cout<<" * ";
        }
        cout << endl;
    }
}


// print the given pattern 


#include<iostream>
using namespace std;
int main(){
    cout<<" * * * *"<<endl;
    cout<<" * * * * "<<endl;
    cout<<" * * * * "<<endl;
    cout<<" * * * * "<<endl;
}


#include<Iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout <<" p ";
        } 
        cout<<endl;
    }
    
}

#include<Iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Emter rows and cols: ";
    cin>> m >> n ;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout<<"$";
        }
        cout<<endl;
    }

}


// Print the given Pattern 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
} 




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
} 

alphabates ka square >>>

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<< (char)(j+64)<<" ";
        }
        cout<<endl;
    }
} 


// Home work 1;

//  write abcd in cols.. in 4times in row 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<< (char)(i+64)<<" ";

        }
        cout<<endl;
    }
}

Print A B C D IN small letters; oky 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<< (char)(j+96)<<" ";
        }
        cout<<endl;
    }
} 



// question :
// print the given Pattern
// star triangle 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin >>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<< endl;
    }
}

// Print the given pattern :
// Number Triangle 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}

//  Print the Given Pattern:
// Alphabet Triangle 

// A
// A B
// A B C
// A B C D


#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< (char)(j+64)<<" ";
        }
        cout<<endl;
    }
}


// Print the given pattern 

// 1
// AB 
// 123
// ABCD 
// 12345


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin>>n;
    for (int i=1; i<=n; i++){
        if(i%2 == 1){
            for(int j=1; j<=i; j++){
                cout<<j<<" ";
            }

        }else{
            for(int j=1; j<=i; j++){
                cout << (char)(j+64)<<" ";
            }
        }
        cout << endl;
    }
}


// Print the given pattern 
// *******
// ******
// *****
// ****
// ***
// **
// *


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. : ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<" * ";

        }
        cout<<endl;
    }
}


// if i ad j<=n karta hu toh wo square aata hai , agar hum  j<=i karte hain toh triagle aata hai , agar j<=n+1-i karte hain toh yha pe ulta triangle print hota hai oky 

// Printing the given pattern 
// 1
// 13
// 135
// 1357

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter yr Favourite no. : ";
    cin >>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}

// There is a another to way to wirte this okyh 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter yr no. : ";
    cin >>n;
    for (int i=1; i<=n; i++){
        int a = 1;
        for (int j=1; j<=i; j++){
            cout<<a<<" ";
            a += 2;
        }
        cout <<endl;
    }
}


// Floyd's Triangle

Print the given Pattern

1
23
456
78910

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<< "Enter number of rows : ";
    cin >> n;
    int a=1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

// 0 and 1 Triangle ;

// 1
// 01
// 101
// 0101

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows : ";
    cin>> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if ((i+j)%2 ==0) cout << 1<<" ";
            else cout<<0<<" ";
        }
        cout << endl;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int mid = n/2 + 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}


