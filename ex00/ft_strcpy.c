
#include <unistd.h>
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        putchar(*(str + i));
        i++;
    }
}
/*
int main()
{
  ft_putstr("94sdlg");
  return 0;
}*/
