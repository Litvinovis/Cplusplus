/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:30:04 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:33:04 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C() {
}

C::C(const C &other) {
	*this = other;
}

C & C::operator=(const C &other) {
	(void)other;
	return (*this);
}

C::~C() {
}