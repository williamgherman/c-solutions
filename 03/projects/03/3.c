#include <stdio.h>

int main(void) {
    
    int gsi, group_id, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", 
          &gsi, &group_id, &pub_code, &item_num, &check_digit);
    printf("GSI prefix: %d\nGroup identifier: %d\n", gsi, group_id);
    printf("Publisher code: %d\nItem number: %d\nCheck digit: %d\n", 
           pub_code, item_num, check_digit);

    return 0;
}
