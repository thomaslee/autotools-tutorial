#include <check.h>
#include <string.h>

#include "strdup-printf.h"

START_TEST (test_strdup_printf)
{
    char *temp = strdup_printf ("ohai, %s", "Mark");
    fail_unless (temp != NULL, "expected result to not be NULL");
    fail_unless (strcmp ("ohai, Mark", temp) == 0, "expected 'ohai, Mark'");
    free (temp);
}
END_TEST

int
main (int argc, char **argv)
{
    int num_failed;
    SRunner *sr;
    Suite *s;
    TCase *tc;

    s = suite_create ("my-project");
    tc = tcase_create ("strdup-printf");
    tcase_add_test (tc, test_strdup_printf);
    suite_add_tcase (s, tc);

    sr = srunner_create (s);
    srunner_run_all (sr, CK_NORMAL);
    num_failed = srunner_ntests_failed (sr);
    srunner_free (sr);

    return num_failed;
}

