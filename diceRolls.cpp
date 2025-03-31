#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Variables
const int ROLLS = 36000;
const int SIZE = 11;

//Function Prototypes
void findTotalRolls(int dice1, int dice2, int arrayName[]);
void findExpectedChance(double arrayName[], int arrayName2[]); // expected probability = desired outcome/ probably outcome
void findActualChance(double arrayName[], int arrayName2[]);

int main()
{
    int diceSum[SIZE] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int diceRolls[SIZE] = {0};
    double expectedChance[SIZE] = {0.0};
    double actualChance[SIZE] = {0.0};
    int possible[SIZE] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1}; // total number of ways each sum is possbile
    int dice1, dice2;

    cout << setprecision(3) << fixed;

    findTotalRolls(dice1, dice2, diceRolls);
    findExpectedChance(expectedChance, possible);
    findActualChance(actualChance, diceRolls);

    cout << setw(3) << "SUM" << setw(10) << "TOTAL" << setw(10) << "EXPECTED" << setw(10) << "ACTUAL" << endl; 
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(3) << diceSum[i] << setw(10) << diceRolls[i] << setw(10) << expectedChance[i] << setw(10) << actualChance[i] << endl;
        
    }
   
    return 0; 
}

//Functions
void findTotalRolls(int dice1, int dice2, int arrayName[])
{
    srand(time(NULL)); // sets seed to users date and time to always randomize the numbers. 
    int sum = 0;
    for (int i = 0; i <= ROLLS; i ++)
    {
        int dice1 = (rand() % 6) + 1 ;
        int dice2 = (rand() % 6) + 1 ;
        sum = dice1 + dice2;

        switch (sum)
        {
        case 2:
            arrayName[0]++;
            break;

        case 3:
            arrayName[1]++;
            break;

        case 4:
            arrayName[2]++;
            break;

        case 5:
            arrayName[3]++;
            break;

        case 6:
            arrayName[4]++;
            break;

        case 7:
            arrayName[5]++;
            break;

        case 8:
            arrayName[6]++;
            break;

        case 9:
            arrayName[7]++;
            break;

        case 10:
            arrayName[8]++;
            break;

        case 11:
            arrayName[9]++;
            break;

        case 12:
            arrayName[10]++;
            break;
        
        default:
            break;
        }
    }
};

void findExpectedChance(double arrayName[], int arrayName2[])
{
    //expected chance = desired outcome/ probable outcome
    for (int i = 0; i < SIZE ; i++)
    {
        arrayName[i] = (static_cast<double>(arrayName2[i]) / 36) * 100; // casted as a double to keep dataq types consistant 
    }
};

void findActualChance(double arrayName[], int arrayName2[])
{
    for (int i = 0; i < SIZE ; i++)
    {
        // had to use staic cast since I wanted to use two int's and store them as a double. 
        //division is performed as floating-point division. 
        //This can be done by explicitly casting one of the operands to a double.
        arrayName[i] = (static_cast<double>(arrayName2[i]) / ROLLS) * 100 ; 

        //arrayName[i] = (arrayName2[i] / ROLLS) * 100 ; originally wasnt working so output was 0.000
    }
};
