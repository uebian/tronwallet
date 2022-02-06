// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/zksnark.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_api_2fzksnark_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_api_2fzksnark_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "core/Tron.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_api_2fzksnark_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_api_2fzksnark_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_api_2fzksnark_2eproto;
namespace protocol {
class ZksnarkRequest;
struct ZksnarkRequestDefaultTypeInternal;
extern ZksnarkRequestDefaultTypeInternal _ZksnarkRequest_default_instance_;
class ZksnarkResponse;
struct ZksnarkResponseDefaultTypeInternal;
extern ZksnarkResponseDefaultTypeInternal _ZksnarkResponse_default_instance_;
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::protocol::ZksnarkRequest* Arena::CreateMaybeMessage<::protocol::ZksnarkRequest>(Arena*);
template<> ::protocol::ZksnarkResponse* Arena::CreateMaybeMessage<::protocol::ZksnarkResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protocol {

enum ZksnarkResponse_Code : int {
  ZksnarkResponse_Code_SUCCESS = 0,
  ZksnarkResponse_Code_FAILED = 1,
  ZksnarkResponse_Code_ZksnarkResponse_Code_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ZksnarkResponse_Code_ZksnarkResponse_Code_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ZksnarkResponse_Code_IsValid(int value);
constexpr ZksnarkResponse_Code ZksnarkResponse_Code_Code_MIN = ZksnarkResponse_Code_SUCCESS;
constexpr ZksnarkResponse_Code ZksnarkResponse_Code_Code_MAX = ZksnarkResponse_Code_FAILED;
constexpr int ZksnarkResponse_Code_Code_ARRAYSIZE = ZksnarkResponse_Code_Code_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZksnarkResponse_Code_descriptor();
template<typename T>
inline const std::string& ZksnarkResponse_Code_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ZksnarkResponse_Code>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ZksnarkResponse_Code_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ZksnarkResponse_Code_descriptor(), enum_t_value);
}
inline bool ZksnarkResponse_Code_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ZksnarkResponse_Code* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ZksnarkResponse_Code>(
    ZksnarkResponse_Code_descriptor(), name, value);
}
// ===================================================================

class ZksnarkRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.ZksnarkRequest) */ {
 public:
  inline ZksnarkRequest() : ZksnarkRequest(nullptr) {}
  ~ZksnarkRequest() override;
  explicit constexpr ZksnarkRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZksnarkRequest(const ZksnarkRequest& from);
  ZksnarkRequest(ZksnarkRequest&& from) noexcept
    : ZksnarkRequest() {
    *this = ::std::move(from);
  }

