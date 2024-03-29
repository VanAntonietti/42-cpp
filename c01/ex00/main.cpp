/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:37:57 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/04 12:37:34 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main () {
  Zombie stack("Geth");
  Zombie* heap;

  heap = stack.newZombie("Nevinyrral");
  stack.announce();
  heap->announce();
  stack.randomChump("Tormod");
  heap->randomChump("Acererak");
  delete heap;
  return 0;
}