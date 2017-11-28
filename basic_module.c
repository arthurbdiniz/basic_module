// Minimal kernel module
// Arthur Diniz 15/0118457

#include <linux/init.h>
#include <linux/module.h>

static int __init
minimal_module_init(void) {
	

	printk("Basic module Init\n");
	
	return 0;
}

module_init(minimal_module_init);

static void __exit
minimal_module_exit(void) {
	printk("Exit, basic module\n");
}

module_exit(minimal_module_exit);

MODULE_LICENSE("");
MODULE_AUTHOR("");
MODULE_DESCRIPTION("Minimal module");
MODULE_VERSION("1.0");
