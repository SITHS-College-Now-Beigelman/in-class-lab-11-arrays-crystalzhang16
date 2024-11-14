//Crystal Zhang 
//11.12.2024 
//Lab 11

#include <iostream>  
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std; 

int main () 
{ 
    const int ARRAY_SIZE = 50; //makes it so that all arrays from now on have a size of 50


   	double alpha [ARRAY_SIZE]; //creates an array with the size of the const.
    {
        for (int i=1; i <= 25; i++) //continues this code 25 times (the amount of times i needs to be squared)
        {
          alpha [i] = pow(i, 2); //inputs the sqaure of the index into the corresponding index
          cout << alpha [i] << " "; //prints the value of above out

          if (i == 10) //since each line should have ten outputs each, this will mark the end of line one
          cout << endl; 

          if (i == 20) // end of line two 
          cout << endl; 

          //will let the code continue on a new line five more times 
        }

        for (int i = 26; i <= 50; i++) //continues this code 25 times (the amount of times i needs to be multiplied by 3)
        {
            alpha [i] = i*3; //inputs the index times 3 into the corresponding index
            cout << alpha [i] << " "; //prints the value of above

            //allows the code to run five times before this runs
            if (i == 30) //this will mark the end of line 3, with 5 numbers with the index squared and the other five is the index times 3
            cout << endl; 

            if (i == 40) //this will mark the end of line 4
            cout << endl; 

            //line 5, with the 50th number ends
        }
    }


    cout << endl;

   	double beta [ARRAY_SIZE];
    {

        int count = 0;
        double average = 0;

        srand(time(0));
        for (int i=1; i <=50; i++) 
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
    }


    return 0;
    }
