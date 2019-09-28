obj-m += oops.o
Kdir = "/home/shravan/work/am335x/buildroot-2019.02.5/output/build/linux-4796173fc58688055a99a1cef19a839174067220"

all:
	make -C $(Kdir) M=$(PWD) modules

clean:
	make -C $(Kdir) M=$(PWD) clean
