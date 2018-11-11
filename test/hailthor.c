/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hailthor.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tsommeli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/11/11 18:42:53 by tsommeli      #+#    #+#                 */
/*   Updated: 2018/11/11 18:59:26 by tsommeli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void)
{
	write(1, "halllo jason\n", 13);
}

int		main(void)
{
	ft_putchar();
	return (0);
}
