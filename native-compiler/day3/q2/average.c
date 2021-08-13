

#include<linux/init.h>
#include<linux/module.h>
#include "header.h"

static int a=20;
static int b=30;

static int average_init(void)
{
	int average;
	average=add(a,b)/2;
	printk("average of two numbers is :%d\n",average);
	return 0;
}
static void average_exit(void)
{
	printk("good bye\n");
}

module_init(average_init);
module_exit(average_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("RAMKI");



