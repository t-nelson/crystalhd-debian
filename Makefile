
all: libraries
#all: driver/linux/configure driver libraries

#driver/linux/configure:
#	autoconf -o driver/linux/configure driver/linux/configure.ac

#driver: driver/linux/configure
#        cd driver/linux/ && ./configure
#        make -C driver/linux

libraries:
	make -C linux_lib/libcrystalhd

install: install-libs

#install-headers:
#	install -d include $(destdir)/usr/include

install-libs: libraries
	make install -C linux_lib/libcrystalhd DESTDIR=$(destdir)

