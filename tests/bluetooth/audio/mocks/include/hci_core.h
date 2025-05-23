/*
 * Copyright (c) 2025 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MOCKS_HCI_CORE_H_
#define MOCKS_HCI_CORE_H_

#include <stdbool.h>
#include <stdint.h>

#include <zephyr/bluetooth/addr.h>
#include <zephyr/fff.h>

bool bt_le_bond_exists(uint8_t id, const bt_addr_le_t *addr);
#endif /* MOCKS_HCI_CORE_H_ */
