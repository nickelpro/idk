// =============================================================================
//
// ztd.cuneicode
// Copyright © 2021 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.cuneicode licenses may use this file
// in accordance with the commercial license agreement provided with the
// Software or, alternatively, in accordance with the terms contained in
// a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// 		http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================

#ifndef ZTD_IDK_ENCODING_DETECTION_H
#define ZTD_IDK_ENCODING_DETECTION_H

#pragma once

#include <ztd/idk/version.h>

#if ZTD_IS_ON(ZTD_C_I_)
#include <stdbool.h>
#endif // C++

ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ bool ztdc_is_execution_encoding_utf8(void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ bool ztdc_is_execution_encoding_unicode(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ bool ztdc_is_wide_execution_encoding_unicode(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ bool ztdc_is_wide_execution_encoding_utf8(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ bool ztdc_is_wide_execution_encoding_utf16(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ bool ztdc_is_wide_execution_encoding_utf32(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ const char* ztdc_literal_encoding_name(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ const char* ztdc_wide_literal_encoding_name(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ const char* ztdc_execution_encoding_name(
     void) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_IDK_C_LANGUAGE_LINKAGE_I_ ZTD_IDK_API_LINKAGE_I_ const char* ztdc_wide_execution_encoding_name(
     void) ZTD_NOEXCEPT_IF_CXX_I_;

#endif // ZTD_IDK_ENCODING_DETECTION_H
