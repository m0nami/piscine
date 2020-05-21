/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** reverse alphabet
*/

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char c = 'z';
        while (c >= 'a')
		ft_putchar(c--);
}

int main()
{
        ft_print_reverse_alphabet();
        return (0);
}
