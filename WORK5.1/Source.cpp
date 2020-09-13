#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char* p, str[100];
int main(){
	p = str;
	scanf("%s", str, 99);//ป้อนได้ไม่เกิน9ตัว
	while (*p != '\0') {
		if (*p >= 65 && *p <= 90) {
			printf("%c", *p);
		}
		if (*p >= 97 && *p <= 122) {
			printf("%c", *p);
		}
			p++;
	}

}