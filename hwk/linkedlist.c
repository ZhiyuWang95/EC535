// Homework1 for EC535
// Copyright 2019 ZhiyuWang wangzy95@bu.edu

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct Node_t{
    char* data;
    struct Node_t* next;
};

bool headisgreater(char* headdata, char* data)
{
    while(headdata != '\0' && data != '\0')
    {
        if(*headdata == *data)
        {
            headdata++;
            data++;
        }else
        {
            return *headdata>*data;
        }
    }
    if(headdata != '\0')
        return false;
    if(data != '\0')
        return false;
    return true;
}

void insert(struct Node_t** head, char* data)
{
    struct Node_t* newnode = (struct Node_t*) malloc(sizeof(struct Node_t));
    newnode->data = data;
    newnode->next = NULL;
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }

    if(headisgreater((*head)->data, data))
    {
        newnode->next = (*head)->next;
        (*head)->next = newnode;

        char* temp = (*head)->data;
        (*head)->data = newnode->data;
        newnode->data = temp;
    }else if((*head)->next == NULL)
    {
        (*head)->next = newnode;
    }else
    {
        insert(&(*head)->next, data);
    }
}