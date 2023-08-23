//Miguel Gomez

// August 23, 23, 08-23-23 1033AM

// Arrays and Strings

#include <iostream>

using namespace std;

int main()
{
    // int array practice code
    int myLuckyNumbers [12];

    myLuckyNumbers[0] = 7;

    myLuckyNumbers[2] = 2849;

    myLuckyNumbers[3] = 44;

    myLuckyNumbers[11] = 108;

    // myluckynumbers[1] set from previous code line, initalized

     cout <<"\n\n The number 7 should show up " << myLuckyNumbers[0] << endl;

     cout <<"\n\n Value is large value not initialized " << myLuckyNumbers[2] << endl;

     cout <<"\n\n ?number not set up should show similar situation " << myLuckyNumbers[12] << endl;

     // For Loop practice code 1044AM
     // i++ increment operator - maintains value of what is there and ands 1 to it
     // i-- is decrement - subtracts
     // i initializes (first) to 0
     // after statement terminator , set as a if condition
     // <=12 (13) sets a out of bound array compared to using <12 (12)
     for (int i=0; i < 12; i++ ) {
        cout << "\n\n" << i << "" << myLuckyNumbers[i];

        cout << endl << endl;

        //Trying out a 2D array
        // 3 rows, 2 columns
        int my2darray [3][2];

        // hard-code values
        my2darray [0][0] = 11;
        my2darray [0][1] = 12;

        my2darray [1][0] = 21;
        my2darray [1][1] = 22;

        my2darray [2][0] = 31;
        my2darray [2][1] = 32;

           // Fill in 2D array with a nested for() loop

     int row0Column0 = 71;

      for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 2; j++){
                 my2darray[i][j] =  row0Column0++;
                }
               // subtract two
                row0Column0 = row0Column0 -2;
                    row0Column0 += 10;

        //nested for loop
        for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 2; j++){
                cout << my2darray[i][j] << " ";
     }
      cout << "\n\n" << endl;
        }
        cout << "\n\n\n"<< endl;


     }

      }


    return 0;
     }

