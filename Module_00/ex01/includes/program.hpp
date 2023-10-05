/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:36:08 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/05 14:56:01 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_HPP
# define PROGRAM_HPP

# include <iostream>
# include <string>
# include <iomanip>

# include "../class/Contact.hpp"
# include "../class/PhoneBook.hpp"

//---------------   display.cpp   ---------------//
void	display_welcome();
void	display_menu();
void	display_contacts_list_hud();

//---------------   main.cpp   ---------------//
int		main(void);


//---------------   colors   ---------------//
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define WHITE "\x1B[0m"

#endif