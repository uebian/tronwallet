// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/source_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fsource_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fsource_5finfo_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fsource_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fsource_5finfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fsource_5finfo_2eproto;
namespace google {
namespace api {
class SourceInfo;
struct SourceInfoDefaultTypeInternal;
extern SourceInfoDefaultTypeInternal _SourceInfo_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::SourceInfo* Arena::CreateMaybeMessage<::google::api::SourceInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class SourceInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.SourceInfo) */ {
 public:
  inline SourceInfo() : SourceInfo(nullptr) {}
  ~SourceInfo() override;
  explicit constexpr SourceInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SourceInfo(const SourceInfo& from);
  SourceInfo(SourceInfo&& from) noexcept
    : SourceInfo() {
    *this = ::std::move(from);
  }

  inline SourceInfo& operator=(const SourceInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline SourceInfo& operator=(SourceInfo&& from) noexcept {
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
  static const SourceInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const SourceInfo* internal_default_instance() {
    return reinterpret_cast<const SourceInfo*>(
               &_SourceInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SourceInfo& a, SourceInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(SourceInfo* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SourceInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SourceInfo* New() const final {
    return new SourceInfo();
  }

  SourceInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SourceInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SourceInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SourceInfo& from);
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
  void InternalSwap(SourceInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.SourceInfo";
  }
  protected:
  explicit SourceInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kSourceFilesFieldNumber = 1,
  };
  // repeated .google.protobuf.Any source_files = 1;
  int source_files_size() const;
  private:
  int _internal_source_files_size() const;
  public:
  void clear_source_files();
  PROTOBUF_NAMESPACE_ID::Any* mutable_source_files(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >*
      mutable_source_files();
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_source_files(int index) const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_add_source_files();
  public:
  const PROTOBUF_NAMESPACE_ID::Any& source_files(int index) const;
  PROTOBUF_NAMESPACE_ID::Any* add_source_files();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >&
      source_files() const;

  // @@protoc_insertion_point(class_scope:google.api.SourceInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any > source_files_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fsource_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SourceInfo

// repeated .google.protobuf.Any source_files = 1;
inline int SourceInfo::_internal_source_files_size() const {
  return source_files_.size();
}
inline int SourceInfo::source_files_size() const {
  return _internal_source_files_size();
}
inline PROTOBUF_NAMESPACE_ID::Any* SourceInfo::mutable_source_files(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.SourceInfo.source_files)
  return source_files_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >*
SourceInfo::mutable_source_files() {
  // @@protoc_insertion_point(field_mutable_list:google.api.SourceInfo.source_files)
  return &source_files_;
}
inline const PROTOBUF_NAMESPACE_ID::Any& SourceInfo::_internal_source_files(int index) const {
  return source_files_.Get(index);
}
inline const PROTOBUF_NAMESPACE_ID::Any& SourceInfo::source_files(int index) const {
  // @@protoc_insertion_point(field_get:google.api.SourceInfo.source_files)
  return _internal_source_files(index);
}
inline PROTOBUF_NAMESPACE_ID::Any* SourceInfo::_internal_add_source_files() {
  return source_files_.Add();
}
inline PROTOBUF_NAMESPACE_ID::Any* SourceInfo::add_source_files() {
  PROTOBUF_NAMESPACE_ID::Any* _add = _internal_add_source_files();
  // @@protoc_insertion_point(field_add:google.api.SourceInfo.source_files)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >&
SourceInfo::source_files() const {
  // @@protoc_insertion_point(field_list:google.api.SourceInfo.source_files)
  return source_files_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fsource_5finfo_2eproto
