#pragma once

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class FormAlreadySignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

    public:
        Form();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        virtual ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);

        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);