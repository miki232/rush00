/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:21:30 by mtoia             #+#    #+#             */
/*   Updated: 2022/02/06 12:13:58 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	p_x;
	int	p_y;

	p_y = y;
	while (p_y > 0)
	{
		p_x = x;
		while (p_x > 0)
		{
			if ((p_x == 1 || p_x == x) && (p_y == 1 || p_y == y))
				ft_putchar('o');
			else if ((p_x == 2 || x > p_x) && (p_y == 1 || p_y == y))
				ft_putchar('-');
			else if ((p_x == 1 || p_x == x) && (p_y == 2 || p_y <= y))
				ft_putchar('|');
			else
				ft_putchar(' ');
		p_x--;
		}
		ft_putchar('\n');
	p_y--;
	}
}
