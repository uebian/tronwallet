// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/source_info.proto

#include "google/api/source_info.pb.h"

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
constexpr SourceInfo::SourceInfo(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : source_files_(){}
struct SourceInfoDefaultTypeInternal {
  constexpr SourceInfoDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SourceInfoDefaultTypeInternal() {}
  union {
    SourceInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SourceInfoDefaultTypeInternal _SourceInfo_default_instance_;
}  // namespace api
}  // namespace google
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fsource_5finfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fsource_5finfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fsource_5finfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fsource_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::SourceInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::SourceInfo, source_files_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::SourceInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_SourceInfo_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fsource_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034google/api/source_info.proto\022\ngoogle.a"
  "pi\032\031google/protobuf/any.proto\"8\n\nSourceI"
  "nfo\022*\n\014source_files\030\001 \003(\0132\024.google.proto"
  "buf.AnyBq\n\016com.google.apiB\017SourceInfoPro"
  "toP\001ZEgoogle.golang.org/genproto/googlea"
  "pis/api/serviceconfig;serviceconfig\242\002\004GA"
  "PIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fsource_5finfo_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fsource_5finfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fsource_5finfo_2eproto = {
  false, false, 250, descriptor_table_protodef_google_2fapi_2fsource_5finfo_2eproto, "google/api/source_info.proto", 
  &descriptor_table_google_2fapi_2fsource_5finfo_2eproto_once, descriptor_table_google_2fapi_2fsource_5finfo_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_google_2fapi_2fsource_5finfo_2eproto::offsets,
  file_level_metadata_google_2fapi_2fsource_5finfo_2eproto, file_level_enum_descriptors_google_2fapi_2fsource_5finfo_2eproto, file_level_service_descriptors_google_2fapi_2fsource_5finfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2fapi_2fsource_5finfo_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fsource_5finfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fsource_5finfo_2eproto(&descriptor_table_google_2fapi_2fsource_5finfo_2eproto);
namespace google {
namespace api {

// ===================================================================

class SourceInfo::_Internal {
 public:
};

void SourceInfo::clear_source_files() {
  source_files_.Clear();
}
SourceInfo::SourceInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  source_files_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.api.SourceInfo)
}
SourceInfo::SourceInfo(const SourceInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      source_files_(from.source_files_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.SourceInfo)
}

inline void SourceInfo::SharedCtor() {
}

SourceInfo::~SourceInfo() {
  // @@protoc_insertion_point(destructor:google.api.SourceInfo)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SourceInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SourceInfo::ArenaDtor(void* object) {
  SourceInfo* _this = reinterpret_cast< SourceInfo* >(object);
  (void)_this;
}
void SourceInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SourceInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SourceInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.SourceInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  source_files_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SourceInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .google.protobuf.Any source_files = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_source_files(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SourceInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.SourceInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.Any source_files = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_source_files_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_source_files(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.SourceInfo)
  return target;
}

size_t SourceInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.SourceInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Any source_files = 1;
  total_size += 1UL * this->_internal_source_files_size();
  for (const auto& msg : this->source_files_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SourceInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SourceInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SourceInfo::GetClassData() const { return &_class_data_; }

void SourceInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<SourceInfo *>(to)->MergeFrom(
      static_cast<const SourceInfo &>(from));
}


void SourceInfo::MergeFrom(const SourceInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.SourceInfo)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  source_files_.MergeFrom(from.source_files_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SourceInfo::CopyFrom(const SourceInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.SourceInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceInfo::IsInitialized() const {
  return true;
}

void SourceInfo::InternalSwap(SourceInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  source_files_.InternalSwap(&other->source_files_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SourceInfo::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fapi_2fsource_5finfo_2eproto_getter, &descriptor_table_google_2fapi_2fsource_5finfo_2eproto_once,
      file_level_metadata_google_2fapi_2fsource_5finfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::SourceInfo* Arena::CreateMaybeMessage< ::google::api::SourceInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::SourceInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
