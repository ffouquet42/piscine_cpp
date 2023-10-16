/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:58:50 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/16 15:57:00 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>

//---------------   class   ---------------//
class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);

	private:
		std::string name;
};

//---------------   prototypes   ---------------//
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

//---------------   colors   ---------------//
# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define YELLOW		"\x1B[33m"
# define BLUE		"\x1B[34m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"
# define WHITE		"\x1B[0m"