#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
#include<string>
using namespace std;

int main(){
   int num  =0 ;
   double mil ,total,bsqrt,bsqrt2,poi,asqrt;
    ifstream source ;
    source.open("score.txt");
    string text ;
    while(getline(source,text)) 
    {
    total += stof(text);
    bsqrt += pow(stof(text),2);
    num++;
    
    }
    mil=total/num;
    bsqrt2=bsqrt/num;
    poi=bsqrt2-pow(mil,2);
    asqrt=sqrt(poi);
    
    
    
    cout << "Number of data = "<<num<<"\n";
    cout << "Mean = "<< setprecision(3)<<mil<<"\n";
    cout << "Standard deviation = "<< setprecision(3)<<asqrt<<"\n";
}
