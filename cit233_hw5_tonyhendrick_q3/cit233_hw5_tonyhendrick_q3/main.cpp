//
//  main.cpp
//  cit233_hw5_tony_hendrick_q3
//
//  @author Tony Hendrick
//  @version 3/16/15
//
//  This program manipulates dynamic one-dimensional and a two-dimensional array in
//  a variety of different ways.
//
//


#include <iostream>

using namespace std;

const int ALPHA_SIZE = 20;
const int BETA_SIZE = 20;
const int GAMMA_SIZE = 4;
const int DELTA_SIZE = 10;
const int INSTOCK_ROWS = 10;
const int INSTOCK_COLS = 4;

int menu(void);
void setZero(int *array, int size);
int *inputArray(int size);
void doubleArray(const int *alpha, int *beta);
void copyGamma(const int *gamma, int **inStock);
void copyAlphaBeta(const int *alpha, const int *beta, int **inStock);
void printArray(const int *array, int size);
void print2dArray(int **array, int size);
void setInStock(int **inStock, const int *delta);
int arraySelectionMenu(void);

int main(int argc, const char * argv[]) {
    
    //Pointer variables
    int *alpha;
    int *beta;
    int *gamma;
    int *delta;
    int **inStock;
    
    //Int variable
    int menuSelection = 0;
    int arraySelection = 0;
    
    //Set pointers to arrays (initializes beta and alpha for testing purposes if not set)
    alpha = new int[ALPHA_SIZE]{1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    beta = new int[BETA_SIZE]{2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40};
    gamma = new int[GAMMA_SIZE]{11, 13, 15, 17};
    delta = new int[DELTA_SIZE]{3, 5, 2, 6, 10, 9, 7, 11, 1, 8};
    inStock = new int*[INSTOCK_ROWS];
    
    //sets columns in inStock
    for( int rows = 0; rows < INSTOCK_ROWS; rows++ )
    {
        inStock[rows] = new int[INSTOCK_COLS];
    }
    
    
    //While loop  ending when menu() is 7
    while( menuSelection != 7 )
    {
        //Switch based on menu()
        switch (menuSelection = menu())
        {
            //Calls setZero method on gamma
            case 1:
                cout << "Array before calling setZero...\n";
                printArray(gamma, GAMMA_SIZE);
                cout << endl;
                
                setZero(gamma, GAMMA_SIZE);
                
                cout << "Array after calling setZero...\n";
                printArray(gamma, 4);
                cout << endl;
                break;
               
            //Calls inputArray method on gamma
            case 2:
                
                cout << "Choose which array to input: \n";
                arraySelection = arraySelectionMenu();
                
                //Switch based on arraySelectionMenu returned value
                switch( arraySelection )
                {
                    case 1:
                        cout << "Inputting alpha array...\n";
                        alpha = inputArray(ALPHA_SIZE);
                        printArray(alpha, ALPHA_SIZE);
                        cout << endl;
                        break;
                        
                    case 2:
                        cout << "Inputting beta array...\n";
                        beta = inputArray(BETA_SIZE);
                        printArray(beta, BETA_SIZE);
                        cout << endl;
                        break;
                        
                    case 3:
                        cout << "Inputting delta array...\n";
                        delta = inputArray(DELTA_SIZE);
                        printArray(delta, DELTA_SIZE);
                        cout << endl;
                        break;
                        
                    case 4:
                        cout << "Inputting gamma array...\n";
                        cout << "Gamma was previously  numbers 11, 13, 15, 17\n";
                        gamma = inputArray(GAMMA_SIZE);
                        printArray(gamma, GAMMA_SIZE);
                        cout << endl;
                        break;
                    
                    default:
                        cout << "Inputting alpha array...\n";
                        alpha = inputArray(ALPHA_SIZE);
                        printArray(alpha, ALPHA_SIZE);
                        cout << endl;
                        break;
                        
                }
                break;
            
            //Calls doubleArray method
            case 3:
                doubleArray(alpha, beta);
                
                printArray(beta, BETA_SIZE);
                cout << endl;
                break;
                
            //Calls copyGamma method
            case 4:
                copyGamma(gamma, inStock);
                
                print2dArray(inStock, INSTOCK_ROWS);
                break;
               
            //Calls copyAlphaBeta method
            case 5:
                copyAlphaBeta(alpha, beta, inStock);
                
                print2dArray(inStock, INSTOCK_ROWS);
                break;
               
            //Calls setInStock method
            case 6:
                setInStock( inStock, delta);
                
                print2dArray(inStock, INSTOCK_ROWS);
                break;
             
            //Does nothing to exit
            case 7:
                break;
               
            //Prints error message
            default:
                cout << "Envalid selection...\n";
                break;
        }
    }
    
    //Ends program
    return 0;
}//end main

//Method to print out the menu
int menu(void)
{
    //declares int variable
    int selection = 0;
    
    //Prints out the menu
    cout << "------------------------\n";
    cout << "||Using Pointer Arrays||\n";
    cout << "------------------------\n";
    
    cout << "1) Test setZero method\n";
    cout << "2) Test inputArray method\n";
    cout << "3) Test doubleArray method\n";
    cout << "4) Test copyGamma method\n";
    cout << "5) Test copyAlphaBeta method\n";
    cout << "6) Test setInStock method\n";
    cout << "7) Exit\n";
    
    //Gets the selection
    cout << "Enter selection: ";
    cin >> selection;
    
    //Returns the selection
    return selection;
}//end menu

//Method to set a one-dimensional array to zero
void setZero(int *array, int size)
{
    //Sets all the elements of the array to zero
    for( int i = 0; i < size; i++ )
    {
        array[i] = 0;
    }
}//end setZero

//Method to input a one-dimensional array
int* inputArray(int size)
{
    //Declares int pointer
    int *alpha;
    
    //Declares dynamic array
    alpha = new int[size];
    
    //Prints how many numbers to enter
    cout << "Enter " << size << " numbers..." << '\n';
    
    //Gets the number entered
    for( int i = 0; i < size; i++ )
    {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> alpha[i];
    }
    
    return alpha;
}//end inputArray

//Method to double set beta to double of alpha
void doubleArray(const int *alpha, int *beta)
{
    //sets beta to to times alpha
    for( int i = 0; i < 20; i++ )
    {
        beta[i] = alpha[i] * 2;
    }

}//end doubleArray

//Method to set the first row of inStock to gamma and the remaining three times the previous
void copyGamma(const int *gamma, int **inStock)
{
    //sets the first row to gamma
    for( int i = 0; i < 4; i++ )
    {
        inStock[0][i] = gamma[i];
    }
    
    //sets the other rows to three times the previous
    for( int i = 1; i < 10; i++ )
    {
        for( int j = 0; j < 4; j++ )
        {
            inStock[i][j] = (inStock[i - 1][j]) * 3;
        }
    }
}//end copyGamma

//Method to store alpha in the first five rows of inStock and last five to beta
void copyAlphaBeta(const int *alpha, const int *beta, int **inStock)
{
    //Sets the first five rows to alpha
    for( int i = 0; i < 5; i++ )
    {
        for( int j = 0; j < 4; j++ )
        {
            inStock[i][j] = *alpha;
            alpha++;
        }
    }
    
    //Sets the last five rows to beta
    for( int i = 5; i < 10; i++ )
    {
        for( int j = 0; j < 4; j++ )
        {
            inStock[i][j] = *beta;
            beta++;
        }
    }
}//end copyAlphaBeta

//Method to print one-dimensional array
void printArray(const int *array, int size)
{
    //Prints array with a new line every 15 elements
    for( int i = 0; i < size; i++ )
    {
        cout << array[i] << ' ';
        if((i + 1) % 15 == 0)
        {
            cout << '\n';
        }
    }
}//end printArray

//Method to print a two-dimensional array
void print2dArray(int **array, int size)
{
    //Prints 2dArray
    for( int i = 0; i < INSTOCK_ROWS; i++ )
    {
        for( int j = 0; j < INSTOCK_COLS; j++ )
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}//end print2dArray

//Method to allow the user to enter the first row of inStock and sets the rest
void setInStock(int **inStock, const int *delta)
{
    //declares const int
    const int *deltaMemory;
    
    //sets deltaMemory to delta
    deltaMemory = delta;
    
    //For loop to go through inStock
    for( int i = 0; i < 10; i++ )
    {
        //Gets delta
        delta = deltaMemory;
        
        for( int j = 0; j < 4; j++ )
        {
            //Checks if on the first row of inStock
            if( i == 0 )
            {
                cout << "Enter number " << (j + 1) << " of inStock: ";
                cin >> inStock[i][j];
            }
            else
            {
                //sets the row to two times the previous row minus delta
                inStock[i][j] = (inStock[i - 1][j] * 2) - *delta;
            }
            //Moves through delta
            delta++;
        }
    }
}//end setInStock

//Method to print menu for array selection
int arraySelectionMenu(void)
{
    int arraySelection = 0;
    
    cout << "1) Input alpha\n";
    cout << "2) Input beta\n";
    cout << "3) Input delta\n";
    cout << "4) Input gamma\n";
    cin >> arraySelection;
    
    return arraySelection;
}//end arraySelectionMenu