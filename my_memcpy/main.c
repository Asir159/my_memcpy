#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//dest 目的地地址   src源文件， num字节数
void* my_memcpy(void* dest, const void* src, unsigned int num)
{
	//保存首元素地址
	void* ret = dest;

	if (src < dest)
	{
		while (num--)
		{
			((char*)dest)[num] = ((char*)src)[num];
		}
	}
	else
	{ 
	while(num--)
	{ 
	*(char*)dest = *(char*)src;
	((char*)dest)++;
	((char*)src)++;
	}
	}

	return dest;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[30];
	char* ret = arr1;
	memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr1, arr1 + 3, 16);
	memcpy(arr2, arr2 + 3, 16);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	
}