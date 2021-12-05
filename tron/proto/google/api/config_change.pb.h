// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/config_change.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fconfig_5fchange_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fconfig_5fchange_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fconfig_5fchange_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fconfig_5fchange_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fconfig_5fchange_2eproto;
namespace google {
namespace api {
class Advice;
struct AdviceDefaultTypeInternal;
extern AdviceDefaultTypeInternal _Advice_default_instance_;
class ConfigChange;
struct ConfigChangeDefaultTypeInternal;
extern ConfigChangeDefaultTypeInternal _ConfigChange_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Advice* Arena::CreateMaybeMessage<::google::api::Advice>(Arena*);
template<> ::google::api::ConfigChange* Arena::CreateMaybeMessage<::google::api::ConfigChange>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

enum ChangeType : int {
  CHANGE_TYPE_UNSPECIFIED = 0,
  ADDED = 1,
  REMOVED = 2,
  MODIFIED = 3,
  ChangeType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ChangeType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ChangeType_IsValid(int value);
constexpr ChangeType ChangeType_MIN = CHANGE_TYPE_UNSPECIFIED;
constexpr ChangeType ChangeType_MAX = MODIFIED;
constexpr int ChangeType_ARRAYSIZE = ChangeType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChangeType_descriptor();
template<typename T>
inline const std::string& ChangeType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ChangeType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ChangeType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ChangeType_descriptor(), enum_t_value);
}
inline bool ChangeType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChangeType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChangeType>(
    ChangeType_descriptor(), name, value);
}
// ===================================================================

