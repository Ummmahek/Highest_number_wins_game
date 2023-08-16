#include <stdio.h>
#include <limits.h>

int greater(int a, int b)
{
    // Returns greater of the two numbers
    int ans;

    if (a >= b)
    {
        ans = a;
    }
    else
    {
        ans = b;
    }

    return ans;
}

int isPresent(int arr[], int size, int element)
{
    /*
    Function to check if given element is present in array or not
    Returns 1 if present, 0 if not
    */

    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

int linearSearch(int arr[], int size, int element)
{
    // returns position of element in array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
}

void main()
{
    int n, num[100];    // n = no. of players
    int i, a, input;    // a = player no. of winner
    int maxn = INT_MIN; // maxn = greatest entry

    printf("\nEnter the number of players: ");
    scanf("%d", &n);

    printf("\nEnter any number one by one: ");

    for (i = 0; i < n; i++)
    {
        do
        {
            // Ensuring all entries are different
            printf("\nNumber for Player %d: ", i);
            scanf("%d", &input);
        } while (isPresent(num, i, input));

        num[i] = input;
    }

    for (i = 0; i < n; i++)
    {
        maxn = greater(num[i], maxn);
    }

    a = linearSearch(num, n, maxn);

    printf("\n\n");
    printf("The highest number is %d\n", maxn);
    printf("The player with max number is p[%d]", a);
    printf("\n\n");
