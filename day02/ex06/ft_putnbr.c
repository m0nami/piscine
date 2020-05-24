void ft_putchar (char c);

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putnbr(int n)
{
  if (n < 0)
  {
    write(1, "-", 1);
    ft_putnbr(-n);
  }
  else if (n > 9)
  {
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
  }
  else
    ft_putchar(n + '0');
} 

int main()
{
    ft_putnbr(437);
    ft_putchar('\n');
    ft_putnbr(1);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(-345);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    return (0);
}
