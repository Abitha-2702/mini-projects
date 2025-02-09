#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int start, end, x, guess, count = 0, flag = 0, tot_chan;
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);
    // srand(time(NULL));
    x = (rand() % (end - start + 1)) + start;
    tot_chan = log(end - start + 1) / log(2);

    printf("\n\tYou've only %d chances to guess the integer!\n\n", tot_chan);
    while (count < tot_chan) {
        count++;
        printf("Guess a number: ");
        scanf("%d", &guess);
        if (x == guess) {
            printf(
                "Congratulations you did it in %d try!\n",
                count);
            flag = 1;
            break;
        }
        else if (x > guess) {
            printf("You guessed too small!\n");
        }
        else if (x < guess) {
            printf("You guessed too high!\n");
        }
    }
    if (!flag) {
        printf("\nThe number is %d\n", x);
        printf("\tBetter Luck Next time!\n");
    }

    return 0;
}
