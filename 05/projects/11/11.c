#include <stdio.h>

int main(void) {

    int n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    switch (n / 10) {
        case 1:
            switch (n % 10) {
                case 0:
                    printf("You entered the number ten\n");
                    break;
                case 1:
                    printf("You entered the number eleven\n");
                    break;
                case 2:
                    printf("You entered the number twelve\n");
                    break;
                case 3:
                    printf("You entered the number thirteen\n");
                    break;
                case 4:
                    printf("You entered the number fourteen\n");
                    break;
                case 5:
                    printf("You entered the number fifteen\n");
                    break;
                case 6:
                    printf("You entered the number sixteen\n");
                    break;
                case 7:
                    printf("You entered the number seventeen\n");
                    break;
                case 8:
                    printf("You entered the number eighteen\n");
                    break;
                case 9:
                    printf("You entered the number nineteen\n");
                    break;
                default:
                    break;
            }
            break;
        case 2:
            printf("You entered the number twenty");
            break;
        case 3:
            printf("You entered the number thirty");
            break;
        case 4:
            printf("You entered the number forty");
            break;
        case 5:
            printf("You entered the number fifty");
            break;
        case 6:
            printf("You entered the number sixty");
            break;
        case 7:
            printf("You entered the number seventy");
            break;
        case 8:
            printf("You entered the number eighty");
            break;
        case 9:
            printf("You entered the number ninety");
            break;
        default:
            printf("Your number is out of range 10-99\n");
            return 0;
    }

    if (n / 10 != 1) {
        switch (n % 10) {
            case 0:
                printf("\n");
                break;
            case 1:
                printf("-one\n");
                break;
            case 2:
                printf("-two\n");
                break;
            case 3:
                printf("-three\n");
                break;
            case 4:
                printf("-four\n");
                break;
            case 5:
                printf("-five\n");
                break;
            case 6:
                printf("-six\n");
                break;
            case 7:
                printf("-seven\n");
                break;
            case 8:
                printf("-eight\n");
                break;
            case 9:
                printf("-nine\n");
                break;
            default:
                break;
        }
    }

    return 0;
}
