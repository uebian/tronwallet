// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/context.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fcontext_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fcontext_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fcontext_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fcontext_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fcontext_2eproto;
namespace google {
namespace api {
class Context;
struct ContextDefaultTypeInternal;
extern ContextDefaultTypeInternal _Context_default_instance_;
class ContextRule;
struct ContextRuleDefaultTypeInternal;
extern ContextRuleDefaultTypeInternal _ContextRule_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Context* Arena::CreateMaybeMessage<::google::api::Context>(Arena*);
template<> ::google::api::ContextRule* Arena::CreateMaybeMessage<::google::api::ContextRule>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class Context final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Context) */ {
 public:
  inline Context() : Context(nullptr) {}
  ~Context() override;
  explicit constexpr Context(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Context(const Context& from);
  Context(Context&& from) noexcept
    : Context() {
    *this = ::std::move(from);
  }

  inline Context& operator=(const Context& from) {
    CopyFrom(from);
    return *this;
  }
  inline Context& operator=(Context&& from) noexcept {
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
  static const Context& default_instance() {
    return *internal_default_instance();
  }
  static inline const Context* internal_default_instance() {
    return reinterpret_cast<const Context*>(
               &_Context_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Context& a, Context& b) {
    a.Swap(&b);
  }
  inline void Swap(Context* other) {
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
  void UnsafeArenaSwap(Context* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Context* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Context>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Context& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Context& from);
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
  void InternalSwap(Context* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Context";
  }
  protected:
  explicit Context(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kRulesFieldNumber = 1,
  };
  // repeated .google.api.ContextRule rules = 1;
  int rules_size() const;
  private:
  int _internal_rules_size() const;
  public:
  void clear_rules();
  ::google::api::ContextRule* mutable_rules(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::ContextRule >*
      mutable_rules();
  private:
  const ::google::api::ContextRule& _internal_rules(int index) const;
  ::google::api::ContextRule* _internal_add_rules();
  public:
  const ::google::api::ContextRule& rules(int index) const;
  ::google::api::ContextRule* add_rules();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::ContextRule >&
      rules() const;

  // @@protoc_insertion_point(class_scope:google.api.Context)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::ContextRule > rules_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fcontext_2eproto;
};
// -------------------------------------------------------------------

class ContextRule final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.ContextRule) */ {
 public:
  inline ContextRule() : ContextRule(nullptr) {}
  ~ContextRule() override;
  explicit constexpr ContextRule(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ContextRule(const ContextRule& from);
  ContextRule(ContextRule&& from) noexcept
    : ContextRule() {
    *this = ::std::move(from);
  }

  inline ContextRule& operator=(const ContextRule& from) {
    CopyFrom(from);
    return *this;
  }
  inline ContextRule& operator=(ContextRule&& from) noexcept {
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
  static const ContextRule& default_instance() {
    return *internal_default_instance();
  }
  static inline const ContextRule* internal_default_instance() {
    return reinterpret_cast<const ContextRule*>(
               &_ContextRule_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ContextRule& a, ContextRule& b) {
    a.Swap(&b);
  }
  inline void Swap(ContextRule* other) {
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
  void UnsafeArenaSwap(ContextRule* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ContextRule* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ContextRule>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ContextRule& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ContextRule& from);
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
  void InternalSwap(ContextRule* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.ContextRule";
  }
  protected:
  explicit ContextRule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kRequestedFieldNumber = 2,
    kProvidedFieldNumber = 3,
    kAllowedRequestExtensionsFieldNumber = 4,
    kAllowedResponseExtensionsFieldNumber = 5,
    kSelectorFieldNumber = 1,
  };
  // repeated string requested = 2;
  int requested_size() const;
  private:
  int _internal_requested_size() const;
  public:
  void clear_requested();
  const std::string& requested(int index) const;
  std::string* mutable_requested(int index);
  void set_requested(int index, const std::string& value);
  void set_requested(int index, std::string&& value);
  void set_requested(int index, const char* value);
  void set_requested(int index, const char* value, size_t size);
  std::string* add_requested();
  void add_requested(const std::string& value);
  void add_requested(std::string&& value);
  void add_requested(const char* value);
  void add_requested(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& requested() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_requested();
  private:
  const std::string& _internal_requested(int index) const;
  std::string* _internal_add_requested();
  public:

  // repeated string provided = 3;
  int provided_size() const;
  private:
  int _internal_provided_size() const;
  public:
  void clear_provided();
  const std::string& provided(int index) const;
  std::string* mutable_provided(int index);
  void set_provided(int index, const std::string& value);
  void set_provided(int index, std::string&& value);
  void set_provided(int index, const char* value);
  void set_provided(int index, const char* value, size_t size);
  std::string* add_provided();
  void add_provided(const std::string& value);
  void add_provided(std::string&& value);
  void add_provided(const char* value);
  void add_provided(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& provided() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_provided();
  private:
  const std::string& _internal_provided(int index) const;
  std::string* _internal_add_provided();
  public:

  // repeated string allowed_request_extensions = 4;
  int allowed_request_extensions_size() const;
  private:
  int _internal_allowed_request_extensions_size() const;
  public:
  void clear_allowed_request_extensions();
  const std::string& allowed_request_extensions(int index) const;
  std::string* mutable_allowed_request_extensions(int index);
  void set_allowed_request_extensions(int index, const std::string& value);
  void set_allowed_request_extensions(int index, std::string&& value);
  void set_allowed_request_extensions(int index, const char* value);
  void set_allowed_request_extensions(int index, const char* value, size_t size);
  std::string* add_allowed_request_extensions();
  void add_allowed_request_extensions(const std::string& value);
  void add_allowed_request_extensions(std::string&& value);
  void add_allowed_request_extensions(const char* value);
  void add_allowed_request_extensions(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& allowed_request_extensions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_allowed_request_extensions();
  private:
  const std::string& _internal_allowed_request_extensions(int index) const;
  std::string* _internal_add_allowed_request_extensions();
  public:

  // repeated string allowed_response_extensions = 5;
  int allowed_response_extensions_size() const;
  private:
  int _internal_allowed_response_extensions_size() const;
  public:
  void clear_allowed_response_extensions();
  const std::string& allowed_response_extensions(int index) const;
  std::string* mutable_allowed_response_extensions(int index);
  void set_allowed_response_extensions(int index, const std::string& value);
  void set_allowed_response_extensions(int index, std::string&& value);
  void set_allowed_response_extensions(int index, const char* value);
  void set_allowed_response_extensions(int index, const char* value, size_t size);
  std::string* add_allowed_response_extensions();
  void add_allowed_response_extensions(const std::string& value);
  void add_allowed_response_extensions(std::string&& value);
  void add_allowed_response_extensions(const char* value);
  void add_allowed_response_extensions(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& allowed_response_extensions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_allowed_response_extensions();
  private:
  const std::string& _internal_allowed_response_extensions(int index) const;
  std::string* _internal_add_allowed_response_extensions();
  public:

  // string selector = 1;
  void clear_selector();
  const std::string& selector() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_selector(ArgT0&& arg0, ArgT... args);
  std::string* mutable_selector();
  PROTOBUF_NODISCARD std::string* release_selector();
  void set_allocated_selector(std::string* selector);
  private:
  const std::string& _internal_selector() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_selector(const std::string& value);
  std::string* _internal_mutable_selector();
  public:

  // @@protoc_insertion_point(class_scope:google.api.ContextRule)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> requested_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> provided_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> allowed_request_extensions_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> allowed_response_extensions_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr selector_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fcontext_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Context

// repeated .google.api.ContextRule rules = 1;
inline int Context::_internal_rules_size() const {
  return rules_.size();
}
inline int Context::rules_size() const {
  return _internal_rules_size();
}
inline void Context::clear_rules() {
  rules_.Clear();
}
inline ::google::api::ContextRule* Context::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Context.rules)
  return rules_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::ContextRule >*
Context::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Context.rules)
  return &rules_;
}
inline const ::google::api::ContextRule& Context::_internal_rules(int index) const {
  return rules_.Get(index);
}
inline const ::google::api::ContextRule& Context::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Context.rules)
  return _internal_rules(index);
}
inline ::google::api::ContextRule* Context::_internal_add_rules() {
  return rules_.Add();
}
inline ::google::api::ContextRule* Context::add_rules() {
  ::google::api::ContextRule* _add = _internal_add_rules();
  // @@protoc_insertion_point(field_add:google.api.Context.rules)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::ContextRule >&
Context::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Context.rules)
  return rules_;
}

// -------------------------------------------------------------------

// ContextRule

// string selector = 1;
inline void ContextRule::clear_selector() {
  selector_.ClearToEmpty();
}
inline const std::string& ContextRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.selector)
  return _internal_selector();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ContextRule::set_selector(ArgT0&& arg0, ArgT... args) {
 
 selector_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.ContextRule.selector)
}
inline std::string* ContextRule::mutable_selector() {
  std::string* _s = _internal_mutable_selector();
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.selector)
  return _s;
}
inline const std::string& ContextRule::_internal_selector() const {
  return selector_.Get();
}
inline void ContextRule::_internal_set_selector(const std::string& value) {
  
  selector_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ContextRule::_internal_mutable_selector() {
  
  return selector_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ContextRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.ContextRule.selector)
  return selector_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ContextRule::set_allocated_selector(std::string* selector) {
  if (selector != nullptr) {
    
  } else {
    
  }
  selector_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), selector,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (selector_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    selector_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.ContextRule.selector)
}

// repeated string requested = 2;
inline int ContextRule::_internal_requested_size() const {
  return requested_.size();
}
inline int ContextRule::requested_size() const {
  return _internal_requested_size();
}
inline void ContextRule::clear_requested() {
  requested_.Clear();
}
inline std::string* ContextRule::add_requested() {
  std::string* _s = _internal_add_requested();
  // @@protoc_insertion_point(field_add_mutable:google.api.ContextRule.requested)
  return _s;
}
inline const std::string& ContextRule::_internal_requested(int index) const {
  return requested_.Get(index);
}
inline const std::string& ContextRule::requested(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.requested)
  return _internal_requested(index);
}
inline std::string* ContextRule::mutable_requested(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.requested)
  return requested_.Mutable(index);
}
inline void ContextRule::set_requested(int index, const std::string& value) {
  requested_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.api.ContextRule.requested)
}
inline void ContextRule::set_requested(int index, std::string&& value) {
  requested_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.api.ContextRule.requested)
}
inline void ContextRule::set_requested(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  requested_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.ContextRule.requested)
}
inline void ContextRule::set_requested(int index, const char* value, size_t size) {
  requested_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.ContextRule.requested)
}
inline std::string* ContextRule::_internal_add_requested() {
  return requested_.Add();
}
inline void ContextRule::add_requested(const std::string& value) {
  requested_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.ContextRule.requested)
}
inline void ContextRule::add_requested(std::string&& value) {
  requested_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.ContextRule.requested)
}
inline void ContextRule::add_requested(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  requested_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.ContextRule.requested)
}
inline void ContextRule::add_requested(const char* value, size_t size) {
  requested_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.ContextRule.requested)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ContextRule::requested() const {
  // @@protoc_insertion_point(field_list:google.api.ContextRule.requested)
  return requested_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ContextRule::mutable_requested() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ContextRule.requested)
  return &requested_;
}

