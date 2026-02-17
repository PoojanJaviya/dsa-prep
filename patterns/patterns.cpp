#include<iostream>
using namespace std;

// Pattern 1: 
// * * *
// * * *
// * * *
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2:
// *
// * *
// * * *
void pattern2(int n){
    for(int i = 0;i<n;i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 3:
// 1
// 1 2
// 1 2 3
void pattern3(int n){
    for(int i = 0;i<n;i++){
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 4:
// 1
// 2 2
// 3 3 3
void pattern4(int n){
    for(int i = 1;i<n+1;i++){
        for(int j=1; j<=i+1; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

// Pattern 5:
// * * *
// * *
// *
void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<< "* ";
        }
        cout << endl;
    }
}

// Pattern 6:
// 1 2 3
// 1 2
// 1
void pattern6(int n){
    for(int i=0; i<n; i++){
       for(int j=1; j<=n-i;j++){
        cout << j << " ";
       }
       cout << endl;
    }
}

// Pattern 7:
//   *  
//  *** 
// *****
void pattern7(int n){
    for(int i = 0;i<n;i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }

        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 8:
// *****
//  *** 
//   *  
void pattern8(int n){
    for(int i = 0;i<n;i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }

        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }

        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 9:
//    *
//   ***
//  *****
//  *****
//   ***
//    *
void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

// Pattern 10:
// *
// **
// ***
// **
// *
void pattern10(int n){
    for(int i = 1;i<=2*n-1;i++){
        int starts = i;
        if(i>n) starts = 2*n - i;
        for(int j=0; j<starts; j++){
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 11:
// 1
// 0 1
// 1 0 1
void pattern11(int n){
    int start = 1;
    for(int i = 0;i<n;i++){
        if (i%2==0) start = 1;
        else start = 0; 
        for(int j=0; j<=i; j++){
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

// Pattern 12:
// 1      1
// 12    21
// 123  321
// 12344321
void pattern12(int n){
    for(int i = 0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }

        for(int j=0; j<2*n - 2*(i+1); j++){
            cout << " ";
        }

        for(int j=i+1;j>0;j--){
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 13:
// 1
// 2 3
// 4 5 6
void pattern13(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

// Pattern 14:
// A
// AB 
// ABC
void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<='A' + i; ch++){
            cout << ch;
        }
        cout<<endl;
    }
}

// Pattern 15:
// ABC
// AB
// A
void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<'A'+n-i; ch++){
            cout << ch;
        }
        cout<<endl;
    }
}

// Pattern 16:
// A
// BB 
// CCC 
void pattern16(int n){ 
    char ch = 'A';
    for(int i=0; i<n; i++){  
        for(int j=0; j<=i; j++){
            cout << ch;
        }
        ch++;
        cout<<endl;
    }
}

// Pattern 17:
//   A
//  ABA 
// ABCBA
void pattern17(int n){
    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }

        // increasing chars
        char ch = 'A';
        for(int j=0;j<i+1;j++){
            cout << ch;
            ch++;
        }

        // decreasing chars
        ch -= 2;
        for(int j=0;j<i;j++){
            cout << ch;
            ch--;
        }

        cout << endl;
    }
}

// Patten 18:
// C
// BC
// ABC 
void pattern18(int n){
    for(int i=0;i<n;i++){
        char ch = 'A' + n - i - 1;
        for(int j=0;j<=i;j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// Pattern 19:
// ******
// **  **
// *    *
// *    *
// **  **
// ******
void pattern19(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++) cout<<"*";
        for(int j=0;j<2*i;j++) cout<<" ";
        for(int j=0;j<n-i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++) cout<<"*";
        for(int j=0;j<2*(n-i);j++) cout<<" ";
        for(int j=0;j<i;j++) cout<<"*";
        cout<<endl;
    }
}

// Pattern 20:
// *    *
// **  **
// ******
// **  **
// *    *
void pattern20(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++) cout<<"*";
        for(int j=0;j<2*(n-i);j++) cout<<" ";
        for(int j=0;j<i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++) cout<<"*";
        for(int j=0;j<2*(n-i);j++) cout<<" ";
        for(int j=0;j<i;j++) cout<<"*";
        cout<<endl;
    }
}

// Pattern 21:
// ***
// * *
// ***
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

// Pattern 22:
// 33333
// 32223
// 32123
// 32223
// 33333
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int bottom = (2*n-2)-i;
            int right = (2*n-2)-j;
            cout << (n - min(min(top,bottom), min(left,right))) << " ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern22(n);
    return 0;
}