class ConfigChange final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.ConfigChange) */ {
 public:
  inline ConfigChange() : ConfigChange(nullptr) {}
  ~ConfigChange() override;
  explicit constexpr ConfigChange(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ConfigChange(const ConfigChange& from);
  ConfigChange(ConfigChange&& from) noexcept
    : ConfigChange() {
    *this = ::std::move(from);
  }

  inline ConfigChange& operator=(const ConfigChange& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConfigChange& operator=(ConfigChange&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const ConfigChange& default_instance() {
    return *internal_default_instance();
  }
  static inline const ConfigChange* internal_default_instance() {
    return reinterpret_cast<const ConfigChange*>(
               &_ConfigChange_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ConfigChange& a, ConfigChange& b) {
    a.Swap(&b);
  }
  inline void Swap(ConfigChange* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConfigChange* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConfigChange* New() const final {
    return new ConfigChange();
  }

  ConfigChange* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConfigChange>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ConfigChange& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ConfigChange& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ConfigChange* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.ConfigChange";
  }
  protected:
  explicit ConfigChange(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kAdvicesFieldNumber = 5,
    kElementFieldNumber = 1,
    kOldValueFieldNumber = 2,
    kNewValueFieldNumber = 3,
    kChangeTypeFieldNumber = 4,
  };
  // repeated .google.api.Advice advices = 5;
  int advices_size() const;
  private:
  int _internal_advices_size() const;
  public:
  void clear_advices();
  ::google::api::Advice* mutable_advices(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >*
      mutable_advices();
  private:
  const ::google::api::Advice& _internal_advices(int index) const;
  ::google::api::Advice* _internal_add_advices();
  public:
  const ::google::api::Advice& advices(int index) const;
  ::google::api::Advice* add_advices();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >&
      advices() const;

  // string element = 1;
  void clear_element();
  const std::string& element() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_element(ArgT0&& arg0, ArgT... args);
  std::string* mutable_element();
  PROTOBUF_MUST_USE_RESULT std::string* release_element();
  void set_allocated_element(std::string* element);
  private:
  const std::string& _internal_element() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_element(const std::string& value);
  std::string* _internal_mutable_element();
  public:

  // string old_value = 2;
  void clear_old_value();
  const std::string& old_value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_old_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_old_value();
  PROTOBUF_MUST_USE_RESULT std::string* release_old_value();
  void set_allocated_old_value(std::string* old_value);
  private:
  const std::string& _internal_old_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_old_value(const std::string& value);
  std::string* _internal_mutable_old_value();
  public:

  // string new_value = 3;
  void clear_new_value();
  const std::string& new_value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_new_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_new_value();
  PROTOBUF_MUST_USE_RESULT std::string* release_new_value();
  void set_allocated_new_value(std::string* new_value);
  private:
  const std::string& _internal_new_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_new_value(const std::string& value);
  std::string* _internal_mutable_new_value();
  public:

  // .google.api.ChangeType change_type = 4;
  void clear_change_type();
  ::google::api::ChangeType change_type() const;
  void set_change_type(::google::api::ChangeType value);
  private:
  ::google::api::ChangeType _internal_change_type() const;
  void _internal_set_change_type(::google::api::ChangeType value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.ConfigChange)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice > advices_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr element_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr old_value_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr new_value_;
  int change_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fconfig_5fchange_2eproto;
};
// -------------------------------------------------------------------

class Advice final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Advice) */ {
 public:
  inline Advice() : Advice(nullptr) {}
  ~Advice() override;
  explicit constexpr Advice(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Advice(const Advice& from);
  Advice(Advice&& from) noexcept
    : Advice() {
    *this = ::std::move(from);
  }

  inline Advice& operator=(const Advice& from) {
    CopyFrom(from);
    return *this;
  }
  inline Advice& operator=(Advice&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const Advice& default_instance() {
    return *internal_default_instance();
  }
  static inline const Advice* internal_default_instance() {
    return reinterpret_cast<const Advice*>(
               &_Advice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Advice& a, Advice& b) {
    a.Swap(&b);
  }
  inline void Swap(Advice* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Advice* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Advice* New() const final {
    return new Advice();
  }

  Advice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Advice>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Advice& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Advice& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Advice* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Advice";
  }
  protected:
  explicit Advice(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kDescriptionFieldNumber = 2,
  };
  // string description = 2;
  void clear_description();
  const std::string& description() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_description(ArgT0&& arg0, ArgT... args);
  std::string* mutable_description();
  PROTOBUF_MUST_USE_RESULT std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // @@protoc_insertion_point(class_scope:google.api.Advice)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fconfig_5fchange_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConfigChange

// string element = 1;
inline void ConfigChange::clear_element() {
  element_.ClearToEmpty();
}
inline const std::string& ConfigChange::element() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.element)
  return _internal_element();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConfigChange::set_element(ArgT0&& arg0, ArgT... args) {
 
 element_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.element)
}
inline std::string* ConfigChange::mutable_element() {
  std::string* _s = _internal_mutable_element();
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.element)
  return _s;
}
inline const std::string& ConfigChange::_internal_element() const {
  return element_.Get();
}
inline void ConfigChange::_internal_set_element(const std::string& value) {
  
  element_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConfigChange::_internal_mutable_element() {
  
  return element_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConfigChange::release_element() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.element)
  return element_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConfigChange::set_allocated_element(std::string* element) {
  if (element != nullptr) {
    
  } else {
    
  }
  element_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), element,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.element)
}

// string old_value = 2;
inline void ConfigChange::clear_old_value() {
  old_value_.ClearToEmpty();
}
inline const std::string& ConfigChange::old_value() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.old_value)
  return _internal_old_value();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConfigChange::set_old_value(ArgT0&& arg0, ArgT... args) {
 
 old_value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.old_value)
}
inline std::string* ConfigChange::mutable_old_value() {
  std::string* _s = _internal_mutable_old_value();
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.old_value)
  return _s;
}
inline const std::string& ConfigChange::_internal_old_value() const {
  return old_value_.Get();
}
inline void ConfigChange::_internal_set_old_value(const std::string& value) {
  
  old_value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConfigChange::_internal_mutable_old_value() {
  
  return old_value_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConfigChange::release_old_value() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.old_value)
  return old_value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConfigChange::set_allocated_old_value(std::string* old_value) {
  if (old_value != nullptr) {
    
  } else {
    
  }
  old_value_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), old_value,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.old_value)
}

