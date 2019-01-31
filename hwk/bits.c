// Homework1 for EC535
// Copyright 2019 ZhiyuWang wangzy95@bu.edu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned int BinaryMirror(unsigned int value)
{
    char buffer[33] = {0};
    int num = 0;
    unsigned int mirror = 0;
    for(int i = 0; i < 32; i++)
    {
        buffer[i] = value%2 + '0';
        mirror += value%2*pow(2, 31-i);
        value = value/2;
        if((i > 0)&&(buffer[i] == '1'))
        {
            if(buffer[i-1] == '0')
                num++;
        }
    }
    return mirror;
}

unsigned int SequenceCount(unsigned int value)
{
    char last, cur;
    int num = 0;

    for(int i = 0; i < 32; i++)
    {
        cur = value%2 + '0';
        value = value/2;
        if((i > 0)&&(cur == '1'))
        {
            if(last == '0')
                num++;
        }
        last = cur;
    }
    return num;
}

void reverse(char* array, int length)
{
    for(int i = 0; i < length/2; i++)
    {
        char temp = array[i];
        array[i] = array[length-1-i];
        array[length-1-i] = temp;
    }
}