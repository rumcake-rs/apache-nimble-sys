/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef _NIMBLE_NPL_OS_H_
#define _NIMBLE_NPL_OS_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define BLE_NPL_OS_ALIGNMENT 4

#define BLE_NPL_TIME_FOREVER UINT32_MAX

typedef uint32_t ble_npl_time_t;
typedef int32_t ble_npl_stime_t;

/*
 * Note: Rust bindings for the types below do not get generated (blocked in
 * build.rs), since we implement these ourselves in lib.rs. This is only to
 * avoid errors for the purpose of generating the rest of the bindings.
 */

struct ble_npl_event {
  uint8_t dummy;
};

struct ble_npl_eventq {
  uint8_t dummy;
};

struct ble_npl_callout {
  uint8_t dummy;
};

struct ble_npl_mutex {
  uint8_t dummy;
};

struct ble_npl_sem {
  uint8_t dummy;
};

#ifdef __cplusplus
}
#endif

#endif /* _NPL_H_ */
