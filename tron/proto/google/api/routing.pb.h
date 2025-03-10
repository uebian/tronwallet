// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/routing.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2frouting_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2frouting_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2frouting_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2frouting_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2frouting_2eproto;
namespace google {
namespace api {
class RoutingParameter;
struct RoutingParameterDefaultTypeInternal;
extern RoutingParameterDefaultTypeInternal _RoutingParameter_default_instance_;
class RoutingRule;
struct RoutingRuleDefaultTypeInternal;
extern RoutingRuleDefaultTypeInternal _RoutingRule_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::RoutingParameter* Arena::CreateMaybeMessage<::google::api::RoutingParameter>(Arena*);
template<> ::google::api::RoutingRule* Arena::CreateMaybeMessage<::google::api::RoutingRule>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class RoutingRule final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.RoutingRule) */ {
 public:
  inline RoutingRule() : RoutingRule(nullptr) {}
  ~RoutingRule() override;
  explicit constexpr RoutingRule(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RoutingRule(const RoutingRule& from);
  RoutingRule(RoutingRule&& from) noexcept
    : RoutingRule() {
    *this = ::std::move(from);
  }

  inline RoutingRule& operator=(const RoutingRule& from) {
    CopyFrom(from);
    return *this;
  }
  inline RoutingRule& operator=(RoutingRule&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RoutingRule& default_instance() {
    return *internal_default_instance();
  }
  static inline const RoutingRule* internal_default_instance() {
    return reinterpret_cast<const RoutingRule*>(
               &_RoutingRule_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RoutingRule& a, RoutingRule& b) {
    a.Swap(&b);
  }
  inline void Swap(RoutingRule* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RoutingRule* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RoutingRule* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RoutingRule>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RoutingRule& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RoutingRule& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RoutingRule* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.RoutingRule";
  }
  protected:
  explicit RoutingRule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoutingParametersFieldNumber = 2,
  };
  // repeated .google.api.RoutingParameter routing_parameters = 2;
  int routing_parameters_size() const;
  private:
  int _internal_routing_parameters_size() const;
  public:
  void clear_routing_parameters();
  ::google::api::RoutingParameter* mutable_routing_parameters(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::RoutingParameter >*
      mutable_routing_parameters();
  private:
  const ::google::api::RoutingParameter& _internal_routing_parameters(int index) const;
  ::google::api::RoutingParameter* _internal_add_routing_parameters();
  public:
  const ::google::api::RoutingParameter& routing_parameters(int index) const;
  ::google::api::RoutingParameter* add_routing_parameters();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::RoutingParameter >&
      routing_parameters() const;

  // @@protoc_insertion_point(class_scope:google.api.RoutingRule)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::RoutingParameter > routing_parameters_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2frouting_2eproto;
};
// -------------------------------------------------------------------

class RoutingParameter final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.RoutingParameter) */ {
 public:
  inline RoutingParameter() : RoutingParameter(nullptr) {}
  ~RoutingParameter() override;
  explicit constexpr RoutingParameter(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RoutingParameter(const RoutingParameter& from);
  RoutingParameter(RoutingParameter&& from) noexcept
    : RoutingParameter() {
    *this = ::std::move(from);
  }

  inline RoutingParameter& operator=(const RoutingParameter& from) {
    CopyFrom(from);
    return *this;
  }
  inline RoutingParameter& operator=(RoutingParameter&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RoutingParameter& default_instance() {
    return *internal_default_instance();
  }
  static inline const RoutingParameter* internal_default_instance() {
    return reinterpret_cast<const RoutingParameter*>(
               &_RoutingParameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RoutingParameter& a, RoutingParameter& b) {
    a.Swap(&b);
  }
  inline void Swap(RoutingParameter* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RoutingParameter* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RoutingParameter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RoutingParameter>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RoutingParameter& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RoutingParameter& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RoutingParameter* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.RoutingParameter";
  }
  protected:
  explicit RoutingParameter(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFieldFieldNumber = 1,
    kPathTemplateFieldNumber = 2,
  };
  // string field = 1;
  void clear_field();
  const std::string& field() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_field(ArgT0&& arg0, ArgT... args);
  std::string* mutable_field();
  PROTOBUF_NODISCARD std::string* release_field();
  void set_allocated_field(std::string* field);
  private:
  const std::string& _internal_field() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_field(const std::string& value);
  std::string* _internal_mutable_field();
  public:

  // string path_template = 2;
  void clear_path_template();
  const std::string& path_template() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_path_template(ArgT0&& arg0, ArgT... args);
  std::string* mutable_path_template();
  PROTOBUF_NODISCARD std::string* release_path_template();
  void set_allocated_path_template(std::string* path_template);
  private:
  const std::string& _internal_path_template() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_path_template(const std::string& value);
  std::string* _internal_mutable_path_template();
  public:

  // @@protoc_insertion_point(class_scope:google.api.RoutingParameter)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr field_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr path_template_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2frouting_2eproto;
};
// ===================================================================

static const int kRoutingFieldNumber = 72295729;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::RoutingRule >, 11, false >
  routing;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RoutingRule

// repeated .google.api.RoutingParameter routing_parameters = 2;
inline int RoutingRule::_internal_routing_parameters_size() const {
  return routing_parameters_.size();
}
inline int RoutingRule::routing_parameters_size() const {
  return _internal_routing_parameters_size();
}
inline void RoutingRule::clear_routing_parameters() {
  routing_parameters_.Clear();
}
inline ::google::api::RoutingParameter* RoutingRule::mutable_routing_parameters(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.RoutingRule.routing_parameters)
  return routing_parameters_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::RoutingParameter >*
RoutingRule::mutable_routing_parameters() {
  // @@protoc_insertion_point(field_mutable_list:google.api.RoutingRule.routing_parameters)
  return &routing_parameters_;
}
inline const ::google::api::RoutingParameter& RoutingRule::_internal_routing_parameters(int index) const {
  return routing_parameters_.Get(index);
}
inline const ::google::api::RoutingParameter& RoutingRule::routing_parameters(int index) const {
  // @@protoc_insertion_point(field_get:google.api.RoutingRule.routing_parameters)
  return _internal_routing_parameters(index);
}
inline ::google::api::RoutingParameter* RoutingRule::_internal_add_routing_parameters() {
  return routing_parameters_.Add();
}
inline ::google::api::RoutingParameter* RoutingRule::add_routing_parameters() {
  ::google::api::RoutingParameter* _add = _internal_add_routing_parameters();
  // @@protoc_insertion_point(field_add:google.api.RoutingRule.routing_parameters)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::RoutingParameter >&
RoutingRule::routing_parameters() const {
  // @@protoc_insertion_point(field_list:google.api.RoutingRule.routing_parameters)
  return routing_parameters_;
}

// -------------------------------------------------------------------

// RoutingParameter

// string field = 1;
inline void RoutingParameter::clear_field() {
  field_.ClearToEmpty();
}
inline const std::string& RoutingParameter::field() const {
  // @@protoc_insertion_point(field_get:google.api.RoutingParameter.field)
  return _internal_field();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RoutingParameter::set_field(ArgT0&& arg0, ArgT... args) {
 
 field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.RoutingParameter.field)
}
inline std::string* RoutingParameter::mutable_field() {
  std::string* _s = _internal_mutable_field();
  // @@protoc_insertion_point(field_mutable:google.api.RoutingParameter.field)
  return _s;
}
inline const std::string& RoutingParameter::_internal_field() const {
  return field_.Get();
}
inline void RoutingParameter::_internal_set_field(const std::string& value) {
  
  field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* RoutingParameter::_internal_mutable_field() {
  
  return field_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* RoutingParameter::release_field() {
  // @@protoc_insertion_point(field_release:google.api.RoutingParameter.field)
  return field_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void RoutingParameter::set_allocated_field(std::string* field) {
  if (field != nullptr) {
    
  } else {
    
  }
  field_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), field,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (field_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    field_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.RoutingParameter.field)
}

// string path_template = 2;
inline void RoutingParameter::clear_path_template() {
  path_template_.ClearToEmpty();
}
inline const std::string& RoutingParameter::path_template() const {
  // @@protoc_insertion_point(field_get:google.api.RoutingParameter.path_template)
  return _internal_path_template();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RoutingParameter::set_path_template(ArgT0&& arg0, ArgT... args) {
 
 path_template_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.RoutingParameter.path_template)
}
inline std::string* RoutingParameter::mutable_path_template() {
  std::string* _s = _internal_mutable_path_template();
  // @@protoc_insertion_point(field_mutable:google.api.RoutingParameter.path_template)
  return _s;
}
inline const std::string& RoutingParameter::_internal_path_template() const {
  return path_template_.Get();
}
inline void RoutingParameter::_internal_set_path_template(const std::string& value) {
  
  path_template_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* RoutingParameter::_internal_mutable_path_template() {
  
  return path_template_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* RoutingParameter::release_path_template() {
  // @@protoc_insertion_point(field_release:google.api.RoutingParameter.path_template)
  return path_template_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void RoutingParameter::set_allocated_path_template(std::string* path_template) {
  if (path_template != nullptr) {
    
  } else {
    
  }
  path_template_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), path_template,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (path_template_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    path_template_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.RoutingParameter.path_template)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2frouting_2eproto
