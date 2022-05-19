//
// Created by Nakloz Luya on 2/24/22.
//

#include <iostream>
#include <fstream>
#include <cstdio>

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
    size_t pos = 0;
    while (str.find(s1, pos) != std::string::npos){
        pos = str.find(s1, pos);
        str.erase(pos, s1.length());
        str.insert(pos, s2);
    }
    return str;
}

int main(int argc, char** argv)
{
    std::string path;
    std::string str;
    std::string str1;
    std::string str2;
    std::ifstream fin;
    std::ofstream fout;


    if (argc != 4)
    {
        std::cout << "Less than 3 arguments" << std::endl;
        exit(0);
    }

    path = argv[1];
    str1 = argv[2];
    str2 = argv[3];
    fin.open(path);
    if (!fin.is_open()){
        std::cout << "Can't read the file" << std::endl;
        exit(0);
    }
    fout.open(path + ".replace", std::fstream::app);
    if (!fout.is_open()){
        std::cout << "Can't read the file" << std::endl;
        exit(0);
    }
    while(!fin.eof()){
        if (!std::getline(fin, str)){
            std::cout << "That's all!" << std::endl;
            exit(0);
        }
        str = ft_replace(str, str1, str2);
        fout << str;
        if (!fin.eof())
            fout << std::endl;
    }
    fout.close();
    fin.close();
    return 0;
}