  inline ZksnarkRequest& operator=(const ZksnarkRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZksnarkRequest& operator=(ZksnarkRequest&& from) noexcept {
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
  static const ZksnarkRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZksnarkRequest* internal_default_instance() {
    return reinterpret_cast<const ZksnarkRequest*>(
               &_ZksnarkRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZksnarkRequest& a, ZksnarkRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ZksnarkRequest* other) {
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
  void UnsafeArenaSwap(ZksnarkRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZksnarkRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZksnarkRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZksnarkRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ZksnarkRequest& from);
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
  void InternalSwap(ZksnarkRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protocol.ZksnarkRequest";
  }
  protected:
  explicit ZksnarkRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kSighashFieldNumber = 2,
    kTxIdFieldNumber = 4,
    kTransactionFieldNumber = 1,
    kValueBalanceFieldNumber = 3,
  };
  // bytes sighash = 2;
  void clear_sighash();
  const std::string& sighash() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sighash(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sighash();
  PROTOBUF_NODISCARD std::string* release_sighash();
  void set_allocated_sighash(std::string* sighash);
  private:
  const std::string& _internal_sighash() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sighash(const std::string& value);
  std::string* _internal_mutable_sighash();
  public:

  // string txId = 4;
  void clear_txid();
  const std::string& txid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_txid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_txid();
  PROTOBUF_NODISCARD std::string* release_txid();
  void set_allocated_txid(std::string* txid);
  private:
  const std::string& _internal_txid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_txid(const std::string& value);
  std::string* _internal_mutable_txid();
  public:

  // .protocol.Transaction transaction = 1;
  bool has_transaction() const;
  private:
  bool _internal_has_transaction() const;
  public:
  void clear_transaction();
  const ::protocol::Transaction& transaction() const;
  PROTOBUF_NODISCARD ::protocol::Transaction* release_transaction();
  ::protocol::Transaction* mutable_transaction();
  void set_allocated_transaction(::protocol::Transaction* transaction);
  private:
  const ::protocol::Transaction& _internal_transaction() const;
  ::protocol::Transaction* _internal_mutable_transaction();
  public:
  void unsafe_arena_set_allocated_transaction(
      ::protocol::Transaction* transaction);
  ::protocol::Transaction* unsafe_arena_release_transaction();

  // int64 valueBalance = 3;
  void clear_valuebalance();
  int64_t valuebalance() const;
  void set_valuebalance(int64_t value);
  private:
  int64_t _internal_valuebalance() const;
  void _internal_set_valuebalance(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:protocol.ZksnarkRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sighash_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr txid_;
  ::protocol::Transaction* transaction_;
  int64_t valuebalance_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_api_2fzksnark_2eproto;
};
// -------------------------------------------------------------------

class ZksnarkResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.ZksnarkResponse) */ {
 public:
  inline ZksnarkResponse() : ZksnarkResponse(nullptr) {}
  ~ZksnarkResponse() override;
  explicit constexpr ZksnarkResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZksnarkResponse(const ZksnarkResponse& from);
  ZksnarkResponse(ZksnarkResponse&& from) noexcept
    : ZksnarkResponse() {
    *this = ::std::move(from);
  }

  inline ZksnarkResponse& operator=(const ZksnarkResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZksnarkResponse& operator=(ZksnarkResponse&& from) noexcept {
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
  static const ZksnarkResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZksnarkResponse* internal_default_instance() {
    return reinterpret_cast<const ZksnarkResponse*>(
               &_ZksnarkResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ZksnarkResponse& a, ZksnarkResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ZksnarkResponse* other) {
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
  void UnsafeArenaSwap(ZksnarkResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZksnarkResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZksnarkResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZksnarkResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ZksnarkResponse& from);
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
  void InternalSwap(ZksnarkResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protocol.ZksnarkResponse";
  }
  protected:
  explicit ZksnarkResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ZksnarkResponse_Code Code;
  static constexpr Code SUCCESS =
    ZksnarkResponse_Code_SUCCESS;
  static constexpr Code FAILED =
    ZksnarkResponse_Code_FAILED;
  static inline bool Code_IsValid(int value) {
    return ZksnarkResponse_Code_IsValid(value);
  }
  static constexpr Code Code_MIN =
    ZksnarkResponse_Code_Code_MIN;
  static constexpr Code Code_MAX =
    ZksnarkResponse_Code_Code_MAX;
  static constexpr int Code_ARRAYSIZE =
    ZksnarkResponse_Code_Code_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Code_descriptor() {
    return ZksnarkResponse_Code_descriptor();
  }
  template<typename T>
  static inline const std::string& Code_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Code>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Code_Name.");
    return ZksnarkResponse_Code_Name(enum_t_value);
  }
  static inline bool Code_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Code* value) {
    return ZksnarkResponse_Code_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kCodeFieldNumber = 1,
  };
  // .protocol.ZksnarkResponse.Code code = 1;
  void clear_code();
  ::protocol::ZksnarkResponse_Code code() const;
  void set_code(::protocol::ZksnarkResponse_Code value);
  private:
  ::protocol::ZksnarkResponse_Code _internal_code() const;
  void _internal_set_code(::protocol::ZksnarkResponse_Code value);
  public:

  // @@protoc_insertion_point(class_scope:protocol.ZksnarkResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_api_2fzksnark_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZksnarkRequest

// .protocol.Transaction transaction = 1;
inline bool ZksnarkRequest::_internal_has_transaction() const {
  return this != internal_default_instance() && transaction_ != nullptr;
}
inline bool ZksnarkRequest::has_transaction() const {
  return _internal_has_transaction();
}
inline const ::protocol::Transaction& ZksnarkRequest::_internal_transaction() const {
  const ::protocol::Transaction* p = transaction_;
  return p != nullptr ? *p : reinterpret_cast<const ::protocol::Transaction&>(
      ::protocol::_Transaction_default_instance_);
}
inline const ::protocol::Transaction& ZksnarkRequest::transaction() const {
  // @@protoc_insertion_point(field_get:protocol.ZksnarkRequest.transaction)
  return _internal_transaction();
}
inline void ZksnarkRequest::unsafe_arena_set_allocated_transaction(
    ::protocol::Transaction* transaction) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(transaction_);
  }
  transaction_ = transaction;
  if (transaction) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:protocol.ZksnarkRequest.transaction)
}
inline ::protocol::Transaction* ZksnarkRequest::release_transaction() {
  
  ::protocol::Transaction* temp = transaction_;
  transaction_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::protocol::Transaction* ZksnarkRequest::unsafe_arena_release_transaction() {
  // @@protoc_insertion_point(field_release:protocol.ZksnarkRequest.transaction)
  
  ::protocol::Transaction* temp = transaction_;
  transaction_ = nullptr;
  return temp;
}
inline ::protocol::Transaction* ZksnarkRequest::_internal_mutable_transaction() {
  
  if (transaction_ == nullptr) {
    auto* p = CreateMaybeMessage<::protocol::Transaction>(GetArenaForAllocation());
    transaction_ = p;
  }
  return transaction_;
}
inline ::protocol::Transaction* ZksnarkRequest::mutable_transaction() {
  ::protocol::Transaction* _msg = _internal_mutable_transaction();
  // @@protoc_insertion_point(field_mutable:protocol.ZksnarkRequest.transaction)
  return _msg;
}
inline void ZksnarkRequest::set_allocated_transaction(::protocol::Transaction* transaction) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(transaction_);
  }
  if (transaction) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(transaction));
    if (message_arena != submessage_arena) {
      transaction = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, transaction, submessage_arena);
    }
    
  } else {
    
  }
  transaction_ = transaction;
  // @@protoc_insertion_point(field_set_allocated:protocol.ZksnarkRequest.transaction)
}

