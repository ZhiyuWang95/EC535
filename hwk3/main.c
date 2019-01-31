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

int main(int argc, char* argv[]) {
    char* inputname = argv[1];
    char* outputname = argv[2];
    struct Node_t* head = NULL;

    FILE *fp, *fw;
    fp = fopen(inputname, "r");
    fw = fopen(outputname, "r");
    if(fp == NULL)
    {
        printf("File reading error!\n");
        return -1;
    }


    int i = 0;
    const char strings[100][30];
    char valuec[30];
    while(fgets(valuec, 30, fp) != NULL) {
        strcpy(strings[i++],valuec);
    }

    for(int j = 0;j < i; j++)
    {
        insert(&head, strings[j]);
    }

    while(head != NULL)
    {
        fputs((head)->data, fw);
        head = (head)->next;
    }

    fclose(fp);
    fclose(fw);
    return 0;
}