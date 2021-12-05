// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/zksnark.proto

#include "api/zksnark.pb.h"

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
namespace protocol {
constexpr ZksnarkRequest::ZksnarkRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : sighash_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , txid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , transaction_(nullptr)
  , valuebalance_(int64_t{0}){}
struct ZksnarkRequestDefaultTypeInternal {
  constexpr ZksnarkRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ZksnarkRequestDefaultTypeInternal() {}
  union {
    ZksnarkRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ZksnarkRequestDefaultTypeInternal _ZksnarkRequest_default_instance_;
constexpr ZksnarkResponse::ZksnarkResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : code_(0)
{}
struct ZksnarkResponseDefaultTypeInternal {
  constexpr ZksnarkResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ZksnarkResponseDefaultTypeInternal() {}
  union {
    ZksnarkResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ZksnarkResponseDefaultTypeInternal _ZksnarkResponse_default_instance_;
}  // namespace protocol
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_api_2fzksnark_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_api_2fzksnark_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_api_2fzksnark_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_api_2fzksnark_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protocol::ZksnarkRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protocol::ZksnarkRequest, transaction_),
  PROTOBUF_FIELD_OFFSET(::protocol::ZksnarkRequest, sighash_),
  PROTOBUF_FIELD_OFFSET(::protocol::ZksnarkRequest, valuebalance_),
  PROTOBUF_FIELD_OFFSET(::protocol::ZksnarkRequest, txid_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protocol::ZksnarkResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protocol::ZksnarkResponse, code_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::protocol::ZksnarkRequest)},
  { 9, -1, sizeof(::protocol::ZksnarkResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protocol::_ZksnarkRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protocol::_ZksnarkResponse_default_instance_),
};

const char descriptor_table_protodef_api_2fzksnark_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021api/zksnark.proto\022\010protocol\032\017core/Tron"
  ".proto\"q\n\016ZksnarkRequest\022*\n\013transaction\030"
  "\001 \001(\0132\025.protocol.Transaction\022\017\n\007sighash\030"
  "\002 \001(\014\022\024\n\014valueBalance\030\003 \001(\003\022\014\n\004txId\030\004 \001("
  "\t\"`\n\017ZksnarkResponse\022,\n\004code\030\001 \001(\0162\036.pro"
  "tocol.ZksnarkResponse.Code\"\037\n\004Code\022\013\n\007SU"
  "CCESS\020\000\022\n\n\006FAILED\020\0012Y\n\013TronZksnark\022J\n\021Ch"
  "eckZksnarkProof\022\030.protocol.ZksnarkReques"
  "t\032\031.protocol.ZksnarkResponse\"\000BH\n\014org.tr"
  "on.apiB\016ZksnarkGrpcAPIZ(github.com/tronp"
  "rotocol/grpc-gateway/apib\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_api_2fzksnark_2eproto_deps[1] = {
  &::descriptor_table_core_2fTron_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_api_2fzksnark_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_api_2fzksnark_2eproto = {
  false, false, 432, descriptor_table_protodef_api_2fzksnark_2eproto, "api/zksnark.proto", 
  &descriptor_table_api_2fzksnark_2eproto_once, descriptor_table_api_2fzksnark_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_api_2fzksnark_2eproto::offsets,
  file_level_metadata_api_2fzksnark_2eproto, file_level_enum_descriptors_api_2fzksnark_2eproto, file_level_service_descriptors_api_2fzksnark_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_api_2fzksnark_2eproto_getter() {
  return &descriptor_table_api_2fzksnark_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_api_2fzksnark_2eproto(&descriptor_table_api_2fzksnark_2eproto);
namespace protocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZksnarkResponse_Code_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_api_2fzksnark_2eproto);
  return file_level_enum_descriptors_api_2fzksnark_2eproto[0];
}
bool ZksnarkResponse_Code_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr ZksnarkResponse_Code ZksnarkResponse::SUCCESS;
constexpr ZksnarkResponse_Code ZksnarkResponse::FAILED;
constexpr ZksnarkResponse_Code ZksnarkResponse::Code_MIN;
constexpr ZksnarkResponse_Code ZksnarkResponse::Code_MAX;
constexpr int ZksnarkResponse::Code_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class ZksnarkRequest::_Internal {
 public:
  static const ::protocol::Transaction& transaction(const ZksnarkRequest* msg);
};

const ::protocol::Transaction&
ZksnarkRequest::_Internal::transaction(const ZksnarkRequest* msg) {
  return *msg->transaction_;
}
void ZksnarkRequest::clear_transaction() {
  if (GetArenaForAllocation() == nullptr && transaction_ != nullptr) {
    delete transaction_;
  }
  transaction_ = nullptr;
}
ZksnarkRequest::ZksnarkRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protocol.ZksnarkRequest)
}
ZksnarkRequest::ZksnarkRequest(const ZksnarkRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  sighash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sighash().empty()) {
    sighash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sighash(), 
      GetArenaForAllocation());
  }
  txid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_txid().empty()) {
    txid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_txid(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_transaction()) {
    transaction_ = new ::protocol::Transaction(*from.transaction_);
  } else {
    transaction_ = nullptr;
  }
  valuebalance_ = from.valuebalance_;
  // @@protoc_insertion_point(copy_constructor:protocol.ZksnarkRequest)
}

inline void ZksnarkRequest::SharedCtor() {
sighash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
txid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&transaction_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&valuebalance_) -
    reinterpret_cast<char*>(&transaction_)) + sizeof(valuebalance_));
}

ZksnarkRequest::~ZksnarkRequest() {
  // @@protoc_insertion_point(destructor:protocol.ZksnarkRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ZksnarkRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  sighash_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  txid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete transaction_;
}

