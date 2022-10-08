//This is a C++ code.. 
// This code is for finding power set of strings which is passed to function..
//I have also shown some sample Outputs at the end

#include <iostream>
#include <cmath>
using namespace std;

void printPowerSet(string s){
    
    int x=s.length();
    int total=pow(2,x)-1;
    for(int i=0;i<=total;i++){
        int tempi=i;
        for(int j=0;j<x;j++){
            if((tempi&1)){
                cout<<s[j];
            }
            tempi=tempi>>1;
        }
        cout<<endl;
    }
}
    
int main() {
	
	// string s = "abc";
    string s;
    cin>>s;
    printPowerSet(s);  
    
}

//This code is contributed by Rajat Dhull


//Sample test case
/*
//Input
Rajat

//Output
R
a
Ra
j
Rj
aj
Raj
a
Ra
aa
Raa
ja
Rja
aja
Raja
t
Rt
at
Rat
jt
Rjt
ajt
Rajt
at
Rat
aat
Raat
jat
Rjat
ajat
Rajat
*/
