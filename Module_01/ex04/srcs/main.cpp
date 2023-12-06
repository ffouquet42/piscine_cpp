/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:35:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 14:42:18 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sed.hpp"

int	replace_text(char **argv)
{
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream in_file(filename);
	if (!in_file)
	{
		std::cout << RED << "File <" << filename << "> not found." << WHITE << std::endl;
		return (1);
	}
	std::ofstream out_file(filename + ".replace");
	if (!out_file)
	{
		std::cout << RED << "Can't create <" << filename << ".replace>." << WHITE << std::endl;
		return (1);
	}
	std::string line;
	size_t		pos;
	if (std::getline(in_file, line, '\0'))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1);
		}
		out_file << line;
		in_file.close();
	}
	out_file.close();
	std::cout << GREEN << "A new file <" << filename << ".replace> was created with modifications." << WHITE << std::endl;
	return (0);
}

int	check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "Wrong number of arguments." << WHITE << std::endl;
		return (1);
	}
	if (!argv[2][0])
	{
		std::cout << RED << "Text to replace can't be blank." << WHITE << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (check_args(argc, argv))
		return (1);
	return replace_text(argv) ? 1 : 0;
}