/******************************************************************************
 *
 * Copyright(c) 2007 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
#ifndef __DRV_TYPES_LINUX_H__
#define __DRV_TYPES_LINUX_H__

#if (LINUX_VERSION_CODE < KERNEL_VERSION(5, 15, 0))
#define dev_addr_set(netdev, ethdata) _rtw_memcpy(netdev->dev_addr, ethdata, ETH_ALEN)
#endif

#endif
