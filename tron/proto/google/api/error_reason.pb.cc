// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/error_reason.proto

#include "google/api/error_reason.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace google {
namespace api {
}  // namespace api
}  // namespace google
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2ferror_5freason_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2ferror_5freason_2eproto = nullptr;
const uint32_t TableStruct_google_2fapi_2ferror_5freason_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2fapi_2ferror_5freason_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035google/api/error_reason.proto\022\ngoogle."
  "api*\304\004\n\013ErrorReason\022\034\n\030ERROR_REASON_UNSP"
  "ECIFIED\020\000\022\024\n\020SERVICE_DISABLED\020\001\022\024\n\020BILLI"
  "NG_DISABLED\020\002\022\023\n\017API_KEY_INVALID\020\003\022\033\n\027AP"
  "I_KEY_SERVICE_BLOCKED\020\004\022!\n\035API_KEY_HTTP_"
  "REFERRER_BLOCKED\020\007\022\036\n\032API_KEY_IP_ADDRESS"
  "_BLOCKED\020\010\022\037\n\033API_KEY_ANDROID_APP_BLOCKE"
  "D\020\t\022\033\n\027API_KEY_IOS_APP_BLOCKED\020\r\022\027\n\023RATE"
  "_LIMIT_EXCEEDED\020\005\022\033\n\027RESOURCE_QUOTA_EXCE"
  "EDED\020\006\022 \n\034LOCATION_TAX_POLICY_VIOLATED\020\n"
  "\022\027\n\023USER_PROJECT_DENIED\020\013\022\026\n\022CONSUMER_SU"
  "SPENDED\020\014\022\024\n\020CONSUMER_INVALID\020\016\022\034\n\030SECUR"
  "ITY_POLICY_VIOLATED\020\017\022\030\n\024ACCESS_TOKEN_EX"
  "PIRED\020\020\022#\n\037ACCESS_TOKEN_SCOPE_INSUFFICIE"
  "NT\020\021\022\031\n\025ACCOUNT_STATE_INVALID\020\022\022!\n\035ACCES"
  "S_TOKEN_TYPE_UNSUPPORTED\020\023Bp\n\016com.google"
  ".apiB\020ErrorReasonProtoP\001ZCgoogle.golang."
  "org/genproto/googleapis/api/error_reason"
  ";error_reason\242\002\004GAPIb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2ferror_5freason_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2ferror_5freason_2eproto = {
  false, false, 748, descriptor_table_protodef_google_2fapi_2ferror_5freason_2eproto, "google/api/error_reason.proto", 
  &descriptor_table_google_2fapi_2ferror_5freason_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_google_2fapi_2ferror_5freason_2eproto::offsets,
  nullptr, file_level_enum_descriptors_google_2fapi_2ferror_5freason_2eproto, file_level_service_descriptors_google_2fapi_2ferror_5freason_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2fapi_2ferror_5freason_2eproto_getter() {
  return &descriptor_table_google_2fapi_2ferror_5freason_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2ferror_5freason_2eproto(&descriptor_table_google_2fapi_2ferror_5freason_2eproto);
namespace google {
namespace api {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorReason_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2ferror_5freason_2eproto);
  return file_level_enum_descriptors_google_2fapi_2ferror_5freason_2eproto[0];
}
bool ErrorReason_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
