/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:14:33 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/04 16:01:43 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../includes/program.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		
		void addContact();
		void searchContact();
		
	private:
		Contact _contacts[8];
};

#endif