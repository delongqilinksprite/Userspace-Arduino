/*
 * Copyright (c) 2013 by Anuj Deshpande <anujdeshpande92@gmail.com>
 * SPI Library for Userspace Arduino
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 */
#ifndef _SPI_H
#define _SPI_H
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

class SPIClass {
		int ret;
		int fd;
		const char *device;
		int bitOrder;
		struct spi_ioc_transfer tr;
public:
		SPIClass();
		char transfer(char _data);
		void begin();
		void end();
		void setBitOrder(uint8_t);
		void setDataMode(uint8_t);
		void setClockDivider(uint8_t);
};
extern SPIClass SPI;
#endif
