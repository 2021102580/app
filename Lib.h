#ifndef myfunc_H
#define myfunc_H
#include <vector>

namespace Lib {

      /**
      * @brief Сортирует массив целых чисел в порядке возрастания.
      *
      * @param arr Массив целых чисел для сортировки.
      */
	extern void sortArray(std::vector <int>& arr);

      /**
      * @brief Изменяет порядок элементов в массиве целых чисел на обратный.
      *
      * @param arr Массив целых чисел, которые необходимо инвертировать.
      */
	extern void reverseArray(std::vector <int>& arr);

      /**
      * @brief Переставляет числа в четных и нечетных позициях в массиве целых чисел.
      *
      * @param arr Массив целых чисел для перестановки.
      */
	extern void permuteArray(std::vector <int>& arr);

}


#endif