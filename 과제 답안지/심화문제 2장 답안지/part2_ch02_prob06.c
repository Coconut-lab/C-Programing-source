int main()
{
	char str[100];
	char temp;
	int i, flag = 0;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);


	printf("ã�� ���ڸ� �Է��ϼ���: ");
	scanf(" %c", &temp);

	printf("���� '%c' �� ", temp);

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
		printf("��°�� ��ġ�� �ֽ��ϴ�.\n", i);
	}
	else
	{
		printf("���ڿ� ���� �������� �ʽ��ϴ�.\n");
	}

}