/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:35:24 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/13 00:48:19 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


//---------------   class   ---------------//

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &cpy);
		Intern &operator=(const Intern &cpy);

		AForm *makeForm(std::string name, std::string target);
	private:
};