// repeated string provided = 3;
inline int ContextRule::_internal_provided_size() const {
  return provided_.size();
}
inline int ContextRule::provided_size() const {
  return _internal_provided_size();
}
inline void ContextRule::clear_provided() {
  provided_.Clear();
}
inline std::string* ContextRule::add_provided() {
  std::string* _s = _internal_add_provided();
  // @@protoc_insertion_point(field_add_mutable:google.api.ContextRule.provided)
  return _s;
}
inline const std::string& ContextRule::_internal_provided(int index) const {
  return provided_.Get(index);
}
inline const std::string& ContextRule::provided(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.provided)
  return _internal_provided(index);
}
inline std::string* ContextRule::mutable_provided(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.provided)
  return provided_.Mutable(index);
}
inline void ContextRule::set_provided(int index, const std::string& value) {
  provided_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.api.ContextRule.provided)
}
inline void ContextRule::set_provided(int index, std::string&& value) {
  provided_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.api.ContextRule.provided)
}
inline void ContextRule::set_provided(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  provided_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.ContextRule.provided)
}
inline void ContextRule::set_provided(int index, const char* value, size_t size) {
  provided_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.ContextRule.provided)
}
inline std::string* ContextRule::_internal_add_provided() {
  return provided_.Add();
}
inline void ContextRule::add_provided(const std::string& value) {
  provided_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.ContextRule.provided)
}
inline void ContextRule::add_provided(std::string&& value) {
  provided_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.ContextRule.provided)
}
inline void ContextRule::add_provided(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  provided_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.ContextRule.provided)
}
inline void ContextRule::add_provided(const char* value, size_t size) {
  provided_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.ContextRule.provided)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ContextRule::provided() const {
  // @@protoc_insertion_point(field_list:google.api.ContextRule.provided)
  return provided_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ContextRule::mutable_provided() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ContextRule.provided)
  return &provided_;
}

