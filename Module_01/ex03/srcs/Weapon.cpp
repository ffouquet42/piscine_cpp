/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:41:49 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/18 15:08:31 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

std::string const &Weapon::getType() const { return (_type); }

void Weapon::setType(std::string type) { _type = type; }