#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <limine.h>


// HCF = halt and catch fire
static void hcf(void) {
	for(;;) {
		asm("hlt");
	}
}

void kmain(void) {
// Ensure the bootloader actually understands our base revision (see spec).
   if (LIMINE_BASE_REVISION_SUPPORTED(limine_base_revision) == false) {
   	hcf();
   }	
}
