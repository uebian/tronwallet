// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: core/TronInventoryItems.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_core_2fTronInventoryItems_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_core_2fTronInventoryItems_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_core_2fTronInventoryItems_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_core_2fTronInventoryItems_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_core_2fTronInventoryItems_2eproto;
namespace protocol {
class InventoryItems;
struct InventoryItemsDefaultTypeInternal;
extern InventoryItemsDefaultTypeInternal _InventoryItems_default_instance_;
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::protocol::InventoryItems* Arena::CreateMaybeMessage<::protocol::InventoryItems>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protocol {

// ===================================================================

class InventoryItems final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.InventoryItems) */ {
 public:
  inline InventoryItems() : InventoryItems(nullptr) {}
  ~InventoryItems() override;
  explicit constexpr InventoryItems(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  InventoryItems(const InventoryItems& from);
  InventoryItems(InventoryItems&& from) noexcept
    : InventoryItems() {
    *this = ::std::move(from);
  }

  inline InventoryItems& operator=(const InventoryItems& from) {
    CopyFrom(from);
    return *this;
  }
  inline InventoryItems& operator=(InventoryItems&& from) noexcept {
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
  static const InventoryItems& default_instance() {
    return *internal_default_instance();
  }
  static inline const InventoryItems* internal_default_instance() {
    return reinterpret_cast<const InventoryItems*>(
               &_InventoryItems_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InventoryItems& a, InventoryItems& b) {
    a.Swap(&b);
  }
  inline void Swap(InventoryItems* other) {
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
  void UnsafeArenaSwap(InventoryItems* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  InventoryItems* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<InventoryItems>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const InventoryItems& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const InventoryItems& from);
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
  void InternalSwap(InventoryItems* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protocol.InventoryItems";
  }
  protected:
  explicit InventoryItems(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kItemsFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // repeated bytes items = 2;
  int items_size() const;
  private:
  int _internal_items_size() const;
  public:
  void clear_items();
  const std::string& items(int index) const;
  std::string* mutable_items(int index);
  void set_items(int index, const std::string& value);
  void set_items(int index, std::string&& value);
  void set_items(int index, const char* value);
  void set_items(int index, const void* value, size_t size);
  std::string* add_items();
  void add_items(const std::string& value);
  void add_items(std::string&& value);
  void add_items(const char* value);
  void add_items(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& items() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_items();
  private:
  const std::string& _internal_items(int index) const;
  std::string* _internal_add_items();
  public:

  // int32 type = 1;
  void clear_type();
  int32_t type() const;
  void set_type(int32_t value);
  private:
  int32_t _internal_type() const;
  void _internal_set_type(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:protocol.InventoryItems)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> items_;
  int32_t type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_core_2fTronInventoryItems_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InventoryItems

// int32 type = 1;
inline void InventoryItems::clear_type() {
  type_ = 0;
}
inline int32_t InventoryItems::_internal_type() const {
  return type_;
}
inline int32_t InventoryItems::type() const {
  // @@protoc_insertion_point(field_get:protocol.InventoryItems.type)
  return _internal_type();
}
inline void InventoryItems::_internal_set_type(int32_t value) {
  
  type_ = value;
}
inline void InventoryItems::set_type(int32_t value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:protocol.InventoryItems.type)
}

// repeated bytes items = 2;
inline int InventoryItems::_internal_items_size() const {
  return items_.size();
}
inline int InventoryItems::items_size() const {
  return _internal_items_size();
}
inline void InventoryItems::clear_items() {
  items_.Clear();
}
inline std::string* InventoryItems::add_items() {
  std::string* _s = _internal_add_items();
  // @@protoc_insertion_point(field_add_mutable:protocol.InventoryItems.items)
  return _s;
}
inline const std::string& InventoryItems::_internal_items(int index) const {
  return items_.Get(index);
}
inline const std::string& InventoryItems::items(int index) const {
  // @@protoc_insertion_point(field_get:protocol.InventoryItems.items)
  return _internal_items(index);
}
inline std::string* InventoryItems::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.InventoryItems.items)
  return items_.Mutable(index);
}
inline void InventoryItems::set_items(int index, const std::string& value) {
  items_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:protocol.InventoryItems.items)
}
inline void InventoryItems::set_items(int index, std::string&& value) {
  items_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:protocol.InventoryItems.items)
}
inline void InventoryItems::set_items(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  items_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.InventoryItems.items)
}
inline void InventoryItems::set_items(int index, const void* value, size_t size) {
  items_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.InventoryItems.items)
}
inline std::string* InventoryItems::_internal_add_items() {
  return items_.Add();
}
inline void InventoryItems::add_items(const std::string& value) {
  items_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protocol.InventoryItems.items)
}
inline void InventoryItems::add_items(std::string&& value) {
  items_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:protocol.InventoryItems.items)
}
inline void InventoryItems::add_items(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  items_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protocol.InventoryItems.items)
}
inline void InventoryItems::add_items(const void* value, size_t size) {
  items_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protocol.InventoryItems.items)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
InventoryItems::items() const {
  // @@protoc_insertion_point(field_list:protocol.InventoryItems.items)
  return items_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
InventoryItems::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:protocol.InventoryItems.items)
  return &items_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_core_2fTronInventoryItems_2eproto
