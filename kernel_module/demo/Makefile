obj-m += demo.o

# Default ARCH and CROSS_COMPILE: x64 native
ARCH ?= x86_64
CROSS_COMPILE ?=

all:
	make -C /lib/modules/$(KERNEL_VERSION)/build M=$(PWD) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) modules

clean:
	make -C /lib/modules/$(KERNEL_VERSION)/build M=$(PWD) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) clean
	rm -r .*.cmd *.mod *.o *.order