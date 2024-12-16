	#include <stdio.h>

struct train
{
	int num;
	char station[10];
	struct train* link;
};

int main(void)
{
	struct train line[4] = { { 01, "Seoul", NULL }, { 02, "Daejeon", NULL }, { 03, "Daegu", NULL }, { 04, "Busan", NULL } };
	struct train* p = NULL;
	int i;

	p = line;

	for (i = 0; i < sizeof(line) / sizeof(struct train) - 1; i++)
		line[i].link = line + (i + 1);

	printf("%d번째 역: %s -> ", p->num, p->station);
	printf("%d번째 역: %s\n-> ", p->link->num, p->link->station);
	printf("%d번째 역: %s -> ", p->link->link->num, p->link->link->station);
	printf("%d번째 역: %s\n", p->link->link->link->num, p->link->link->link->station);

	return 0;
}
