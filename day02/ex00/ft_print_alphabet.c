/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** 
*/

void ft_putchar(char c); // Prints |c| to the standard output.

void ft_print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
		ft_putchar(c++);
}
