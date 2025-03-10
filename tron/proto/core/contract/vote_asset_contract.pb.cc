// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: core/contract/vote_asset_contract.proto

#include "core/contract/vote_asset_contract.pb.h"

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
constexpr VoteAssetContract::VoteAssetContract(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : vote_address_()
  , owner_address_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , support_(false)
  , count_(0){}
struct VoteAssetContractDefaultTypeInternal {
  constexpr VoteAssetContractDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~VoteAssetContractDefaultTypeInternal() {}
  union {
    VoteAssetContract _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT VoteAssetContractDefaultTypeInternal _VoteAssetContract_default_instance_;
}  // namespace protocol
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_core_2fcontract_2fvote_5fasset_5fcontract_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_core_2fcontract_2fvote_5fasset_5fcontract_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_core_2fcontract_2fvote_5fasset_5fcontract_2eproto = nullptr;

const uint32_t TableStruct_core_2fcontract_2fvote_5fasset_5fcontract_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protocol::VoteAssetContract, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::protocol::VoteAssetContract, owner_address_),
  PROTOBUF_FIELD_OFFSET(::protocol::VoteAssetContract, vote_address_),
  PROTOBUF_FIELD_OFFSET(::protocol::VoteAssetContract, support_),
  PROTOBUF_FIELD_OFFSET(::protocol::VoteAssetContract, count_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::protocol::VoteAssetContract)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protocol::_VoteAssetContract_default_instance_),
};

const char descriptor_table_protodef_core_2fcontract_2fvote_5fasset_5fcontract_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\'core/contract/vote_asset_contract.prot"
  "o\022\010protocol\"`\n\021VoteAssetContract\022\025\n\rowne"
  "r_address\030\001 \001(\014\022\024\n\014vote_address\030\002 \003(\014\022\017\n"
  "\007support\030\003 \001(\010\022\r\n\005count\030\005 \001(\005BE\n\030org.tro"
  "n.protos.contractZ)github.com/tronprotoc"
  "ol/grpc-gateway/coreb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto = {
  false, false, 228, descriptor_table_protodef_core_2fcontract_2fvote_5fasset_5fcontract_2eproto, "core/contract/vote_asset_contract.proto", 
  &descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_core_2fcontract_2fvote_5fasset_5fcontract_2eproto::offsets,
  file_level_metadata_core_2fcontract_2fvote_5fasset_5fcontract_2eproto, file_level_enum_descriptors_core_2fcontract_2fvote_5fasset_5fcontract_2eproto, file_level_service_descriptors_core_2fcontract_2fvote_5fasset_5fcontract_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto_getter() {
  return &descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_core_2fcontract_2fvote_5fasset_5fcontract_2eproto(&descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto);
namespace protocol {

// ===================================================================

class VoteAssetContract::_Internal {
 public:
};

VoteAssetContract::VoteAssetContract(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  vote_address_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protocol.VoteAssetContract)
}
VoteAssetContract::VoteAssetContract(const VoteAssetContract& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      vote_address_(from.vote_address_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  owner_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    owner_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_owner_address().empty()) {
    owner_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_owner_address(), 
      GetArenaForAllocation());
  }
  ::memcpy(&support_, &from.support_,
    static_cast<size_t>(reinterpret_cast<char*>(&count_) -
    reinterpret_cast<char*>(&support_)) + sizeof(count_));
  // @@protoc_insertion_point(copy_constructor:protocol.VoteAssetContract)
}

inline void VoteAssetContract::SharedCtor() {
owner_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  owner_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&support_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&count_) -
    reinterpret_cast<char*>(&support_)) + sizeof(count_));
}

VoteAssetContract::~VoteAssetContract() {
  // @@protoc_insertion_point(destructor:protocol.VoteAssetContract)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void VoteAssetContract::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  owner_address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void VoteAssetContract::ArenaDtor(void* object) {
  VoteAssetContract* _this = reinterpret_cast< VoteAssetContract* >(object);
  (void)_this;
}
void VoteAssetContract::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VoteAssetContract::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void VoteAssetContract::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.VoteAssetContract)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vote_address_.Clear();
  owner_address_.ClearToEmpty();
  ::memset(&support_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&count_) -
      reinterpret_cast<char*>(&support_)) + sizeof(count_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VoteAssetContract::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes owner_address = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_owner_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated bytes vote_address = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_vote_address();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // bool support = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          support_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 count = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

uint8_t* VoteAssetContract::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.VoteAssetContract)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes owner_address = 1;
  if (!this->_internal_owner_address().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_owner_address(), target);
  }

  // repeated bytes vote_address = 2;
  for (int i = 0, n = this->_internal_vote_address_size(); i < n; i++) {
    const auto& s = this->_internal_vote_address(i);
    target = stream->WriteBytes(2, s, target);
  }

  // bool support = 3;
  if (this->_internal_support() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_support(), target);
  }

  // int32 count = 5;
  if (this->_internal_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.VoteAssetContract)
  return target;
}

size_t VoteAssetContract::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.VoteAssetContract)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes vote_address = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(vote_address_.size());
  for (int i = 0, n = vote_address_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      vote_address_.Get(i));
  }

  // bytes owner_address = 1;
  if (!this->_internal_owner_address().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_owner_address());
  }

  // bool support = 3;
  if (this->_internal_support() != 0) {
    total_size += 1 + 1;
  }

  // int32 count = 5;
  if (this->_internal_count() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData VoteAssetContract::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    VoteAssetContract::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*VoteAssetContract::GetClassData() const { return &_class_data_; }

void VoteAssetContract::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<VoteAssetContract *>(to)->MergeFrom(
      static_cast<const VoteAssetContract &>(from));
}


void VoteAssetContract::MergeFrom(const VoteAssetContract& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.VoteAssetContract)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  vote_address_.MergeFrom(from.vote_address_);
  if (!from._internal_owner_address().empty()) {
    _internal_set_owner_address(from._internal_owner_address());
  }
  if (from._internal_support() != 0) {
    _internal_set_support(from._internal_support());
  }
  if (from._internal_count() != 0) {
    _internal_set_count(from._internal_count());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void VoteAssetContract::CopyFrom(const VoteAssetContract& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.VoteAssetContract)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VoteAssetContract::IsInitialized() const {
  return true;
}

void VoteAssetContract::InternalSwap(VoteAssetContract* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  vote_address_.InternalSwap(&other->vote_address_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &owner_address_, lhs_arena,
      &other->owner_address_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VoteAssetContract, count_)
      + sizeof(VoteAssetContract::count_)
      - PROTOBUF_FIELD_OFFSET(VoteAssetContract, support_)>(
          reinterpret_cast<char*>(&support_),
          reinterpret_cast<char*>(&other->support_));
}

::PROTOBUF_NAMESPACE_ID::Metadata VoteAssetContract::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto_getter, &descriptor_table_core_2fcontract_2fvote_5fasset_5fcontract_2eproto_once,
      file_level_metadata_core_2fcontract_2fvote_5fasset_5fcontract_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protocol::VoteAssetContract* Arena::CreateMaybeMessage< ::protocol::VoteAssetContract >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protocol::VoteAssetContract >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
