/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:32:00 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/18 17:40:44 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include "Bureaucrat.hpp"


//---------------   class   ---------------//

class Bureaucrat;

class AForm
{
	public:
		AForm(const std::string name, const int sign_grade, const int exec_grade);
		virtual ~AForm();
		AForm(const AForm &cpy);
		AForm &operator=(const AForm &cpy);

		class GradeTooHighException : public std::exception {
			public:
				std::string	tooHigh() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				std::string	tooLow() const throw();
		};

		class NotSignedFormException : public std::exception {
			public:
				std::string	notSigned() const throw();
		};

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		
		void			beSigned(Bureaucrat &b);
		virtual bool	execute(Bureaucrat &b) const = 0;

	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;
};

std::ostream &operator<<(std::ostream &os, const AForm &f);