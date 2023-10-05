/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:14:33 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/05 15:02:13 by fllanet          ###   ########.fr       */
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
		int		_number_of_contacts;
		int		_contact_to_delete;
};

#endif