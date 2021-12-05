// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/context.proto

#include "google/api/context.pb.h"

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
constexpr Context::Context(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : rules_(){}
struct ContextDefaultTypeInternal {
  constexpr ContextDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ContextDefaultTypeInternal() {}
  union {
    Context _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ContextDefaultTypeInternal _Context_default_instance_;
constexpr ContextRule::ContextRule(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : requested_()
  , provided_()
  , allowed_request_extensions_()
  , allowed_response_extensions_()
  , selector_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct ContextRuleDefaultTypeInternal {
  constexpr ContextRuleDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ContextRuleDefaultTypeInternal() {}
  union {
    ContextRule _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ContextRuleDefaultTypeInternal _ContextRule_default_instance_;
}  // namespace api
}  // namespace google
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fcontext_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fcontext_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fcontext_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fcontext_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Context, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Context, rules_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::ContextRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::ContextRule, selector_),
  PROTOBUF_FIELD_OFFSET(::google::api::ContextRule, requested_),
  PROTOBUF_FIELD_OFFSET(::google::api::ContextRule, provided_),
  PROTOBUF_FIELD_OFFSET(::google::api::ContextRule, allowed_request_extensions_),
  PROTOBUF_FIELD_OFFSET(::google::api::ContextRule, allowed_response_extensions_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::Context)},
  { 6, -1, sizeof(::google::api::ContextRule)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Context_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_ContextRule_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fcontext_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030google/api/context.proto\022\ngoogle.api\"1"
  "\n\007Context\022&\n\005rules\030\001 \003(\0132\027.google.api.Co"
  "ntextRule\"\215\001\n\013ContextRule\022\020\n\010selector\030\001 "
  "\001(\t\022\021\n\trequested\030\002 \003(\t\022\020\n\010provided\030\003 \003(\t"
  "\022\"\n\032allowed_request_extensions\030\004 \003(\t\022#\n\033"
  "allowed_response_extensions\030\005 \003(\tBn\n\016com"
  ".google.apiB\014ContextProtoP\001ZEgoogle.gola"
  "ng.org/genproto/googleapis/api/serviceco"
  "nfig;serviceconfig\242\002\004GAPIb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fcontext_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fcontext_2eproto = {
  false, false, 353, descriptor_table_protodef_google_2fapi_2fcontext_2eproto, "google/api/context.proto", 
  &descriptor_table_google_2fapi_2fcontext_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_google_2fapi_2fcontext_2eproto::offsets,
  file_level_metadata_google_2fapi_2fcontext_2eproto, file_level_enum_descriptors_google_2fapi_2fcontext_2eproto, file_level_service_descriptors_google_2fapi_2fcontext_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2fapi_2fcontext_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fcontext_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fcontext_2eproto(&descriptor_table_google_2fapi_2fcontext_2eproto);
namespace google {
namespace api {

// ===================================================================

class Context::_Internal {
 public:
};

Context::Context(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  rules_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.api.Context)
}
Context::Context(const Context& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      rules_(from.rules_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Context)
}

inline void Context::SharedCtor() {
}

Context::~Context() {
  // @@protoc_insertion_point(destructor:google.api.Context)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Context::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Context::ArenaDtor(void* object) {
  Context* _this = reinterpret_cast< Context* >(object);
  (void)_this;
}
void Context::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Context::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Context::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Context)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rules_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Context::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .google.api.ContextRule rules = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rules(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Context::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Context)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.ContextRule rules = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rules_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_rules(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Context)
  return target;
}

size_t Context::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Context)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.ContextRule rules = 1;
  total_size += 1UL * this->_internal_rules_size();
  for (const auto& msg : this->rules_) {
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Context::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Context::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Context::GetClassData() const { return &_class_data_; }

void Context::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Context *>(to)->MergeFrom(
      static_cast<const Context &>(from));
}


void Context::MergeFrom(const Context& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Context)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  rules_.MergeFrom(from.rules_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Context::CopyFrom(const Context& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Context)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Context::IsInitialized() const {
  return true;
}

void Context::InternalSwap(Context* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  rules_.InternalSwap(&other->rules_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Context::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fapi_2fcontext_2eproto_getter, &descriptor_table_google_2fapi_2fcontext_2eproto_once,
      file_level_metadata_google_2fapi_2fcontext_2eproto[0]);
}

// ===================================================================

class ContextRule::_Internal {
 public:
};

ContextRule::ContextRule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  requested_(arena),
  provided_(arena),
  allowed_request_extensions_(arena),
  allowed_response_extensions_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.api.ContextRule)
}
ContextRule::ContextRule(const ContextRule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      requested_(from.requested_),
      provided_(from.provided_),
      allowed_request_extensions_(from.allowed_request_extensions_),
      allowed_response_extensions_(from.allowed_response_extensions_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_selector().empty()) {
    selector_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_selector(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.ContextRule)
}

inline void ContextRule::SharedCtor() {
selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ContextRule::~ContextRule() {
  // @@protoc_insertion_point(destructor:google.api.ContextRule)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ContextRule::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  selector_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ContextRule::ArenaDtor(void* object) {
  ContextRule* _this = reinterpret_cast< ContextRule* >(object);
  (void)_this;
}
void ContextRule::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ContextRule::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ContextRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ContextRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  requested_.Clear();
  provided_.Clear();
  allowed_request_extensions_.Clear();
  allowed_response_extensions_.Clear();
  selector_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ContextRule::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string selector = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_selector();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ContextRule.selector"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string requested = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_requested();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ContextRule.requested"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string provided = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_provided();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ContextRule.provided"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string allowed_request_extensions = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_allowed_request_extensions();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ContextRule.allowed_request_extensions"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string allowed_response_extensions = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_allowed_response_extensions();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.ContextRule.allowed_response_extensions"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* ContextRule::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ContextRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string selector = 1;
  if (!this->_internal_selector().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_selector().data(), static_cast<int>(this->_internal_selector().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.selector");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_selector(), target);
  }

  // repeated string requested = 2;
  for (int i = 0, n = this->_internal_requested_size(); i < n; i++) {
    const auto& s = this->_internal_requested(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.requested");
    target = stream->WriteString(2, s, target);
  }

  // repeated string provided = 3;
  for (int i = 0, n = this->_internal_provided_size(); i < n; i++) {
    const auto& s = this->_internal_provided(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.provided");
    target = stream->WriteString(3, s, target);
  }

  // repeated string allowed_request_extensions = 4;
  for (int i = 0, n = this->_internal_allowed_request_extensions_size(); i < n; i++) {
    const auto& s = this->_internal_allowed_request_extensions(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.allowed_request_extensions");
    target = stream->WriteString(4, s, target);
  }

  // repeated string allowed_response_extensions = 5;
  for (int i = 0, n = this->_internal_allowed_response_extensions_size(); i < n; i++) {
    const auto& s = this->_internal_allowed_response_extensions(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.allowed_response_extensions");
    target = stream->WriteString(5, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ContextRule)
  return target;
}

size_t ContextRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ContextRule)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string requested = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(requested_.size());
  for (int i = 0, n = requested_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      requested_.Get(i));
  }

  // repeated string provided = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(provided_.size());
  for (int i = 0, n = provided_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      provided_.Get(i));
  }

  // repeated string allowed_request_extensions = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(allowed_request_extensions_.size());
  for (int i = 0, n = allowed_request_extensions_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      allowed_request_extensions_.Get(i));
  }

  // repeated string allowed_response_extensions = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(allowed_response_extensions_.size());
  for (int i = 0, n = allowed_response_extensions_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      allowed_response_extensions_.Get(i));
  }

  // string selector = 1;
  if (!this->_internal_selector().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_selector());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ContextRule::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ContextRule::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ContextRule::GetClassData() const { return &_class_data_; }

void ContextRule::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ContextRule *>(to)->MergeFrom(
      static_cast<const ContextRule &>(from));
}


void ContextRule::MergeFrom(const ContextRule& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.ContextRule)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  requested_.MergeFrom(from.requested_);
  provided_.MergeFrom(from.provided_);
  allowed_request_extensions_.MergeFrom(from.allowed_request_extensions_);
  allowed_response_extensions_.MergeFrom(from.allowed_response_extensions_);
  if (!from._internal_selector().empty()) {
    _internal_set_selector(from._internal_selector());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ContextRule::CopyFrom(const ContextRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ContextRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ContextRule::IsInitialized() const {
  return true;
}

void ContextRule::InternalSwap(ContextRule* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  requested_.InternalSwap(&other->requested_);
  provided_.InternalSwap(&other->provided_);
  allowed_request_extensions_.InternalSwap(&other->allowed_request_extensions_);
  allowed_response_extensions_.InternalSwap(&other->allowed_response_extensions_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &selector_, GetArenaForAllocation(),
      &other->selector_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ContextRule::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fapi_2fcontext_2eproto_getter, &descriptor_table_google_2fapi_2fcontext_2eproto_once,
      file_level_metadata_google_2fapi_2fcontext_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Context* Arena::CreateMaybeMessage< ::google::api::Context >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::Context >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::ContextRule* Arena::CreateMaybeMessage< ::google::api::ContextRule >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::ContextRule >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
