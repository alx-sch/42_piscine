int		check_args(int arg_c, const char *str_arg);
void	initialize_int_arr(int arr[]);
void	create_arg_int_array(const char *str_arg, int int_arr[]);
int		check_skyscraper(int arr[], int vis_rules[]);

int	main(int arg_c, char *arg_v[])
{
	int	vis_rules[16];

	initialize_int_arr(vis_rules);
	if (check_args(arg_c, arg_v[1]))
	{
		create_arg_int_array(arg_v[1], vis_rules);
	}
	return (0);
}
