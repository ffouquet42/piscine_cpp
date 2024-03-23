/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:14 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 00:29:21 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm> //
#include <map>
#include <ctime> //
#include <string> //

//---------------   class   ---------------//

class BitcoinExchange {
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cpy);	
		BitcoinExchange	&operator=(const BitcoinExchange &cpy);

		int		loadDataBase();
		int		isValidDate(std::string &date);
		float	parseInputLine(std::string &input);
		void	calculateRatio(std::ifstream &input);

	private:
		std::map<std::string, float> dataBase;
};


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