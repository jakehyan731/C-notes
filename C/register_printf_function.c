#include <stdio.h>
#include <stdint.h>
#include <printf.h>

static int printf_arginfo_M(const struct printf_info *info, size_t n, int *argtypes)
{
	if (n > 0) 
		argtypes[0] = PA_POINTER;

	return 1;
}

static int printf_output_M(FILE *stream, const struct printf_info *info, const void *const *args) 
{
	const unsigned char *mac;
	int len;

	mac = *(unsigned char **)(args[0]);

	len = fprintf(stream, "%02x:%02x:%02x:%02x:%02x:%02x",
			mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);

	return len;
}

static int printf_arginfo_B(const struct printf_info *info, size_t n, int *argtypes)
{
	if (n > 0) 
		argtypes[0] = PA_POINTER;

	return 1;
}

static int printf_output_B(FILE *stream, const struct printf_info *info, const void *const *args) 
{
	uint8_t val = *(int*)(args[0]);

	for (int i=7; i>=0; i--)
		fprintf(stream, "%d", (val>>i)&1);

	return 8;
}

int main()
{
	uint8_t mac[6] = { 0x00, 0x11, 0x22, 0x33, 0x44, 0x55 };
	
	register_printf_function ('M', printf_output_M, printf_arginfo_M);
	register_printf_function ('B', printf_output_B, printf_arginfo_B);

	printf("%M\n", mac);
	printf("%B\n", 0xab);

	return 0;
};

