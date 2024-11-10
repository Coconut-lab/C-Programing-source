int main()
{
	char str[100];
	char temp;
	int i, flag = 0;

	printf("문자열을 입력하세요: ");
	scanf("%s", str);


	printf("찾을 문자를 입력하세요: ");
	scanf(" %c", &temp);

	printf("문자 '%c' 는 ", temp);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == temp)
		{
			flag = 1;
			printf("%d, ", i + 1);
		}
	}
	if (flag == 1)
	{
		printf("번째에 위치해 있습니다.\n", i);
	}
	else
	{
		printf("문자열 내에 존재하지 않습니다.\n");
	}

}