#include "copyData.hpp"

static str getStreams(const str &line, const str &s1, const str &s2)
{
    str result;
    size_t pos = 0;
    size_t s1Length = s1.length();

    while (pos < line.length())
    {
        size_t found = line.find(s1, pos);
        if (found != str::npos)
        {
            result += line.substr(pos, found - pos);
            result += s2;
            pos = found + s1Length;
        }
        else
        {
            result += line.substr(pos);
            break;
        }
    }
    return result;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "\033[31m" << "Wrong Format. Usage: <program name> <filename> <file 1> <file 2>" << "\033[0m" << std::endl;
        return 1;
    }

    str fileName = av[1];
    str inputA = av[2];
    str inputB = av[3];
    str line;
    str data = fileName + ".replace";

    std::ifstream input(fileName.c_str());
    if (!input.is_open())
    {
        std::cout << "\033[31m" << "File cannot be opened" << "\033[0m" << std::endl;
        return 1;
    }

    std::ofstream outPut(data.c_str());
    if (!outPut.is_open())
    {
        std::cout << "\033[31m" << "Output file cannot be opened" << "\033[0m" << std::endl;
        return 1;
    }

    while (std::getline(input, line))
    {
        str modifiedLine = getStreams(line, inputA, inputB);
        outPut << modifiedLine;
        if (!input.eof())
            outPut << std::endl;
    }
    input.close();
    outPut.close();
    return 0;
}