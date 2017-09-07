#include <iostream>

int main()
{
    int n;
    std::string input;
    std::cin >> n;
    while(n != 0)
    {
        int temp;
        int min = 1;
        int max = -1;
        int array[10] = {};
        int index = 0;
        int maxmod = 0;
        for (int i = 0; i < n; ++i)
        {
            std::cin >> input;
            if (input.find("greater") != std::string::npos)
            {
                std::cin >> input >> temp;
                if (temp > min)
                    min = temp + 1;
            }else if (input.find("less") != std::string::npos)
            {
                std::cin >> input >> temp;
                if (temp < max || max == -1)
                    max = temp;
            }else
            {
                std::cin >> input >> temp;
                array[index++] = temp;
                if (temp > maxmod)
                    maxmod = temp;
            }
        }
        bool passed = false;
        if (max == -1)
        {
            std::cout << "infinite";
            passed = true;
        }
        if (maxmod != 0 && min % maxmod != 0)
            min += maxmod - min % maxmod;
        else
            maxmod = 1;
        for(int i = min; i < max; i+=maxmod)
        {
            bool pass = true;
            for (int j = 0; j < index; ++j)
            {
                if (i % array[j] != 0)
                {
                    pass = false;
                    break;
                }
            }
            if (pass)
            {
                std::cout << i << " ";
                passed = true;
            }
            else
                continue;
        }
        if (!passed)
            std::cout << "none";
        std::cout << std::endl;
        std::cin >> n;
    }
    return 0;
}