// repeated string allowed_request_extensions = 4;
inline int ContextRule::_internal_allowed_request_extensions_size() const {
  return allowed_request_extensions_.size();
}
inline int ContextRule::allowed_request_extensions_size() const {
  return _internal_allowed_request_extensions_size();
}
inline void ContextRule::clear_allowed_request_extensions() {
  allowed_request_extensions_.Clear();
}
inline std::string* ContextRule::add_allowed_request_extensions() {
  std::string* _s = _internal_add_allowed_request_extensions();
  // @@protoc_insertion_point(field_add_mutable:google.api.ContextRule.allowed_request_extensions)
  return _s;
}
inline const std::string& ContextRule::_internal_allowed_request_extensions(int index) const {
  return allowed_request_extensions_.Get(index);
}
inline const std::string& ContextRule::allowed_request_extensions(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.allowed_request_extensions)
  return _internal_allowed_request_extensions(index);
}
inline std::string* ContextRule::mutable_allowed_request_extensions(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.allowed_request_extensions)
  return allowed_request_extensions_.Mutable(index);
}
inline void ContextRule::set_allowed_request_extensions(int index, const std::string& value) {
  allowed_request_extensions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.api.ContextRule.allowed_request_extensions)
}
inline void ContextRule::set_allowed_request_extensions(int index, std::string&& value) {
  allowed_request_extensions_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.api.ContextRule.allowed_request_extensions)
}
inline void ContextRule::set_allowed_request_extensions(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  allowed_request_extensions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.ContextRule.allowed_request_extensions)
}
inline void ContextRule::set_allowed_request_extensions(int index, const char* value, size_t size) {
  allowed_request_extensions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.ContextRule.allowed_request_extensions)
}
inline std::string* ContextRule::_internal_add_allowed_request_extensions() {
  return allowed_request_extensions_.Add();
}
inline void ContextRule::add_allowed_request_extensions(const std::string& value) {
  allowed_request_extensions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.ContextRule.allowed_request_extensions)
}
inline void ContextRule::add_allowed_request_extensions(std::string&& value) {
  allowed_request_extensions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.ContextRule.allowed_request_extensions)
}
inline void ContextRule::add_allowed_request_extensions(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  allowed_request_extensions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.ContextRule.allowed_request_extensions)
}
inline void ContextRule::add_allowed_request_extensions(const char* value, size_t size) {
  allowed_request_extensions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.ContextRule.allowed_request_extensions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ContextRule::allowed_request_extensions() const {
  // @@protoc_insertion_point(field_list:google.api.ContextRule.allowed_request_extensions)
  return allowed_request_extensions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ContextRule::mutable_allowed_request_extensions() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ContextRule.allowed_request_extensions)
  return &allowed_request_extensions_;
}

