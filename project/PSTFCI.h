//
// Created by abdelrhman on ١‏/٥‏/٢٠٢٠.
//
#include<stdlib.h>
#include <iostream>
using namespace std;

#ifndef PROJECT_PSTFCI_H
#define PROJECT_PSTFCI_H

template<class type>
class PSTNODE
{
public:
    type Value;
    PSTNODE<type>*Right;
    PSTNODE<type>*Left;
};

template<class type>
class PSTFCI {
private:
    PSTNODE<type> *Root;
    int size = 0;
    PSTNODE<type>* newNode(type value = NULL)
    {
        PSTNODE<type>* newnode = new PSTNODE<type>;
        newnode->Value= value;
        newnode->Left = newnode->Right = NULL;
        return newnode;
    }
public:
    PSTFCI()
    {
        Root = NULL;
        size = 0;
    }
    PSTNODE<type>* insert(type value)
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
    void InorderPrint()
    {
        Inorder(Root);
    }
    void Inorder(PSTNODE<type>* Root)
    {
        if (Root == NULL)
            return;
        else {
            Inorder(Root->Left);
            cout << Root->Value << " ";
            Inorder(Root->Right);
        }
    }
};


#endif //PROJECT_PSTFCI_H
