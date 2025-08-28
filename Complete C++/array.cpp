// syntex array 
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter array elements : ";
    for (int i=0; i<=4; i++){
        cin>>arr[i];

    }
    for (int i=0 ; i<=4; i++){
        cout<<arr[i]<<" ";
    }
}


// Declaration and realisation 

#include<iostream>
using namespace std;
int main(){
    int arr[5]= {4,1,3,7,3};
    arr[0] =0;
    for (int i=0; i<=4; i++ ){
        cout<<arr[i]<<" ";
    }
}


// this is reverse order 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,1,3,7,3};
    for (int i=4; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

questions 
calculate the sum of all the element in the given array.

#include<iostream>
using namespace std;
int main(){
    int arr[] ={12,6,7,34,9,23};
    int sum =0;
    for(int i=0; i<=5;i++){
        sum += arr[i];
    }
    cout<<sum;
   
}

// que2; calculate the product of all the elements in the given arrary.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long product =1;
    for (int i=0; i<n; i++){
        product *= arr[i];

    }
    cout<<"Product of all elements : "<< product;
    return 0;
}


question : find the maximum value out of al the elements in the arrya;


#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 6,7,34,9,23,2,8,3,6,11};
    int n=sizeof(arr)/4;
    int mx = arr[0];
    for (int i=1; i<=n; i++){
        if (arr[i]>mx) mx = arr[i];
    }
    cout<<mx;
}


que: this for minimum element

#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,33,6,7,34,9,456,66,77,66};
    int n=sizeof(arr)/4;
    int mn = arr[0];
    for (int i=1; i<=n; i++){
        if (arr[i]<mn) mn = arr[i];

    }
    cout<<mn;

}

Reverse order questions

write a program to copy the conternts of one array into another int he reverse order

#include<iostream>
using namespace std;
int main(){
    int a[] = {12,33,6,7,34,9,456,66};
    int n=sizeof(a)/4;
    int b[n];
    for (int i=0; i<n; i++){
        int j=n-1-i;
        b[i] = a[j];
    }
    for (int i=0; i<=n; i++){
        cout<<b[i]<<" ";
    }

}

//  sring 

#include<iostream>
using namespace std;
int main(){
    string s = "Prakash Kumar";
    cout<<s<<endl;
    s[0]= 'M';
    s[2]= 'd';
    cout<<s<<endl;
}


//  Input a string and count all the vowels in the given string 

#include<iostream>
using namespace std;
int main(){
    string s ="Prakash jha";
    cout <<s.length();
}

                            

                                            