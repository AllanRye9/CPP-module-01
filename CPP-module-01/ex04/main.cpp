#include "copyData.hpp"

static void getStreams(str &line, str first, str second)
{
    size_t i = 0;

    while((i = line.find(first, i) ) != str::npos)
    {
        line = line.substr(0, i) + second + line.substr(i + first.length());
            i += second.length();
    }
}

int main(int ac, char **av)
{
    if (!(ac == 4))
    {
        std::cout << "\033[31m" << "Wrong Format <program name> : <filename> <file 1> <file 2>" << "\033[0m" <<  std::endl;
        return 0;
    }
    str fileName = av[1];
    str inputA = av[2];
    str inputB = av[3];
    str data = fileName + ".replace";
    str line;
    std::ifstream input(fileName.c_str());
    std::ofstream outPut(data.c_str());
    if (input.is_open())
    {
        while (std::getline(input, line))
        {
            getStreams(line, inputA, inputB);
            outPut << line;
            if (!input.eof())
                outPut << std::endl;

        }
        input.close();
        outPut.close();
    }
    else
        std::cout << "\033[31m" << "File cannot be openned" << "\033[0m" << std::endl;
    return 0;
}