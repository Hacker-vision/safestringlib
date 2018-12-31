/*------------------------------------------------------------------
 * test_memcpy_s
 *
 *
 *------------------------------------------------------------------
 */

#include "unittests/test_private.h"
#include "include/safe_mem_lib.h"

#define LEN   ( 10 )

static uint8_t  mem1[LEN+2];
static uint8_t  mem2[LEN+2];

int main(void)
{
	int i = 0;
	for(i = 0;i < LEN;++ i) mem1[i] = i+1;
	memcpy_s(mem2,LEN,mem1,LEN);
	for(i = 0;i < LEN;++ i) printf("%d ",mem2[i]); printf("\n");
	for(i = 0;i < LEN;++ i) mem1[i] = LEN - i;
	memcpy(mem2,mem1,LEN);
	for(i = 0;i < LEN;++ i) printf("%d ",mem2[i]);
	printf("\n");
	return 0;
}
