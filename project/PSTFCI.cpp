//
// Created by abdelrhman on ١‏/٥‏/٢٠٢٠.
//
/*
#include <iostream>
#include "PSTFCI.h"
using namespace std;

template<class type>
PSTNODE<type> * PSTFCI<type>::newNode(type value)
{
    PSTNODE<type>* newnode = new PSTNODE<type>;
    newnode->Value= value;
    newnode->Left = newnode->Right = NULL;
    return newnode;
}

template<class type>
PSTFCI<type>::PSTFCI()
{
    Root = NULL;
    size = 0;
}

template<class type>
PSTNODE<type> * PSTFCI<type>::insert(type value)
{
    PSTNODE<type>* newnode = newNode(value);
    PSTNODE<type>* temp = Root;
    PSTNODE<type>* position = Root;
    while(temp != NULL)
    {
        position = temp;
        if(value < temp->Value)
        {
            temp = temp->Left;
        } else{
            temp = temp->Right;
        }
    }
    if(position == NULL)
    {
        Root = newnode;
    }else if(value < position->Value)
    {
        position->Left = newnode;
    } else{
        position->Right = newnode;
    }
    size++;
}
 */