// hiredisDLLTest.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include "kokohiredis.h"

int main()
{
	koko::hiredis redis;
	std::cout<<redis.set("test", "134");

	getchar();
    return 0;
}