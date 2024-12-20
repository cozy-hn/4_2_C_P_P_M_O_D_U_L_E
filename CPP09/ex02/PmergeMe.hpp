#pragma once

#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <cstdlib>

typedef struct s_data {
    int value;
    int level;
    struct s_data* left;
    struct s_data* right;

    s_data(int v, s_data* l, s_data* r) : value(v), left(l), right(r) {
        level = l != 0 ? l->level + 1 : 0;
    }
} t_data;

class PmergeMe {
    public:
        static PmergeMe& getInstance();

        void pushBack(int n);
        void printAll(const std::string &s);
        void sortVector();
        void sortList();
        int getVCount();
        int getLCount();
        
    private:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe& operator=(const PmergeMe& obj);

        void insertVector(int i);
        void insertList(int i);
        std::list<t_data*>::iterator getIteratorAtIdx(int idx);
        static int getJNum(int k);

        static PmergeMe* _instance;
        std::vector<t_data*> _v;
        std::list<t_data*> _l;
        int _vCount;
        int _lCount;

        
};