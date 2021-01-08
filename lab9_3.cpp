#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){

        sum += atof(textline.c_str());
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    float Mean = sum/count;
    count = 0;
    sum = 0;

source.close();
source.open("score.txt");
    while (getline(source,textline)){

        sum += (atof(textline.c_str())-Mean)*(atof(textline.c_str())-Mean);
        count++;
        
    }
    cout << "Standard deviation = " << sqrt(sum/count);


return 0;
}