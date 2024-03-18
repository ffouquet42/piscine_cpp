/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:23:02 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/18 17:50:26 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include <cstdlib>
# include <ctime>
# include "AForm.hpp"


//---------------   class   ---------------//

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);

		bool	execute(Bureaucrat &b) const;

	private:
		std::string	_target;
};