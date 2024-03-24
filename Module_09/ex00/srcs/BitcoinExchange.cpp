/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 02:09:36 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

//---------------   Constructors & Destructors   ---------------//

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	if (this != &cpy)
		*this = cpy;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &cpy)
{
	if (this != &cpy)
		*this = cpy;
	return (*this);
}


//---------------   Functions   ---------------//

int	BitcoinExchange::loadDatabase()
{
	std::ifstream	data("data.csv");
	if (!data.is_open())
	{
		std::cout << "Error : could not open data base file" << std::endl;
		return (1);
	}

	std::string line;
	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		float				value;
		if (std::getline(iss, date, ',') && (iss >> value))
		{
			_database[date] = value;
		}
		else
		{
			std::cout << "Error: bad input => " << line << std::endl;
			return (1);
		}
	}
	data.close();
	
	return (0);
}

int	BitcoinExchange::checkDateFormat(std::string &date)
{
	int		year;
	int		month;
	int		day;
	char	dash_1;
	char	dash_2;

	std::istringstream data_stream(date);
	data_stream >> year >> dash_1 >> month >> dash_2 >> day;
	if (data_stream.fail() || dash_1 != '-' || dash_2 != '-')
		return (1);

    if (year < 2009 || year > 2050 || month < 1 || month > 12 || day < 1 || day > 31)
        return (1);

    // bool is_leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    // int max_day_in_month[] = {31, 28 + is_leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // if (day > max_day_in_month[month - 1])
    //     return (1);

    return (0);
}

float	BitcoinExchange::readInput(std::string &input)
{
	if (input.empty())
		return (-1);

	std::istringstream	iss(input);
	std::string	date, value_str;
	std::getline(iss, date, '|');
	std::getline(iss, value_str);
	date.erase(0, date.find_first_not_of(" \t"));
	date.erase(date.find_last_not_of(" \t") + 1);
	input = date;
	float value;
	if (checkDateFormat(input))
	{
		std::cout << "Error: bad input => " << input << std::endl;
		return (-1);
	}
	value_str.erase(0, value_str.find_first_not_of(" \t"));
	value_str.erase(value_str.find_last_not_of(" \t") + 1);
	std::istringstream(value_str) >> value;
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (-1);
	}
	else if (value > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (-1);
	}
	return (value);
}

void	BitcoinExchange::calculBtcValue(std::ifstream &input)
{
	std::string line;
	std::getline(input, line);
	while(std::getline(input, line))
	{
		std::istringstream iss(line);
		float value;
		value = readInput(line);
		if (value == -1)
			continue ;
		std::map<std::string, float>::iterator it = _database.lower_bound(line);
		if (it->first == line)
		{
			std::cout << line << " => " << value << " = " << value * it->second << std::endl;
		}
		else if (it == _database.begin()) {
			std::cout << line << " => " << value << " = " << value * it->second << std::endl;
		}
		else {
			it--;
			std::cout << line << " => " << value << " = " << value * it->second << std::endl;
		}
	}
}