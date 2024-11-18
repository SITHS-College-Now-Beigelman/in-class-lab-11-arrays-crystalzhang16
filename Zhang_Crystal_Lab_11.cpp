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


    cout << "Array where the index is squared and multiplied by three" << endl; //defines which part of the assignment this is
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        if (i < 25) //continues this code 25 times (the amount of times i needs to be squared)
        {
          alpha [i] = pow(i, 2); //inputs the sqaure of the index into the corresponding index
          cout << alpha [i] << " "; //prints the value of above out
        }

        else //continues this code 25 times (the amount of times i needs to be multiplied by 3)
        {
            alpha [i] = i*3; //inputs the index times 3 into the corresponding index
            cout << alpha [i] << " "; //prints the value of above
        }
            if ((i + 1) % 10 == 0) 
            //makes it so that the array is printed in rows of 10/if the current index plus one divided by 10 has a remainder of zero, that means that ten values have already been printed
            cout << endl; //if above is true, then do this
    }
    


    cout << " " << endl; //made for spacing purposes
    cout << " " << endl;

    double beta [ARRAY_SIZE]; //creates an array named beta with the size of the const.
    

        int count = 0; //counter to count how many 100s
        double average = 0; //value to store the total of the array and then used to then divide it 

    cout << "Array where the index is randomized " << endl; //defined which part of the assignemnt this is 
    
        srand(time(0)); //make sure each number is randomized
        for (int i = 0; i < ARRAY_SIZE; i++) //continues on for 50
        {

            beta [i] = rand() % 100;
            cout << beta [i] << " ";; //couts the random number

            average = beta [i] + average; //adds up all the values that are randomized

        if (beta [i] == 100) //makes sure to add one to the count if there is a 100
            count = count + 1;

        if ((i + 1) % 10 == 0) 
            //makes it so that the array is printed in rows of 10/if the current index plus one divided by 10 has a remainder of zero, that means that ten values have already been printed
                cout << endl; //print if true
        }

        cout << endl; 
        cout << "The average of the numbers that were randomly generated is: " << average/50 << endl; //defines what the average is
        cout << "The number of times that the random number generated is 100 is: " << count << endl; //defines how many 100s there were
    


    /* 
    Array where the index is squared and multiplied by three
    0 1 4 9 16 25 36 49 64 81 
    100 121 144 169 196 225 256 289 324 361 
    400 441 484 529 576 75 78 81 84 87 
    90 93 96 99 102 105 108 111 114 117 
    120 123 126 129 132 135 138 141 144 147 


    Array where the index is randomized 
    95 7 21 29 63 82 45 43 64 53 
    96 68 25 80 9 57 55 23 19 56 
    20 1 58 17 57 65 93 35 1 86 
    30 48 45 3 77 8 86 74 51 2 
    79 47 23 5 79 32 14 34 8 34 

    The average of the numbers that were randomly generated is: 44.04
    The number of times that the random number generated is 100 is: 0
    */
    return 0;
}
