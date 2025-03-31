#include <iostream>
#include <iomanip>
using namespace std;

//Global Variables
const int ROLLS = 36000;
const int SIZE = 11;

//Function Prototypes
void findTotalRolls(int dice1, int dice2, int arrayName[]);

int main()
{
    int diceSum[SIZE] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int diceRolls[SIZE] = {0};
    int dice1, dice2;

    findTotalRolls(dice1, dice2, diceRolls);

    cout << setw(3) << "SUM" << setw(10) << "TOTAL"  << endl; 
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(3) << diceSum[i] << setw(10) << diceRolls[i] << endl;
        
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
