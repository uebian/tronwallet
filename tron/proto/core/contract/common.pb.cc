// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: core/contract/common.proto

#include "core/contract/common.pb.h"

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
namespace protocol {
}  // namespace protocol
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_core_2fcontract_2fcommon_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_core_2fcontract_2fcommon_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_core_2fcontract_2fcommon_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_core_2fcontract_2fcommon_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032core/contract/common.proto\022\010protocol*9"
  "\n\014ResourceCode\022\r\n\tBANDWIDTH\020\000\022\n\n\006ENERGY\020"
  "\001\022\016\n\nTRON_POWER\020\002BE\n\030org.tron.protos.con"
  "tractZ)github.com/tronprotocol/grpc-gate"
  "way/coreb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_core_2fcontract_2fcommon_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_core_2fcontract_2fcommon_2eproto = {
  false, false, 176, descriptor_table_protodef_core_2fcontract_2fcommon_2eproto, "core/contract/common.proto", 
  &descriptor_table_core_2fcontract_2fcommon_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_core_2fcontract_2fcommon_2eproto::offsets,
  nullptr, file_level_enum_descriptors_core_2fcontract_2fcommon_2eproto, file_level_service_descriptors_core_2fcontract_2fcommon_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_core_2fcontract_2fcommon_2eproto_getter() {
  return &descriptor_table_core_2fcontract_2fcommon_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_core_2fcontract_2fcommon_2eproto(&descriptor_table_core_2fcontract_2fcommon_2eproto);
namespace protocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ResourceCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_core_2fcontract_2fcommon_2eproto);
  return file_level_enum_descriptors_core_2fcontract_2fcommon_2eproto[0];
}
bool ResourceCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
