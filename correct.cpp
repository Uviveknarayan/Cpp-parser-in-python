#include<bits/stdc++.h>
using namespace std;

void print(string s){
    cout<<"String is: "<<s<<endl;
}

int add(int a, int b){
    if(true){
        int c = a+b;
        return c;
    }else{
        int d = a+b;
        return a+b;
    }
}
int main(){

    int t = 1;
    cin>>t;
    int a = 5,b = 4,c = a+b;
    float f1 = 4.20,f2=7.86;
    char ch1 = 'a',ch2;

    // if else checking
    if(ch1==ch2){
        /*
            True if both char match
        */
       double d1 = 4.0;

    }else{
        if(f1+1==f2){
            // True if condition satisfy
        }
    }

    // for loop checking
    int i = 0;
    for(;i<a+c; ++i){
        b+=-(2*i+(a/2+c)+(12+c/3)/f1);  // Expression checking

        string s1 = "Hello";
        if(s1=="Hello"){
            int d = 0;
            d+=c;
            print(s1);
        }else{
            b*=c;
        }
    }
    //while loop checking
    while(t -= 1){
        f1 -= 4*f2+a-c;
    }

    /* do while checking with string and function calls*/
    do{
        string s = "I am string checking code.";
        print(s);
    }while(true);

    char c = 'a';
    char p = c++;

    return 0;
}