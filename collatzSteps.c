#include <stdio.h>

long collatzCount(long long);

int main(void)
{
    long long activeNum; // number we're checking
    long numSteps;       // number of steps it took to get to 1
    long prevMaxSteps;   // previous max number

    activeNum = 1;
    prevMaxSteps = 0;
    do
    {
        numSteps = collatzCount(activeNum);
        if (numSteps > prevMaxSteps)
        {
            printf("\n%lld: %ld steps get to 1", activeNum, prevMaxSteps = numSteps);
        }
        activeNum++;
    } while (numSteps >= 0);

    return 0;
}

long collatzCount(long long input)
{
    long long currentNum;
    long steps;

    currentNum = input;
    steps = 0;
    while (currentNum > 1)
    {
        currentNum = currentNum % 2 ? 3 * currentNum + 1 : currentNum / 2;
        steps++;
    }

    if (currentNum < 0 || steps < 0)
    {
        steps = -1;
    }

    return steps;
}