// string new_value = 3;
inline void ConfigChange::clear_new_value() {
  new_value_.ClearToEmpty();
}
inline const std::string& ConfigChange::new_value() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.new_value)
  return _internal_new_value();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConfigChange::set_new_value(ArgT0&& arg0, ArgT... args) {
 
 new_value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.new_value)
}
inline std::string* ConfigChange::mutable_new_value() {
  std::string* _s = _internal_mutable_new_value();
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.new_value)
  return _s;
}
inline const std::string& ConfigChange::_internal_new_value() const {
  return new_value_.Get();
}
inline void ConfigChange::_internal_set_new_value(const std::string& value) {
  
  new_value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConfigChange::_internal_mutable_new_value() {
  
  return new_value_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConfigChange::release_new_value() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.new_value)
  return new_value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConfigChange::set_allocated_new_value(std::string* new_value) {
  if (new_value != nullptr) {
    
  } else {
    
  }
  new_value_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), new_value,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.new_value)
}

// .google.api.ChangeType change_type = 4;
inline void ConfigChange::clear_change_type() {
  change_type_ = 0;
}
inline ::google::api::ChangeType ConfigChange::_internal_change_type() const {
  return static_cast< ::google::api::ChangeType >(change_type_);
}
inline ::google::api::ChangeType ConfigChange::change_type() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.change_type)
  return _internal_change_type();
}
inline void ConfigChange::_internal_set_change_type(::google::api::ChangeType value) {
  
  change_type_ = value;
}
inline void ConfigChange::set_change_type(::google::api::ChangeType value) {
  _internal_set_change_type(value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.change_type)
}

// repeated .google.api.Advice advices = 5;
inline int ConfigChange::_internal_advices_size() const {
  return advices_.size();
}
inline int ConfigChange::advices_size() const {
  return _internal_advices_size();
}
inline void ConfigChange::clear_advices() {
  advices_.Clear();
}
inline ::google::api::Advice* ConfigChange::mutable_advices(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.advices)
  return advices_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >*
ConfigChange::mutable_advices() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ConfigChange.advices)
  return &advices_;
}
inline const ::google::api::Advice& ConfigChange::_internal_advices(int index) const {
  return advices_.Get(index);
}
inline const ::google::api::Advice& ConfigChange::advices(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.advices)
  return _internal_advices(index);
}
inline ::google::api::Advice* ConfigChange::_internal_add_advices() {
  return advices_.Add();
}
inline ::google::api::Advice* ConfigChange::add_advices() {
  ::google::api::Advice* _add = _internal_add_advices();
  // @@protoc_insertion_point(field_add:google.api.ConfigChange.advices)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Advice >&
ConfigChange::advices() const {
  // @@protoc_insertion_point(field_list:google.api.ConfigChange.advices)
  return advices_;
}

// -------------------------------------------------------------------

// Advice

// string description = 2;
inline void Advice::clear_description() {
  description_.ClearToEmpty();
}
inline const std::string& Advice::description() const {
  // @@protoc_insertion_point(field_get:google.api.Advice.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Advice::set_description(ArgT0&& arg0, ArgT... args) {
 
 description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.Advice.description)
}
inline std::string* Advice::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:google.api.Advice.description)
  return _s;
}
inline const std::string& Advice::_internal_description() const {
  return description_.Get();
}
inline void Advice::_internal_set_description(const std::string& value) {
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Advice::_internal_mutable_description() {
  
  return description_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Advice::release_description() {
  // @@protoc_insertion_point(field_release:google.api.Advice.description)
  return description_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Advice::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:google.api.Advice.description)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::api::ChangeType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::ChangeType>() {
  return ::google::api::ChangeType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fconfig_5fchange_2eproto
