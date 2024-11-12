//Crystal Zhang 
//11.12.2024 
//Lab 11

#include <iostream>  
#include <cstdlib>
#include <ctime>

using namespace std; 

int main () 
{
    const int ARRAY_SIZE = 50;


   	double alpha [ARRAY_SIZE];

    for (int i = 1; i <= 50; i++)
    {
        if (i>=1 && i<=10)
        {
            alpha [i] = i*i; 
            cout << alpha [i] << " ";
        }

    cout << endl;
        if (i>= 11 && i <= 20)
    {
        alpha [i] = i*i; 
        cout << alpha [i] << " ";
    }

    cout << endl;
        if (i>=21 && i <= 25)
    {
        alpha [i] = i*i; 
        cout << alpha [i] << " ";
    }

        if (i >= 26 && i <= 30)
    {
        alpha [i] = i*3; 
        cout << alpha [i] << " ";
    }

    cout << endl;
        if (i >= 31 && i <= 40)
    {
        alpha [i] = i*3; 
        cout << alpha [i] << " ";
    }


    cout << endl;
    for (int i = 41; i <= 50; i++)
    {
        alpha [i] = i*3; 
        cout << alpha [i] << " ";
    }



    cout << endl;

   	double beta [ARRAY_SIZE];

    int count = 0;
    double average = 0;

    for (int i=0; i <=50; i++) 
    {
        beta [i] = rand() % 100;
        cout << beta [i] << " ";;

        average = beta [i] + average;

      if (beta [i] == 100) 
        int count = count + 1;

    }

    cout << endl; 
    cout << "The average of the numbers that were randomly generated is: " << average/50 << endl;
    cout << "The number of times that the random number generated is 100 is: " << count << endl;


    return 0;

}