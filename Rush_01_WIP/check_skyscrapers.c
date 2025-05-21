/*
Checks if a visibiliy rule is satisfied for a given row or column.
*/

/*
Calculates the number of visible skyscrapers when looking from the left or
top direction.

@param arr 	An array representing the heights of skyscrapers.
@return 	The count of visible skyscrapers.
*/
int	calc_up_left_vis(int arr[])
{
	int	visible;
	int	max_height;
	int	i;

	visible = 0;
	max_height = 0;
	i = 0;
	while (i <= 3)
	{
		if (arr[i] > max_height)
		{
			max_height = arr[i];
			visible++;
		}
		i += 1;
	}
	return (visible);
}

/*
Calculates the number of visible skyscrapers when looking from the right or
down direction.

@param arr 	An array representing the heights of skyscrapers.
@return 	The count of visible skyscrapers.
*/
int	calc_down_right_vis(int arr[])
{
	int	visible;
	int	max_height;
	int	i;

	visible = 0;
	max_height = 0;
	i = 3;
	while (i >= 0)
	{
		if (arr[i] > max_height)
		{
			max_height = arr[i];
			visible++;
		}
		i -= 1;
	}
	return (visible);
}

/*
Calculates the count of visible skyscrapers in a given direction.

@param arr 			An array representing the heights of skyscrapers.
@param direction	The direction to calculate visibility
					(1 for top or left, -1 for down or right).
@return 			The count of visible skyscrapers in the
					specified direction.
*/
int	calc_vis(int arr[], int direction)
{
	if (direction == 1)
	{
		return (calc_up_left_vis(arr));
	}
	else if (direction == -1)
	{
		return (calc_down_right_vis(arr));
	}
	return (0);
}

/*
Checks if the arrangement of skyscrapers in a row/column adheres to
visibility rules.

@param arr			An array representing the heights of skyscrapers in a row/column.
@param vis_rules 	An array containing visibility rules [top/left, right/down].
@return 			1 if the arrangement adheres to the visibility rules,
					0 otherwise.
*/
int	check_skyscraper(int arr[], int vis_rules[])
{
	int	left_up_visible;
	int	right_down_visible;

	left_up_visible = calc_vis(arr, 1);
	right_down_visible = calc_vis(arr, -1);
	if (left_up_visible == vis_rules[0] && right_down_visible == vis_rules[1])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// int	main()
// {
// 	// int arr[] = {1, 2, 3, 4};
// 	// int arr[] = {1, 3, 3, 4};
// 	// int arr[] = {1, 3, 4, 2};
// 	// int arr[] = {1, 4, 3, 2};
// 	int arr[] = {2, 4, 3, 1};

// 	int visibility[] = {2, 3};

// 	int isValid = check_skyscraper(arr, visibility);

// 	if (isValid) {
// 		printf("Valid Skyscraper configuration\n");
// 	} else {
// 		printf("Invalid Skyscraper configuration\n");
// 	}
// 	return 0;
// }
