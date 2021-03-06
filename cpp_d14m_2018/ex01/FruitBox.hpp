/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_FRUITBOX_HPP
#define DAY_FRUITBOX_HPP

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {

    private:
    int _size;
    public:
    int getSize() const;

    private:
    int _nbFruits;
    FruitNode *list;

    protected:

    public:
    explicit FruitBox(int size);

    virtual ~FruitBox();

    int nbFruits() const;
    bool putFruit(Fruit *f);
    Fruit *pickFruit();
    FruitNode *head() const;
};

#endif //DAY_FRUITBOX_HPP