// repeated string allowed_response_extensions = 5;
inline int ContextRule::_internal_allowed_response_extensions_size() const {
  return allowed_response_extensions_.size();
}
inline int ContextRule::allowed_response_extensions_size() const {
  return _internal_allowed_response_extensions_size();
}
inline void ContextRule::clear_allowed_response_extensions() {
  allowed_response_extensions_.Clear();
}
inline std::string* ContextRule::add_allowed_response_extensions() {
  std::string* _s = _internal_add_allowed_response_extensions();
  // @@protoc_insertion_point(field_add_mutable:google.api.ContextRule.allowed_response_extensions)
  return _s;
}
inline const std::string& ContextRule::_internal_allowed_response_extensions(int index) const {
  return allowed_response_extensions_.Get(index);
}
inline const std::string& ContextRule::allowed_response_extensions(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.allowed_response_extensions)
  return _internal_allowed_response_extensions(index);
}
inline std::string* ContextRule::mutable_allowed_response_extensions(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.allowed_response_extensions)
  return allowed_response_extensions_.Mutable(index);
}
inline void ContextRule::set_allowed_response_extensions(int index, const std::string& value) {
  allowed_response_extensions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.api.ContextRule.allowed_response_extensions)
}
inline void ContextRule::set_allowed_response_extensions(int index, std::string&& value) {
  allowed_response_extensions_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.api.ContextRule.allowed_response_extensions)
}
inline void ContextRule::set_allowed_response_extensions(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  allowed_response_extensions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.ContextRule.allowed_response_extensions)
}
inline void ContextRule::set_allowed_response_extensions(int index, const char* value, size_t size) {
  allowed_response_extensions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.ContextRule.allowed_response_extensions)
}
inline std::string* ContextRule::_internal_add_allowed_response_extensions() {
  return allowed_response_extensions_.Add();
}
inline void ContextRule::add_allowed_response_extensions(const std::string& value) {
  allowed_response_extensions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.ContextRule.allowed_response_extensions)
}
inline void ContextRule::add_allowed_response_extensions(std::string&& value) {
  allowed_response_extensions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.ContextRule.allowed_response_extensions)
}
inline void ContextRule::add_allowed_response_extensions(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  allowed_response_extensions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.ContextRule.allowed_response_extensions)
}
inline void ContextRule::add_allowed_response_extensions(const char* value, size_t size) {
  allowed_response_extensions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.ContextRule.allowed_response_extensions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ContextRule::allowed_response_extensions() const {
  // @@protoc_insertion_point(field_list:google.api.ContextRule.allowed_response_extensions)
  return allowed_response_extensions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ContextRule::mutable_allowed_response_extensions() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ContextRule.allowed_response_extensions)
  return &allowed_response_extensions_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fcontext_2eproto
