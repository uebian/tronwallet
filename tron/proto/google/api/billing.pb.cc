// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/billing.proto

#include "google/api/billing.pb.h"

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
constexpr Billing_BillingDestination::Billing_BillingDestination(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : metrics_()
  , monitored_resource_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct Billing_BillingDestinationDefaultTypeInternal {
  constexpr Billing_BillingDestinationDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~Billing_BillingDestinationDefaultTypeInternal() {}
  union {
    Billing_BillingDestination _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT Billing_BillingDestinationDefaultTypeInternal _Billing_BillingDestination_default_instance_;
constexpr Billing::Billing(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : consumer_destinations_(){}
struct BillingDefaultTypeInternal {
  constexpr BillingDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~BillingDefaultTypeInternal() {}
  union {
    Billing _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT BillingDefaultTypeInternal _Billing_default_instance_;
}  // namespace api
}  // namespace google
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fbilling_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fbilling_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fbilling_2eproto = nullptr;

const uint32_t TableStruct_google_2fapi_2fbilling_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Billing_BillingDestination, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::Billing_BillingDestination, monitored_resource_),
  PROTOBUF_FIELD_OFFSET(::google::api::Billing_BillingDestination, metrics_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Billing, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::Billing, consumer_destinations_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::api::Billing_BillingDestination)},
  { 8, -1, -1, sizeof(::google::api::Billing)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Billing_BillingDestination_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Billing_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fbilling_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030google/api/billing.proto\022\ngoogle.api\032\027"
  "google/api/metric.proto\"\223\001\n\007Billing\022E\n\025c"
  "onsumer_destinations\030\010 \003(\0132&.google.api."
  "Billing.BillingDestination\032A\n\022BillingDes"
  "tination\022\032\n\022monitored_resource\030\001 \001(\t\022\017\n\007"
  "metrics\030\002 \003(\tBn\n\016com.google.apiB\014Billing"
  "ProtoP\001ZEgoogle.golang.org/genproto/goog"
  "leapis/api/serviceconfig;serviceconfig\242\002"
  "\004GAPIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fbilling_2eproto_deps[1] = {
  &::descriptor_table_google_2fapi_2fmetric_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fbilling_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fbilling_2eproto = {
  false, false, 333, descriptor_table_protodef_google_2fapi_2fbilling_2eproto, "google/api/billing.proto", 
  &descriptor_table_google_2fapi_2fbilling_2eproto_once, descriptor_table_google_2fapi_2fbilling_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_google_2fapi_2fbilling_2eproto::offsets,
  file_level_metadata_google_2fapi_2fbilling_2eproto, file_level_enum_descriptors_google_2fapi_2fbilling_2eproto, file_level_service_descriptors_google_2fapi_2fbilling_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2fapi_2fbilling_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fbilling_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fbilling_2eproto(&descriptor_table_google_2fapi_2fbilling_2eproto);
namespace google {
namespace api {

// ===================================================================

class Billing_BillingDestination::_Internal {
 public:
};

Billing_BillingDestination::Billing_BillingDestination(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  metrics_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.api.Billing.BillingDestination)
}
Billing_BillingDestination::Billing_BillingDestination(const Billing_BillingDestination& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      metrics_(from.metrics_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  monitored_resource_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    monitored_resource_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_monitored_resource().empty()) {
    monitored_resource_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_monitored_resource(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.Billing.BillingDestination)
}

inline void Billing_BillingDestination::SharedCtor() {
monitored_resource_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  monitored_resource_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Billing_BillingDestination::~Billing_BillingDestination() {
  // @@protoc_insertion_point(destructor:google.api.Billing.BillingDestination)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Billing_BillingDestination::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  monitored_resource_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Billing_BillingDestination::ArenaDtor(void* object) {
  Billing_BillingDestination* _this = reinterpret_cast< Billing_BillingDestination* >(object);
  (void)_this;
}
void Billing_BillingDestination::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Billing_BillingDestination::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Billing_BillingDestination::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Billing.BillingDestination)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metrics_.Clear();
  monitored_resource_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Billing_BillingDestination::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string monitored_resource = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_monitored_resource();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.Billing.BillingDestination.monitored_resource"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string metrics = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_metrics();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.Billing.BillingDestination.metrics"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* Billing_BillingDestination::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Billing.BillingDestination)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string monitored_resource = 1;
  if (!this->_internal_monitored_resource().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_monitored_resource().data(), static_cast<int>(this->_internal_monitored_resource().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Billing.BillingDestination.monitored_resource");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_monitored_resource(), target);
  }

  // repeated string metrics = 2;
  for (int i = 0, n = this->_internal_metrics_size(); i < n; i++) {
    const auto& s = this->_internal_metrics(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Billing.BillingDestination.metrics");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Billing.BillingDestination)
  return target;
}

size_t Billing_BillingDestination::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Billing.BillingDestination)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string metrics = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(metrics_.size());
  for (int i = 0, n = metrics_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      metrics_.Get(i));
  }

  // string monitored_resource = 1;
  if (!this->_internal_monitored_resource().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_monitored_resource());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Billing_BillingDestination::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Billing_BillingDestination::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Billing_BillingDestination::GetClassData() const { return &_class_data_; }

void Billing_BillingDestination::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Billing_BillingDestination *>(to)->MergeFrom(
      static_cast<const Billing_BillingDestination &>(from));
}


void Billing_BillingDestination::MergeFrom(const Billing_BillingDestination& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Billing.BillingDestination)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  metrics_.MergeFrom(from.metrics_);
  if (!from._internal_monitored_resource().empty()) {
    _internal_set_monitored_resource(from._internal_monitored_resource());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Billing_BillingDestination::CopyFrom(const Billing_BillingDestination& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Billing.BillingDestination)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Billing_BillingDestination::IsInitialized() const {
  return true;
}

void Billing_BillingDestination::InternalSwap(Billing_BillingDestination* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  metrics_.InternalSwap(&other->metrics_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &monitored_resource_, lhs_arena,
      &other->monitored_resource_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Billing_BillingDestination::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fapi_2fbilling_2eproto_getter, &descriptor_table_google_2fapi_2fbilling_2eproto_once,
      file_level_metadata_google_2fapi_2fbilling_2eproto[0]);
}

// ===================================================================

class Billing::_Internal {
 public:
};

Billing::Billing(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  consumer_destinations_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.api.Billing)
}
Billing::Billing(const Billing& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      consumer_destinations_(from.consumer_destinations_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Billing)
}

inline void Billing::SharedCtor() {
}

Billing::~Billing() {
  // @@protoc_insertion_point(destructor:google.api.Billing)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Billing::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Billing::ArenaDtor(void* object) {
  Billing* _this = reinterpret_cast< Billing* >(object);
  (void)_this;
}
void Billing::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Billing::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Billing::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Billing)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  consumer_destinations_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Billing::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .google.api.Billing.BillingDestination consumer_destinations = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_consumer_destinations(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
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

uint8_t* Billing::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Billing)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.Billing.BillingDestination consumer_destinations = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_consumer_destinations_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, this->_internal_consumer_destinations(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Billing)
  return target;
}

size_t Billing::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Billing)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.Billing.BillingDestination consumer_destinations = 8;
  total_size += 1UL * this->_internal_consumer_destinations_size();
  for (const auto& msg : this->consumer_destinations_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Billing::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Billing::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Billing::GetClassData() const { return &_class_data_; }

void Billing::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Billing *>(to)->MergeFrom(
      static_cast<const Billing &>(from));
}


void Billing::MergeFrom(const Billing& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Billing)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  consumer_destinations_.MergeFrom(from.consumer_destinations_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Billing::CopyFrom(const Billing& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Billing)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Billing::IsInitialized() const {
  return true;
}

void Billing::InternalSwap(Billing* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  consumer_destinations_.InternalSwap(&other->consumer_destinations_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Billing::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fapi_2fbilling_2eproto_getter, &descriptor_table_google_2fapi_2fbilling_2eproto_once,
      file_level_metadata_google_2fapi_2fbilling_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Billing_BillingDestination* Arena::CreateMaybeMessage< ::google::api::Billing_BillingDestination >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::Billing_BillingDestination >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::Billing* Arena::CreateMaybeMessage< ::google::api::Billing >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::Billing >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
