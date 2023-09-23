#include <stdlib.h>
int *ft_range(int start, int end)
{
	int i = 0;
	int len;
	int *res;
	

	if(start < end)
		len = (end - start) + 1;
	else if (start < end)
		len =((end - start) + 1) * 1;
	
	res = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
        return (res);
}
#include <stdio.h>
int	main()
{
	int i = 0;
	int start = 0;
	int end	= -5;
	int *arr;

	arr = ft_range(start,end);
	while (i < 6)
	{
		printf("%d", arr[i++]);
	}
}