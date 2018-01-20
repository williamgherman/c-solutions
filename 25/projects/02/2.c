#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    struct lconv *locale;
    int grouping, mon_grouping;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s locale\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (setlocale(LC_ALL, argv[1]) == NULL)
    {
        fprintf(stderr, "No information available for %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    locale = localeconv();
    grouping = (int) locale->grouping[0];
    mon_grouping = (int) locale->mon_grouping[0];

    printf("decimal_point = \"%s\"\n", locale->decimal_point);
    printf("thousands_sep = \"%s\"\n", locale->thousands_sep);
    printf("grouping = \"%d\"\n", grouping);
    printf("mon_decimal_point = \"%s\"\n", locale->mon_decimal_point);
    printf("mon_thousands_sep = \"%s\"\n", locale->mon_thousands_sep);
    printf("mon_grouping = \"%d\"\n", mon_grouping);
    printf("positive_sign = \"%s\"\n", locale->positive_sign);
    printf("negative_sign = \"%s\"\n", locale->negative_sign);
    printf("currency_symbol = \"%s\"\n", locale->currency_symbol);
    printf("int_curr_symbol = \"%s\"\n", locale->int_curr_symbol);
    printf("frac_digits = \"%d\"\n", locale->frac_digits);
    printf("p_cs_precedes = \"%d\"\n", locale->p_cs_precedes);
    printf("n_cs_precedes = \"%d\"\n", locale->n_cs_precedes);
    printf("p_sep_by_space = \"%d\"\n", locale->p_sep_by_space);
    printf("n_sep_by_space = \"%d\"\n", locale->n_sep_by_space);
    printf("p_sign_posn = \"%d\"\n", locale->p_sign_posn);
    printf("n_sign_posn = \"%d\"\n", locale->n_sign_posn);
    printf("int_frac_digits = \"%d\"\n", locale->int_frac_digits);
    printf("int_p_cs_precedes = \"%d\"\n", locale->int_p_cs_precedes);
    printf("int_n_cs_precedes = \"%d\"\n", locale->int_n_cs_precedes);
    printf("int_p_sep_by_space = \"%d\"\n", locale->int_p_sep_by_space);
    printf("int_n_sep_by_space = \"%d\"\n", locale->int_n_sep_by_space);
    printf("int_p_sign_posn = \"%d\"\n", locale->int_p_sign_posn);
    printf("int_n_sign_posn = \"%d\"\n", locale->int_n_sign_posn);

    exit(EXIT_SUCCESS);
}
