#include <linux/module.h>
#include <linux/kernel.h>

int init_module() {
    printk(KERN_INFO "Demo module loaded\n"); //kernel log, kernel info level
    return 0;
}

void cleanup_module() {
    printk(KERN_INFO "Demo module unloaded\n");
}