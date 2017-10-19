/*
 * Copyright (c) 2017 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "spark_wiring_platform.h"

#if Wiring_RetainedMemory

#include "platform_headers.h"

#if defined(PARTICLE_USER_MODULE)
#define PARTICLE_RETAINED retained
#else
#define PARTICLE_RETAINED retained_system
#endif

#endif // Wiring_RetainedMemory

#if defined(PARTICLE_USER_MODULE) && !defined(PARTICLE_USING_DEPRECATED_API)
#define PARTICLE_DEPRECATED_API(_msg) \
        __attribute__((deprecated(_msg " Define PARTICLE_USING_DEPRECATED_API macro to avoid this warning.")))
#else
#define PARTICLE_DEPRECATED_API(_msg)
#endif
