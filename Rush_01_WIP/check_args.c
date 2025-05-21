#include <unistd.h>

// int	arg_check_char_size(const char *str_arg);
// int	arg_check_leading_trailing_space(const char *str_arg);
// int	arg_check_multi_spaces(const char *str_arg);

/*
Checks a given string for
- Valid chars: The string only contains characters '1', '2', '3', '4', or ' '.
- Correct size: The string has a length of exactly 31 characters.

@param str_arg	The input string to be validated.

@return			0 if validation suceeds, 1 if validation fails.
*/
int	arg_check_char_size(const char *str_arg)
{
	int	i;

	i = 0;
	while (str_arg[i] != '\0')
	{
		if (!((str_arg[i] >= '1' && str_arg[i] <= '4') || (str_arg[i] == ' ')))
		{
			return (1);
		}
		i++;
	}
	if (i != 31)
	{
		return (1);
	}
	return (0);
}

/*
Checks for presence of a leading or trailing space in a given string.

This function scans the input string 'str_arg' and returns 1 if there are is a
leading or trailing space character in the string, which is an invalid input.

@param str_arg	The input string to be validated.

@return			0 if validation suceeds, 1 if validation fails.
*/
int	arg_check_leading_trailing_space(const char *str_arg)
{
	int	i;

	i = 0;
	if (str_arg[0] == ' ')
	{
		return (1);
	}
	while (str_arg[i] != '\0')
	{
		i++;
	}
	if (str_arg[i - 1] == ' ')
	{
		return (1);
	}
	return (0);
}

/*
Checks for presence of double spaces in a given string.

This function scans the input string 'str_arg' and returns 1 if there are
consecutive spaces present ('  '), which is an invalid input.
It uses a 'prev_space' flag to keep track of the previously encountered spaces.
Returns 0 if there are no double spaces in the string.

@param str_arg	The input string to be validated.

@return			0 if validation suceeds, 1 if validation fails.
*/
int	arg_check_multi_spaces(const char *str_arg)
{
	int	i;
	int	prev_space;

	i = 0;
	prev_space = 0;
	while (str_arg[i] != '\0')
	{
		if (str_arg[i] == ' ')
		{
			if (prev_space)
			{
				return (1);
			}
			prev_space = 1;
		}
		else
		{
			prev_space = 0;
		}
		i++;
	}
	return (0);
}

/*
Validates input arguments for the game's requirement.

The function performs following checks:
-	Verifies if the program is called with exactly two arguments (first one is
	the program name, the second are the visibility rules)
-	Calls other functions to check for characters, size, leading/trailing spaces,
	and multiple consecutive spaces in the input string.

If any of the checks fail, it prints appropriate error messages and returns 0 to
indicate failure.
If all checks pass, it returns 1 to indicate success.

@param arg_c	The number of command-line arguments.
@param str_arg.	The input string to be validated.

@return			1 if validation succeeds, 0 if validation fails.
*/
int	check_args(int arg_c, const char *str_arg)
{
	if (arg_c != 2)
	{
		write(2, "ERROR:\n", 7);
		write(2, "Please pass a single argument (string).\n", 40);
		write(2, "Please pass 16 numbers ranging 1-4.\n", 36);
		write(2, "Numbers are separated by space.\n", 32);
		write(2, "Do not use multiple, leading, or trailing spaces.\n", 50);
		write(2, "Exp: \"1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4\"\n", 39);
		return (0);
	}
	if (arg_check_char_size(str_arg)
		|| arg_check_leading_trailing_space(str_arg)
		|| arg_check_multi_spaces(str_arg))
	{
		write(2, "ERROR:\n", 7);
		write(2, "Please pass 16 numbers ranging 1-4.\n", 36);
		write(2, "Numbers are separated by space.\n", 32);
		write(2, "Do not use multiple, leading, or trailing spaces.\n", 50);
		write(2, "Exp: \"1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4\"\n", 39);
		return (0);
	}
	return (1);
}
