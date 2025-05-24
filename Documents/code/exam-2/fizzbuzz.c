/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:42:25 by brmaria-          #+#    #+#             */
/*   Updated: 2025/05/23 18:33:38 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putnbr(int i)
{
    char    c;
    if (i < 0)
    {
       write(1, "-", 1);
        i *= (-1); 
    }
    if (i > 9)
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
    c = i + '0';
    write (1, &c, 1);
}

int main(void)
{
    int i;

    i = 1;
    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else 
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}