// bytes sighash = 2;
inline void ZksnarkRequest::clear_sighash() {
  sighash_.ClearToEmpty();
}
inline const std::string& ZksnarkRequest::sighash() const {
  // @@protoc_insertion_point(field_get:protocol.ZksnarkRequest.sighash)
  return _internal_sighash();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZksnarkRequest::set_sighash(ArgT0&& arg0, ArgT... args) {
 
 sighash_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:protocol.ZksnarkRequest.sighash)
}
inline std::string* ZksnarkRequest::mutable_sighash() {
  std::string* _s = _internal_mutable_sighash();
  // @@protoc_insertion_point(field_mutable:protocol.ZksnarkRequest.sighash)
  return _s;
}
inline const std::string& ZksnarkRequest::_internal_sighash() const {
  return sighash_.Get();
}
inline void ZksnarkRequest::_internal_set_sighash(const std::string& value) {
  
  sighash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ZksnarkRequest::_internal_mutable_sighash() {
  
  return sighash_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ZksnarkRequest::release_sighash() {
  // @@protoc_insertion_point(field_release:protocol.ZksnarkRequest.sighash)
  return sighash_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ZksnarkRequest::set_allocated_sighash(std::string* sighash) {
  if (sighash != nullptr) {
    
  } else {
    
  }
  sighash_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sighash,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (sighash_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    sighash_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:protocol.ZksnarkRequest.sighash)
}

// int64 valueBalance = 3;
inline void ZksnarkRequest::clear_valuebalance() {
  valuebalance_ = int64_t{0};
}
inline int64_t ZksnarkRequest::_internal_valuebalance() const {
  return valuebalance_;
}
inline int64_t ZksnarkRequest::valuebalance() const {
  // @@protoc_insertion_point(field_get:protocol.ZksnarkRequest.valueBalance)
  return _internal_valuebalance();
}
inline void ZksnarkRequest::_internal_set_valuebalance(int64_t value) {
  
  valuebalance_ = value;
}
inline void ZksnarkRequest::set_valuebalance(int64_t value) {
  _internal_set_valuebalance(value);
  // @@protoc_insertion_point(field_set:protocol.ZksnarkRequest.valueBalance)
}

// string txId = 4;
inline void ZksnarkRequest::clear_txid() {
  txid_.ClearToEmpty();
}
inline const std::string& ZksnarkRequest::txid() const {
  // @@protoc_insertion_point(field_get:protocol.ZksnarkRequest.txId)
  return _internal_txid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZksnarkRequest::set_txid(ArgT0&& arg0, ArgT... args) {
 
 txid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:protocol.ZksnarkRequest.txId)
}
inline std::string* ZksnarkRequest::mutable_txid() {
  std::string* _s = _internal_mutable_txid();
  // @@protoc_insertion_point(field_mutable:protocol.ZksnarkRequest.txId)
  return _s;
}
inline const std::string& ZksnarkRequest::_internal_txid() const {
  return txid_.Get();
}
inline void ZksnarkRequest::_internal_set_txid(const std::string& value) {
  
  txid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ZksnarkRequest::_internal_mutable_txid() {
  
  return txid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ZksnarkRequest::release_txid() {
  // @@protoc_insertion_point(field_release:protocol.ZksnarkRequest.txId)
  return txid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ZksnarkRequest::set_allocated_txid(std::string* txid) {
  if (txid != nullptr) {
    
  } else {
    
  }
  txid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), txid,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (txid_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    txid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:protocol.ZksnarkRequest.txId)
}

// -------------------------------------------------------------------

// ZksnarkResponse

// .protocol.ZksnarkResponse.Code code = 1;
inline void ZksnarkResponse::clear_code() {
  code_ = 0;
}
inline ::protocol::ZksnarkResponse_Code ZksnarkResponse::_internal_code() const {
  return static_cast< ::protocol::ZksnarkResponse_Code >(code_);
}
inline ::protocol::ZksnarkResponse_Code ZksnarkResponse::code() const {
  // @@protoc_insertion_point(field_get:protocol.ZksnarkResponse.code)
  return _internal_code();
}
inline void ZksnarkResponse::_internal_set_code(::protocol::ZksnarkResponse_Code value) {
  
  code_ = value;
}
inline void ZksnarkResponse::set_code(::protocol::ZksnarkResponse_Code value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:protocol.ZksnarkResponse.code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::protocol::ZksnarkResponse_Code> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::ZksnarkResponse_Code>() {
  return ::protocol::ZksnarkResponse_Code_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_api_2fzksnark_2eproto
