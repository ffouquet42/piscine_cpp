/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:22:59 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/18 17:50:22 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include "AForm.hpp"


//---------------   class   ---------------//

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);

		bool	execute(Bureaucrat &b) const;

	private:
		std::string	_target;
};