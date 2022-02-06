// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/label.proto

#include "google/api/label.pb.h"

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
constexpr LabelDescriptor::LabelDescriptor(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : key_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , description_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , value_type_(0)
{}
struct LabelDescriptorDefaultTypeInternal {
  constexpr LabelDescriptorDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LabelDescriptorDefaultTypeInternal() {}
  union {
    LabelDescriptor _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LabelDescriptorDefaultTypeInternal _LabelDescriptor_default_instance_;
}  // namespace api
}  // namespace google
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2flabel_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2flabel_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2flabel_2eproto = nullptr;

const uint32_t TableStruct_google_2fapi_2flabel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, key_),
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, value_type_),
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, description_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::api::LabelDescriptor)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_LabelDescriptor_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2flabel_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026google/api/label.proto\022\ngoogle.api\"\234\001\n"
  "\017LabelDescriptor\022\013\n\003key\030\001 \001(\t\0229\n\nvalue_t"
  "ype\030\002 \001(\0162%.google.api.LabelDescriptor.V"
  "alueType\022\023\n\013description\030\003 \001(\t\",\n\tValueTy"
  "pe\022\n\n\006STRING\020\000\022\010\n\004BOOL\020\001\022\t\n\005INT64\020\002B_\n\016c"
  "om.google.apiB\nLabelProtoP\001Z5google.gola"
  "ng.org/genproto/googleapis/api/label;lab"
  "el\370\001\001\242\002\004GAPIb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2flabel_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2flabel_2eproto = {
  false, false, 300, descriptor_table_protodef_google_2fapi_2flabel_2eproto, "google/api/label.proto", 
  &descriptor_table_google_2fapi_2flabel_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_google_2fapi_2flabel_2eproto::offsets,
  file_level_metadata_google_2fapi_2flabel_2eproto, file_level_enum_descriptors_google_2fapi_2flabel_2eproto, file_level_service_descriptors_google_2fapi_2flabel_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2fapi_2flabel_2eproto_getter() {
  return &descriptor_table_google_2fapi_2flabel_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2flabel_2eproto(&descriptor_table_google_2fapi_2flabel_2eproto);
namespace google {
namespace api {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LabelDescriptor_ValueType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2flabel_2eproto);
  return file_level_enum_descriptors_google_2fapi_2flabel_2eproto[0];
}
bool LabelDescriptor_ValueType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr LabelDescriptor_ValueType LabelDescriptor::STRING;
constexpr LabelDescriptor_ValueType LabelDescriptor::BOOL;
constexpr LabelDescriptor_ValueType LabelDescriptor::INT64;
constexpr LabelDescriptor_ValueType LabelDescriptor::ValueType_MIN;
constexpr LabelDescriptor_ValueType LabelDescriptor::ValueType_MAX;
constexpr int LabelDescriptor::ValueType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class LabelDescriptor::_Internal {
 public:
};

LabelDescriptor::LabelDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.api.LabelDescriptor)
}
LabelDescriptor::LabelDescriptor(const LabelDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_key().empty()) {
    key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_key(), 
      GetArenaForAllocation());
  }
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_description().empty()) {
    description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_description(), 
      GetArenaForAllocation());
  }
  value_type_ = from.value_type_;
  // @@protoc_insertion_point(copy_constructor:google.api.LabelDescriptor)
}

inline void LabelDescriptor::SharedCtor() {
key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
value_type_ = 0;
}

LabelDescriptor::~LabelDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.LabelDescriptor)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LabelDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LabelDescriptor::ArenaDtor(void* object) {
  LabelDescriptor* _this = reinterpret_cast< LabelDescriptor* >(object);
  (void)_this;
}
void LabelDescriptor::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LabelDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LabelDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.LabelDescriptor)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmpty();
  description_.ClearToEmpty();
  value_type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LabelDescriptor::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.LabelDescriptor.key"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.api.LabelDescriptor.ValueType value_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_value_type(static_cast<::google::api::LabelDescriptor_ValueType>(val));
        } else
          goto handle_unusual;
        continue;
      // string description = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.LabelDescriptor.description"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LabelDescriptor::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.LabelDescriptor)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_key().data(), static_cast<int>(this->_internal_key().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.key");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_key(), target);
  }

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  if (this->_internal_value_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_value_type(), target);
  }

  // string description = 3;
  if (!this->_internal_description().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.description");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_description(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.LabelDescriptor)
  return target;
}

size_t LabelDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.LabelDescriptor)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_key());
  }

  // string description = 3;
  if (!this->_internal_description().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  if (this->_internal_value_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_value_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LabelDescriptor::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LabelDescriptor::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LabelDescriptor::GetClassData() const { return &_class_data_; }

void LabelDescriptor::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LabelDescriptor *>(to)->MergeFrom(
      static_cast<const LabelDescriptor &>(from));
}


void LabelDescriptor::MergeFrom(const LabelDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.LabelDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_key().empty()) {
    _internal_set_key(from._internal_key());
  }
  if (!from._internal_description().empty()) {
    _internal_set_description(from._internal_description());
  }
  if (from._internal_value_type() != 0) {
    _internal_set_value_type(from._internal_value_type());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LabelDescriptor::CopyFrom(const LabelDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.LabelDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LabelDescriptor::IsInitialized() const {
  return true;
}

void LabelDescriptor::InternalSwap(LabelDescriptor* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &key_, lhs_arena,
      &other->key_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &description_, lhs_arena,
      &other->description_, rhs_arena
  );
  swap(value_type_, other->value_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LabelDescriptor::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fapi_2flabel_2eproto_getter, &descriptor_table_google_2fapi_2flabel_2eproto_once,
      file_level_metadata_google_2fapi_2flabel_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::LabelDescriptor* Arena::CreateMaybeMessage< ::google::api::LabelDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::LabelDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
