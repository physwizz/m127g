/*
 * Copyright (C) 2010 Samsung Electronics.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MODEM_VARIATION_H__
#define __MODEM_VARIATION_H__

#include "modem_prj.h"

#define DECLARE_MODEM_INIT(type)					\
	int type ## _init_modemctl_device(				\
				struct modem_ctl *mc,			\
				struct modem_data *pdata)

#define DECLARE_MODEM_INIT_DUMMY(type)					\
	DECLARE_MODEM_INIT(type) { return 0; }

#define DECLARE_LINK_INIT()						\
	struct link_device *create_link_device(		\
				struct platform_device *pdev,		\
				enum modem_link link_type)

#define DECLARE_LINK_INIT_DUMMY()					\
	struct link_device *dummy_create_link_device(		\
				struct platform_device *pdev,		\
				enum modem_link link_type) { return NULL; }

#define MODEM_INIT_CALL(type)	type ## _init_modemctl_device

#define LINK_INIT_CALL()	create_link_device
#define LINK_INIT_CALL_DUMMY()	dummy_create_link_device


/**
 * Add extern declaration of modem & link type
 * (CAUTION!!! Every DUMMY function must be declared in modem_variation.c)
 */

/* modem device support */
#ifdef CONFIG_SEC_MODEM_S5000AP
DECLARE_MODEM_INIT(s5000ap);
#endif

#ifdef CONFIG_SEC_MODEM_S5100
DECLARE_MODEM_INIT(s5100);
#endif

/* link device support */
#if defined(CONFIG_LINK_DEVICE_SHMEM) || defined(CONFIG_LINK_DEVICE_PCIE)
DECLARE_LINK_INIT();
#endif

typedef int (*modem_init_call)(struct modem_ctl *, struct modem_data *);
typedef struct link_device *(*link_init_call)(struct platform_device *,
						enum modem_link link_type);

int call_modem_init_func(struct modem_ctl *mc, struct modem_data *pdata);

struct link_device *call_link_init_func(struct platform_device *pdev,
					       enum modem_link link_type);

#endif
