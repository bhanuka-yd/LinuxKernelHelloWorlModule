#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int hello_init(void){
	pr_notice("Hello This is my first Linux Kernel Module\n");
	return 0;
}

static void hello_exit(void){
	pr_notice("This is my second message\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("Proprietary");
MODULE_AUTHOR("Bhanuka Yd");
MODULE_DESCRIPTION("A Simple Hello World Module");
