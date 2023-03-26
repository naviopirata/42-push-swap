#include <tests.h>

void test_stack_load_1_2_3_4(void)
{
	t_list	*list;
	int		max = 5;
	char	*vec[5] = {"name", "1", "2", "3", "4"};
	int		i;

	i = 0;
	list = stack_load(max, vec);
	while (i < 4)
	{
		TEST_ASSERT_EQUAL_INT(i + 1, *(int *)list->content);
		list = list->next;
		i++;
	}
}

void test_stack_load_4_3_2_1(void)
{
	t_list	*list;
	int		max = 5;
	char	*vec[5] = {"name", "4", "3", "2", "1"};
	int		i;

	i = 0;
	list = stack_load(max, vec);
	while (i < 4)
	{
		TEST_ASSERT_EQUAL_INT(4 - i, *(int *)list->content);
		list = list->next;
		i++;
	}
}

void test_stack_load()
{
	RUN_TEST(test_stack_load_1_2_3_4);
	RUN_TEST(test_stack_load_4_3_2_1);
}