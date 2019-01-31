// Homework1 for EC535
// Copyright 2019 ZhiyuWang wangzy95@bu.edu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bits.h"
#include "bits.c"//bits.c according to hwk requirement.
#include "linkedlist.c"//implemented a linkedlist, which could sort according to val.

int main(int agrc, char* argv[]) {
    char* inputname = argv[1];
    char* outputname = argv[2];

    unsigned int mirror, num, value;
    struct Node_t* head = NULL;//linked list head

    FILE *fp, *fw;
    fp = fopen(inputname, "r");
    if(fp == NULL)
    {
        printf("File reading error!\n");
        return -1;
    }

    fw = fopen(outputname, "w+");

    // to assign the output array.
    char valuec[11], mirrorc[33];
    char strings[100][33];
    int string_index = 0;
    while(fgets(valuec, 13, fp) != NULL)
    {
        value = atoi(valuec);//convert
        mirror = BinaryMirror(value);
        num = SequenceCount(value);
        int i = 0;
        if(num == 0)
            mirrorc[i++] = '0';
        while((i< 32) && (num > 0))
        {
            mirrorc[i] = "0123456789"[num%10];
            num /= 10;
            i++;
        }
        mirrorc[i++] = '\t';
        while((i < 32) && (mirror > 0))
        {
            mirrorc[i] = "0123456789"[mirror%10];
            mirror /= 10;
            i++;
        }
        mirrorc[i] = '\n';

        int length = i++;

        while(i<32)
            mirrorc[i++] = '\0';//remove all data behind.
        reverse(mirrorc, length);

        strcpy(strings[string_index++],mirrorc);
    }

    for(int j = 0;j < string_index; j++)
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