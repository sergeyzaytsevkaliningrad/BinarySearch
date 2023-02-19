//
//  TemVector.hpp
//  BinarySearchTree
//
//  Created by Сергей Зайцев on 19.02.2023.
//

#ifndef TemVector_hpp
#define TemVector_hpp

#include <iostream>
#include <vector>
#include "BinarySearch.hpp"

using namespace::std;



int main(){
    
        int n, m;       // Создание переменных отвечающих за размер вектора
        cin >> n >> m;  // Ввод размеров вектора

        vector < vector <float> > a(n, vector <float> (m) ); // Объявление вектора на n строк по m элементов

        for (int i = 0; i < n; i++)     // Цикл, который идёт по строкам
            for (int j = 0; j < m; j++) // Цикл, который идёт по элементам
            {
                cin >> a[i][j];// Заполнение вектора или массива (в данном случае ввод)
                
                
                
            }

        for (int i = 0; i < n; i++) // Цикл, который идёт по строкам
        {
            for (int j = 0; j < m; j++) // Цикл, который идёт по элементам
                cout << a[i][j] << ' '; // Вывод элементов i строки вектора
            cout << endl;
        }

        return 0;
        
}



#endif /* TemVector_hpp */
