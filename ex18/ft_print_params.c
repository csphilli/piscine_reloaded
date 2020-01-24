/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:37:59 by cphillip          #+#    #+#             */
/*   Updated: 2019/10/16 12:01:33 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *param)
{
	int i;

	i = 0;
	while (param[i] != '\0')
	{
		ft_putchar(param[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_print_params(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
