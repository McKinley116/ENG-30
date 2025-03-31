#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Variables
const int ROLLS = 36000;
const int SIZE = 11;

//Function Prototypes
void findTotalRolls(int dice1, int dice2, int arrayName[]);
void findActualChance(double arrayName[], double arrayName2[]); // actual probability = desired outcome/ probably outcome

int main()
{
    int diceSum[SIZE] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int diceRolls[SIZE] = {0};
    double expectedChance[SIZE] = {2.778, 5.556, 8.333, 11.111, 13.889, 16.667, 13.889, 11.111, 8.333, 5.556, 2.778};
    double actualChance[SIZE] = {0};
    double desired[SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0}; // total number of ways each sum is possbile
    int dice1, dice2;

    findTotalRolls(dice1, dice2, diceRolls);
    findActualChance(actualChance, desired);

    cout << setprecision(3) << fixed;
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
    srand(time(NULL));
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

void findActualChance(double arrayName[], double arrayName2[])
{
    //actual chance = desired outcome/ probable outcome
    for (int i = 0; i < SIZE ; i++)
    {
        arrayName[i] = (arrayName2[i] / 36) * 100;
    }
};
