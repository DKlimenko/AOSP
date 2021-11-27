/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <aidl/android/hardware/vhal/BnVhal.h>

namespace aidl {
namespace android {
namespace hardware {
namespace vhalcustom {

struct Vhal : public BnVhal {
public:
    Vhal() = default;

    // Methods from ::android::hardware::weaver::IWeaver follow.
    ::ndk::ScopedAStatus init() override;
    ::ndk::ScopedAStatus setMode(uint32_t mode) override;
};

}  // namespace weaver
}  // namespace hardware
}  // namespace android
}  // namespace aidl
