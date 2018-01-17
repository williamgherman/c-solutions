#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMS 10000

int compare(const void *a, const void *b);

int main(int argc, char *argv[])
{
    FILE *fp;
    int nums[MAX_NUMS];
    int amount = 0, median;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be read\n", argv[1]);
    }

    while (!feof(fp) && amount < MAX_NUMS)
        fscanf(fp, " %d", &nums[amount++]);
    amount--;

    qsort(nums, amount, sizeof(int), compare);

    if (amount % 2 == 0)
        median = (nums[(amount - 1) / 2] + nums[(amount - 1) / 2 + 1]) / 2;
    else
        median = nums[(amount - 1) / 2];

    printf("Maximum: %d\nMinimum: %d\nMedian: %d\n",
           nums[amount - 1], nums[0], median);

    fclose(fp);
    exit(EXIT_SUCCESS);

}

int compare(const void *a, const void *b)
{
    return *((int *)a) - *((int *)b);
}
