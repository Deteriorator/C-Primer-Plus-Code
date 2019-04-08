/*
4．编写一个程序，要求输入身高（以英寸为单位）和名字，然后以如下形式显示：
       Dabney, you are 6.208 feet tall
    使用float类型，使用/作为除号。如果您愿意，可以要求以厘米为单位输入身高，并以米为单位进行显示。
*/

# include <stdio.h>

int main(){
	char name[10];
	float height;
	printf("Please input your name: ");
	scanf("%s", name);
	printf("please input your height(inch): ");
	scanf("%f", &height);
	printf("%s, you are %.3f feet tall.\n", name, height);
	printf("please input your height(cm): ");
	scanf("%f", &height);
	printf("%s, you are %.2f meter tall.\n", name, height / 100);
	getchar();
	getchar();
	return 0;
}

