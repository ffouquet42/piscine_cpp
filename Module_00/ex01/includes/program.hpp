/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:36:08 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/04 16:03:05 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_HPP
# define PROGRAM_HPP

# include <iostream>
# include <string>

# include "../class/Contact.hpp"
# include "../class/PhoneBook.hpp"

//--------------- display.cpp ---------------//
void	display_welcome();
void	display_menu();

//--------------- main.cpp ---------------//
int		main(int argc, char **argv);

#endif