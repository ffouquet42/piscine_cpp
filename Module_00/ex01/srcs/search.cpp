/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:04:34 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/06 11:44:37 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

int	only_digit(std::string str)
{
	int i = 0;
	
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '7')
			return (1);
		i++;
	}
	return (0);
}

int	valid_index(std::string str)
{
	int i = 0;
	
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (only_digit(&str[i]))
		return (-1);
	if (str[i + 1])
		return (-1);
	return (str[i] - 48);
}