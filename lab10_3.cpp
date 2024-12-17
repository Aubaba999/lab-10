#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int count =0;
    double sum2=0;
    float sum =0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        sum+=atof(textline.c_str());
        sum2+=pow(atof(textline.c_str()),2);
        count++;
    }
     double Mean =sum/count;
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<"\n";

    cout << "Standard deviation = "<<sqrt((sum2/count-pow(Mean,2)));
   
} 












//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
