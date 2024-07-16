#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <stdio.h>
#include <Windows.h>

void main()
{
	system("taskkill /f /t /im StudentMain.exe");
	while (true)
	{
		printf("Enter -1 to exit , enter 0 to try again\n");
		int c;
		scanf("%d", &c);
		if (c == -1)
		{
			return;
		}
		else
		{
			system("taskkill /f /t /im StudentMain.exe");
		}
	}
}