void ZksnarkRequest::ArenaDtor(void* object) {
  ZksnarkRequest* _this = reinterpret_cast< ZksnarkRequest* >(object);
  (void)_this;
}
void ZksnarkRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZksnarkRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ZksnarkRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ZksnarkRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sighash_.ClearToEmpty();
  txid_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && transaction_ != nullptr) {
    delete transaction_;
  }
  transaction_ = nullptr;
  valuebalance_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZksnarkRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .protocol.Transaction transaction = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_transaction(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes sighash = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_sighash();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 valueBalance = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          valuebalance_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string txId = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_txid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "protocol.ZksnarkRequest.txId"));
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ZksnarkRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ZksnarkRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .protocol.Transaction transaction = 1;
  if (this->_internal_has_transaction()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::transaction(this), target, stream);
  }

  // bytes sighash = 2;
  if (!this->_internal_sighash().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_sighash(), target);
  }

  // int64 valueBalance = 3;
  if (this->_internal_valuebalance() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_valuebalance(), target);
  }

  // string txId = 4;
  if (!this->_internal_txid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_txid().data(), static_cast<int>(this->_internal_txid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "protocol.ZksnarkRequest.txId");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_txid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.ZksnarkRequest)
  return target;
}

size_t ZksnarkRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ZksnarkRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes sighash = 2;
  if (!this->_internal_sighash().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sighash());
  }

  // string txId = 4;
  if (!this->_internal_txid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_txid());
  }

  // .protocol.Transaction transaction = 1;
  if (this->_internal_has_transaction()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *transaction_);
  }

  // int64 valueBalance = 3;
  if (this->_internal_valuebalance() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_valuebalance());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ZksnarkRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ZksnarkRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ZksnarkRequest::GetClassData() const { return &_class_data_; }

void ZksnarkRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ZksnarkRequest *>(to)->MergeFrom(
      static_cast<const ZksnarkRequest &>(from));
}


void ZksnarkRequest::MergeFrom(const ZksnarkRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ZksnarkRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_sighash().empty()) {
    _internal_set_sighash(from._internal_sighash());
  }
  if (!from._internal_txid().empty()) {
    _internal_set_txid(from._internal_txid());
  }
  if (from._internal_has_transaction()) {
    _internal_mutable_transaction()->::protocol::Transaction::MergeFrom(from._internal_transaction());
  }
  if (from._internal_valuebalance() != 0) {
    _internal_set_valuebalance(from._internal_valuebalance());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ZksnarkRequest::CopyFrom(const ZksnarkRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ZksnarkRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZksnarkRequest::IsInitialized() const {
  return true;
}

void ZksnarkRequest::InternalSwap(ZksnarkRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &sighash_, GetArenaForAllocation(),
      &other->sighash_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &txid_, GetArenaForAllocation(),
      &other->txid_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ZksnarkRequest, valuebalance_)
      + sizeof(ZksnarkRequest::valuebalance_)
      - PROTOBUF_FIELD_OFFSET(ZksnarkRequest, transaction_)>(
          reinterpret_cast<char*>(&transaction_),
          reinterpret_cast<char*>(&other->transaction_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ZksnarkRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_api_2fzksnark_2eproto_getter, &descriptor_table_api_2fzksnark_2eproto_once,
      file_level_metadata_api_2fzksnark_2eproto[0]);
}

// ===================================================================

class ZksnarkResponse::_Internal {
 public:
};

ZksnarkResponse::ZksnarkResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protocol.ZksnarkResponse)
}
ZksnarkResponse::ZksnarkResponse(const ZksnarkResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:protocol.ZksnarkResponse)
}

inline void ZksnarkResponse::SharedCtor() {
code_ = 0;
}

ZksnarkResponse::~ZksnarkResponse() {
  // @@protoc_insertion_point(destructor:protocol.ZksnarkResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ZksnarkResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ZksnarkResponse::ArenaDtor(void* object) {
  ZksnarkResponse* _this = reinterpret_cast< ZksnarkResponse* >(object);
  (void)_this;
}
void ZksnarkResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZksnarkResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ZksnarkResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ZksnarkResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  code_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZksnarkResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .protocol.ZksnarkResponse.Code code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_code(static_cast<::protocol::ZksnarkResponse_Code>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* ZksnarkResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ZksnarkResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .protocol.ZksnarkResponse.Code code = 1;
  if (this->_internal_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.ZksnarkResponse)
  return target;
}

size_t ZksnarkResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ZksnarkResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .protocol.ZksnarkResponse.Code code = 1;
  if (this->_internal_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ZksnarkResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ZksnarkResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ZksnarkResponse::GetClassData() const { return &_class_data_; }

void ZksnarkResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ZksnarkResponse *>(to)->MergeFrom(
      static_cast<const ZksnarkResponse &>(from));
}


void ZksnarkResponse::MergeFrom(const ZksnarkResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ZksnarkResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_code() != 0) {
    _internal_set_code(from._internal_code());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ZksnarkResponse::CopyFrom(const ZksnarkResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ZksnarkResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZksnarkResponse::IsInitialized() const {
  return true;
}

void ZksnarkResponse::InternalSwap(ZksnarkResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(code_, other->code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ZksnarkResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_api_2fzksnark_2eproto_getter, &descriptor_table_api_2fzksnark_2eproto_once,
      file_level_metadata_api_2fzksnark_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protocol::ZksnarkRequest* Arena::CreateMaybeMessage< ::protocol::ZksnarkRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protocol::ZksnarkRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::protocol::ZksnarkResponse* Arena::CreateMaybeMessage< ::protocol::ZksnarkResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protocol::ZksnarkResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
