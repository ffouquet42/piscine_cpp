/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:36:08 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/20 07:38:08 by fllanet          ###   ########.fr       */
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
# include "../includes/colors.hpp"


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