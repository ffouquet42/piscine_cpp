/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:14 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/02 15:53:15 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include <exception>

//---------------   class   ---------------//
class Bureaucrat
{
	public:
		Bureaucrat(const std::string name, int grade); // + constructor vide ?
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &operator=(const Bureaucrat &cpy);

		class GradeTooHighException : public std::exception {
			public:
				std::string	tooHigh() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				std::string	tooLow() const throw();
		};

		std::string	getName(); // const ?
		int			getGrade(); // const ?

		void		incrementGrade();
		void		decrementGrade();
		
	private:
		const std::string _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &cpy); // check old modules

//---------------   colors   ---------------//
# define RED			"\x1B[31m"
# define GREEN			"\x1B[32m"
# define YELLOW			"\x1B[33m"
# define ORANGE			"\x1B[33;91m"
# define BLUE			"\x1B[34m"
# define MAGENTA		"\x1B[35m"
# define CYAN			"\x1B[36m"
# define WHITE			"\x1B[0m"
# define LIME 			"\x1B[38;5;118m"
# define FOREST_GREEN	"\x1B[38;5;34m"
# define BRIGHT_RED		"\x1B[38;5;9m"