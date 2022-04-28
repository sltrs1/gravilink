#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <unordered_map>

// Задание 1.
// Исходная функция из задания. Работает неэффективно и некорректно.
// Должна искать наибольшую по длинне последовательность одинаковых чисел в массиве.
// Делает это за O(N^2).
// Некорректно работает если весь массив состоит из одинаковых чисел
// или если искомая последовательность в конце массива.
int myfunc(int* a, size_t mass_len);

// Исправленная функция. Работает за O(N) и корректно
int myfunc_corrected(int* a, size_t mass_len);

// Вспомогательная функция для печати массива
void print_array(int* a, size_t mass_len);

// Задание 2.
// Функция, которая принимает массив строк, а возвращает массив,
// в котором удалены строки исходного массива, встречащиеся четное число раз.
// Порядок строк должен сохраняться.
std::vector<std::string> remove_even_strings(std::vector<std::string> & ref);

// Вспомогательная функция для печати массива строк
void print_vector(std::vector<std::string> & ref);

#endif // FUNCTIONS_H
