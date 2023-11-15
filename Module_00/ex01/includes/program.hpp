/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:36:08 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/15 15:47:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include <string>
# include <iomanip>
# include <cstring>

# include "../includes/Contact.hpp"
# include "../includes/PhoneBook.hpp"


//===============   PROTOTYPES   ===============//

//---------------   display.cpp   ---------------//
void	display_welcome();
void	display_menu();
void	display_contacts_list_hud();

//---------------   main.cpp   ---------------//
int		main(void);

//---------------   search.cpp   ---------------//
int		only_digit(std::string str);
int		valid_index(std::string str);


//---------------   colors   ---------------//
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define WHITE "\x1B[0m"