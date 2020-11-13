#include <iostream>
#include <vector>
#include <string>
#include "util.h"


using namespace std;

int main()
{
    //String fucntions
    vector<string> vect{"dog","cat","mouse","monkey","snake"};
    cout<<"Dumping Vector of 5 String Elements"<<endl;
    for(int i = 0;i<vect.size();i++)
    {
        cout<<vect.at(i)<<" ";
    }
    cout<<endl;
    cout<<"RandomElement ";
    cout << randomElement(vect) << endl;
    //List of Doubles and Functions
    vector<double> vectDoub{1.0,25.3,14.7,39.6,21.4};
    cout<<"Dumping Vector of 5 Double Elements"<<endl;
    for(int i = 0;i<vectDoub.size();i++)
    {
        cout<<vectDoub.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Sum: "<<sum(vectDoub)<<endl;
    cout<<"Average: "<<avg(vectDoub)<<endl;
    cout<<"Lowest: "<<lowest(vectDoub)<<endl;
    //Camel Case Functions
    string str = "a little bird with a yellow bill";
    str = camelCase(str);
    cout<<str<<endl;
    return EXIT_SUCCESS;
}