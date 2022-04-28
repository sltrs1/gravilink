#include "functions.hpp"
#include <iostream>

int main()
{
    constexpr size_t mass_len = 10;
    int a1[mass_len];
    int a2[mass_len];

    for (size_t i = 0; i < mass_len; i++)
    {
        a1[i] = 10;
        a2[i] = i < 7 ? i : 10;
    }

    int x1 = myfunc(a1, mass_len);
    int x2 = myfunc(a2, mass_len);
    int x1_fixed = myfunc_corrected(a1, mass_len);
    int x2_fixed = myfunc_corrected(a2, mass_len);

    std::cout << "---- array1 -------" << std::endl;
    print_array(a1, mass_len);
    std::cout << "Wrong value by myfunc " << x1 << std::endl;
    std::cout << "Correct value by myfunc_corrected " << x1_fixed << std::endl;
    std::cout << "---- array2 -------" << std::endl;
    print_array(a2, mass_len);
    std::cout << "Wrong value by myfunc " << x2 << std::endl;
    std::cout << "Correct value by myfunc_corrected " << x2_fixed << std::endl;

    std::cout << std::endl << "=========================" << std::endl;

    std::vector<std::string> vec;

    vec.push_back("abc");
    vec.push_back("123");
    vec.push_back("fgh");
    vec.push_back("456");
    vec.push_back("ppp");
    vec.push_back("123");
    vec.push_back("fgh");
    vec.push_back("fgh");
    vec.push_back("abc");
    vec.push_back("ppp");

    print_vector(vec);

    auto result = remove_even_strings(vec);

    print_vector(result);
    return 0;
}
