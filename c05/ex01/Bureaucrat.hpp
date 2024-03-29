/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:12:08 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 19:17:01 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
  public:
    class GradeTooHighException : public std::exception {
      public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        virtual const char *what() const throw();
    };
    
    Bureaucrat();
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();

    Bureaucrat(const std::string &name, int grade);
    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);

  private:
    int _grade;
    const std::string _name;
    
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif