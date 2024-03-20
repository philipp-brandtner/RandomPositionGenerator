// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Data3d::Data3d(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_.y_)*/0
  , /*decltype(_impl_.z_)*/0} {}
struct Data3dDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Data3dDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Data3dDefaultTypeInternal() {}
  union {
    Data3d _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Data3dDefaultTypeInternal _Data3d_default_instance_;
PROTOBUF_CONSTEXPR GeneratedPosition::GeneratedPosition(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.position_)*/nullptr
  , /*decltype(_impl_.sensorid_)*/uint64_t{0u}
  , /*decltype(_impl_.timestamp_usec_)*/uint64_t{0u}} {}
struct GeneratedPositionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GeneratedPositionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GeneratedPositionDefaultTypeInternal() {}
  union {
    GeneratedPosition _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GeneratedPositionDefaultTypeInternal _GeneratedPosition_default_instance_;
static ::_pb::Metadata file_level_metadata_message_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_message_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_message_2eproto = nullptr;

const uint32_t TableStruct_message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Data3d, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::Data3d, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Data3d, _impl_.x_),
  PROTOBUF_FIELD_OFFSET(::Data3d, _impl_.y_),
  PROTOBUF_FIELD_OFFSET(::Data3d, _impl_.z_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::GeneratedPosition, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::GeneratedPosition, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::GeneratedPosition, _impl_.sensorid_),
  PROTOBUF_FIELD_OFFSET(::GeneratedPosition, _impl_.timestamp_usec_),
  PROTOBUF_FIELD_OFFSET(::GeneratedPosition, _impl_.position_),
  1,
  2,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::Data3d)},
  { 12, 21, -1, sizeof(::GeneratedPosition)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Data3d_default_instance_._instance,
  &::_GeneratedPosition_default_instance_._instance,
};

const char descriptor_table_protodef_message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rmessage.proto\")\n\006Data3d\022\t\n\001x\030\001 \002(\002\022\t\n\001"
  "y\030\002 \002(\002\022\t\n\001z\030\003 \002(\002\"X\n\021GeneratedPosition\022"
  "\020\n\010sensorId\030\001 \002(\004\022\026\n\016timestamp_usec\030\002 \002("
  "\004\022\031\n\010position\030\003 \002(\0132\007.Data3d"
  ;
static ::_pbi::once_flag descriptor_table_message_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_message_2eproto = {
    false, false, 148, descriptor_table_protodef_message_2eproto,
    "message.proto",
    &descriptor_table_message_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_message_2eproto::offsets,
    file_level_metadata_message_2eproto, file_level_enum_descriptors_message_2eproto,
    file_level_service_descriptors_message_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_message_2eproto_getter() {
  return &descriptor_table_message_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_message_2eproto(&descriptor_table_message_2eproto);

// ===================================================================

class Data3d::_Internal {
 public:
  using HasBits = decltype(std::declval<Data3d>()._impl_._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_z(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

Data3d::Data3d(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Data3d)
}
Data3d::Data3d(const Data3d& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Data3d* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.x_){}
    , decltype(_impl_.y_){}
    , decltype(_impl_.z_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.z_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.z_));
  // @@protoc_insertion_point(copy_constructor:Data3d)
}

inline void Data3d::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.x_){0}
    , decltype(_impl_.y_){0}
    , decltype(_impl_.z_){0}
  };
}

Data3d::~Data3d() {
  // @@protoc_insertion_point(destructor:Data3d)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Data3d::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Data3d::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Data3d::Clear() {
// @@protoc_insertion_point(message_clear_start:Data3d)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.z_) -
        reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.z_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Data3d::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _Internal::set_has_x(&has_bits);
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // required float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _Internal::set_has_y(&has_bits);
          _impl_.y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // required float z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          _Internal::set_has_z(&has_bits);
          _impl_.z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Data3d::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Data3d)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required float x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // required float y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  // required float z = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(3, this->_internal_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Data3d)
  return target;
}

size_t Data3d::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Data3d)
  size_t total_size = 0;

  if (_internal_has_x()) {
    // required float x = 1;
    total_size += 1 + 4;
  }

  if (_internal_has_y()) {
    // required float y = 2;
    total_size += 1 + 4;
  }

  if (_internal_has_z()) {
    // required float z = 3;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t Data3d::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Data3d)
  size_t total_size = 0;

  if (((_impl_._has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required float x = 1;
    total_size += 1 + 4;

    // required float y = 2;
    total_size += 1 + 4;

    // required float z = 3;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Data3d::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Data3d::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Data3d::GetClassData() const { return &_class_data_; }


void Data3d::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Data3d*>(&to_msg);
  auto& from = static_cast<const Data3d&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Data3d)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.x_ = from._impl_.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.y_ = from._impl_.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.z_ = from._impl_.z_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Data3d::CopyFrom(const Data3d& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Data3d)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Data3d::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void Data3d::InternalSwap(Data3d* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Data3d, _impl_.z_)
      + sizeof(Data3d::_impl_.z_)
      - PROTOBUF_FIELD_OFFSET(Data3d, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Data3d::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_2eproto_getter, &descriptor_table_message_2eproto_once,
      file_level_metadata_message_2eproto[0]);
}

// ===================================================================

class GeneratedPosition::_Internal {
 public:
  using HasBits = decltype(std::declval<GeneratedPosition>()._impl_._has_bits_);
  static void set_has_sensorid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timestamp_usec(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::Data3d& position(const GeneratedPosition* msg);
  static void set_has_position(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

const ::Data3d&
GeneratedPosition::_Internal::position(const GeneratedPosition* msg) {
  return *msg->_impl_.position_;
}
GeneratedPosition::GeneratedPosition(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:GeneratedPosition)
}
GeneratedPosition::GeneratedPosition(const GeneratedPosition& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GeneratedPosition* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.position_){nullptr}
    , decltype(_impl_.sensorid_){}
    , decltype(_impl_.timestamp_usec_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_position()) {
    _this->_impl_.position_ = new ::Data3d(*from._impl_.position_);
  }
  ::memcpy(&_impl_.sensorid_, &from._impl_.sensorid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.timestamp_usec_) -
    reinterpret_cast<char*>(&_impl_.sensorid_)) + sizeof(_impl_.timestamp_usec_));
  // @@protoc_insertion_point(copy_constructor:GeneratedPosition)
}

inline void GeneratedPosition::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.position_){nullptr}
    , decltype(_impl_.sensorid_){uint64_t{0u}}
    , decltype(_impl_.timestamp_usec_){uint64_t{0u}}
  };
}

GeneratedPosition::~GeneratedPosition() {
  // @@protoc_insertion_point(destructor:GeneratedPosition)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GeneratedPosition::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.position_;
}

void GeneratedPosition::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GeneratedPosition::Clear() {
// @@protoc_insertion_point(message_clear_start:GeneratedPosition)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(_impl_.position_ != nullptr);
    _impl_.position_->Clear();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&_impl_.sensorid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.timestamp_usec_) -
        reinterpret_cast<char*>(&_impl_.sensorid_)) + sizeof(_impl_.timestamp_usec_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GeneratedPosition::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required uint64 sensorId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_sensorid(&has_bits);
          _impl_.sensorid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required uint64 timestamp_usec = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_timestamp_usec(&has_bits);
          _impl_.timestamp_usec_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required .Data3d position = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_position(), ptr);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GeneratedPosition::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GeneratedPosition)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required uint64 sensorId = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_sensorid(), target);
  }

  // required uint64 timestamp_usec = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_timestamp_usec(), target);
  }

  // required .Data3d position = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::position(this),
        _Internal::position(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GeneratedPosition)
  return target;
}

size_t GeneratedPosition::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:GeneratedPosition)
  size_t total_size = 0;

  if (_internal_has_position()) {
    // required .Data3d position = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.position_);
  }

  if (_internal_has_sensorid()) {
    // required uint64 sensorId = 1;
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_sensorid());
  }

  if (_internal_has_timestamp_usec()) {
    // required uint64 timestamp_usec = 2;
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp_usec());
  }

  return total_size;
}
size_t GeneratedPosition::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GeneratedPosition)
  size_t total_size = 0;

  if (((_impl_._has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .Data3d position = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.position_);

    // required uint64 sensorId = 1;
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_sensorid());

    // required uint64 timestamp_usec = 2;
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp_usec());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GeneratedPosition::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GeneratedPosition::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GeneratedPosition::GetClassData() const { return &_class_data_; }


void GeneratedPosition::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GeneratedPosition*>(&to_msg);
  auto& from = static_cast<const GeneratedPosition&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:GeneratedPosition)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_position()->::Data3d::MergeFrom(
          from._internal_position());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.sensorid_ = from._impl_.sensorid_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.timestamp_usec_ = from._impl_.timestamp_usec_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GeneratedPosition::CopyFrom(const GeneratedPosition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GeneratedPosition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GeneratedPosition::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  if (_internal_has_position()) {
    if (!_impl_.position_->IsInitialized()) return false;
  }
  return true;
}

void GeneratedPosition::InternalSwap(GeneratedPosition* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GeneratedPosition, _impl_.timestamp_usec_)
      + sizeof(GeneratedPosition::_impl_.timestamp_usec_)
      - PROTOBUF_FIELD_OFFSET(GeneratedPosition, _impl_.position_)>(
          reinterpret_cast<char*>(&_impl_.position_),
          reinterpret_cast<char*>(&other->_impl_.position_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GeneratedPosition::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_2eproto_getter, &descriptor_table_message_2eproto_once,
      file_level_metadata_message_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Data3d*
Arena::CreateMaybeMessage< ::Data3d >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Data3d >(arena);
}
template<> PROTOBUF_NOINLINE ::GeneratedPosition*
Arena::CreateMaybeMessage< ::GeneratedPosition >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GeneratedPosition >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
