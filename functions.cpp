#include "functions.hpp"

int myfunc(int* a, size_t mass_len)
{
    int x = 0;
    for (size_t i = 0; i < mass_len; i++)
    {
        for (size_t j = i; j < mass_len; j++)
        {
            if (a[j] != a[i])
            {
             if (j - i > x)
             {
                x = j - i;
             }
             i = j - 1;
             break;
            }
        }
    }
    return x;
}

int myfunc_corrected(int* a, size_t mass_len)
{
    if (a == NULL || mass_len == 0)
    {
        return -1;
    }

    int val = a[0];
    size_t max_len = 1;
    size_t next_len = 1;

    for (int i = 1; i < mass_len; i++)
    {
        if (a[i] == val)
        {
            next_len++;
        }
        else
        {
            val = a[i];
            if (next_len > max_len)
            {
                max_len = next_len;
            }
            next_len = 1;
        }
    }

    if (next_len > max_len)
    {
        max_len = next_len;
    }

    return max_len;
}

void print_array(int* a, size_t mass_len)
{
    if (a == NULL || mass_len == 0)
    {
        return;
    }

    for (size_t i = 0; i < mass_len; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}


std::vector<std::string> remove_even_strings(std::vector<std::string> & ref)
{
    std::vector<std::string> result;
    std:: unordered_map<std::string, size_t> srch;

    for (auto & r : ref)
    {
        auto [f, s] = srch.insert(std::make_pair(r, 1));
        if (s == false)
        {
            srch.at(r) = srch.at(r) + 1;
        }
    }

    for (auto & r : ref)
    {
        if (srch.at(r) % 2 == 1)
        {
            result.push_back(r);
        }
    }

    return result;
}


void print_vector(std::vector<std::string> & ref)
{
    for (auto & r : ref)
    {
        std::cout << r << std::endl;
    }
    std::cout << "----------" << std::endl;
}
