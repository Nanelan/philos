/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:15:52 by crmunoz-          #+#    #+#             */
/*   Updated: 2024/09/12 15:50:40 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int argc, char **argv)
{
	t_table		*table;
	t_philos	*philos;
	long		i;

	i = 0;
	if (argc < 5 || argc > 6 || (input_checker(argv) == 0))
		print_error(2);
	init_table(argv, &table);
	init_philo(&philos, table);
	timeset();
	while (i < table->philos)
	{
		survival(*philos);
		if (check_grim_reaper(philos[i]) == -1)
			break;
		i++;
	}
	return (0);
}

/*
	- input_checker(argv)
	
	init
	philo_num == 1¿?

*/