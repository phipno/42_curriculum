/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autonomousReplacer.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:18:18 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/26 14:50:51 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "autonomousReplacer.hpp"

Foo::Foo(char *input[]) : filename_(input[1]), s1_(input[2]), s2_(input[3]) {}

Foo::~Foo(void) {}

std::string Foo::GetStr() const { return this->str_; }

void    Foo::TheStrChanger() {
    std::size_t  i = 0;

    while ((i = str_.find(s1_)) != str_.npos) {
        str_.erase(i, s1_.length());
        str_.insert(i, s2_);
        i += s2_.length();
    }
}

int     Foo::TheFileCreater() {
    std::ofstream   out_file(this->filename_ + ".replace");

    if (!out_file.is_open()) {
        std::cerr << "BreEeH... FAiled to open file: " << this->filename_;
        std::cerr << ".replace" << std::endl;
        return EXIT_FAILURE;
    }
    this->TheStrChanger();
    out_file << this->str_;
    out_file.close();
    return EXIT_SUCCESS;
}

int     Foo::OpenCopy() {
    std::ifstream       in_file;
    std::stringstream   str_stream;

    in_file.open(this->filename_);
    if (!in_file.is_open()) {
        std::cerr << "Bi Bup Bap.. Failed to read file:";
        std::cerr << filename_ << std::endl;
        return EXIT_FAILURE;
    }
    str_stream << in_file.rdbuf();
    this->str_ = str_stream.str();
    in_file.close();
    return EXIT_SUCCESS;
}


int     AutonomousReplacer(char *input[]) {
    Foo f = Foo(input);

    if (f.OpenCopy())
        return EXIT_FAILURE;
    if (f.TheFileCreater())
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

/* ************************************************************************** */
