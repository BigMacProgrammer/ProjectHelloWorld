//
//  main.c
//  Hello World
//
//  Created by Darien So on 8/2/12.
//  Copyright (c) 2012 Nobody. All rights reserved.
//

#include <stdio.h>

void PrintHelloWorld(void);
void PrintUserName(char *name);

int main(int argc, const char * argv[])
{
    //Adding my first comment
    PrintHelloWorld();
    return 0;
}
void PrintHelloWorld(void)
{
    printf("Hello, World!");
}

void PrintUserName(char *name)
{
    printf("hello, %s",name);
}
