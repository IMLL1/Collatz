#include <stdio.h>

long long collatzGrow(long long);

int main(void)
{
    long long activeNum; // number we're checking
    long long maxNum;         // maximum number we've hit
    long long prevMax;        // previous max number

    activeNum = 1;
    prevMax = 0;
    do
    {
        maxNum = collatzGrow(activeNum);
        if (maxNum > prevMax)
        {
            printf("\n%lld reaches a max of %lld ", activeNum, prevMax = maxNum);
        }
        activeNum++;
    } while (maxNum >= 0);

    return 0;
}

long long collatzGrow(long long input)
{
    long long currentNum;
    long long max;

    currentNum = input;
    max = 0;
    while (currentNum > 1)
    {
        currentNum = currentNum % 2 ? 3 * currentNum + 1 : currentNum / 2;
        if (currentNum > max)
        {
            max = currentNum;
        }
    }

    if (currentNum < 0)
    {
        max = -1;
    }

    return max;
}