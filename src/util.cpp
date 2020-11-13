#include "util.h"

using namespace std;

string randomElement(vector<string> vect)
{
    srand(time(NULL));
    int random = rand() % 5;
    return vect.at(random);
}

double sum(vector<double> vect)
{
    double sum = 0;
    for(int i = 0;i<vect.size();i++)
    {
        sum+=vect.at(i);
    }
    return sum;
}

double avg(vector<double> vect)
{
    double avg = 0;
    for(int i = 0;i<vect.size();i++)
    {
        avg+=vect.at(i);
    }
    avg/=vect.size();
    return avg;
}

double lowest(vector<double> vect)
{
    double lowest = vect.at(0);
    for(int i = 0;i<vect.size();i++)
    {
        if(lowest>vect.at(i))
        {
            lowest=vect.at(i);
        }
    }
    return lowest;
}

string camelCase(string str)
{
    for(int i = 1;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            str[i+1] = toupper(str[i+1]);
        }
    }
        for(int i = 1;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            for(int j = i;j<str.length(); j++)
            {
                str[j] = str[j+1];
            }
        }
    }
    return str;
}