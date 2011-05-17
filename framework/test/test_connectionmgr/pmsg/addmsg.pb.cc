// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "addmsg.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Test {

namespace {

const ::google::protobuf::Descriptor* AddMsgRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddMsgRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* AddMsgResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddMsgResult_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_addmsg_2eproto() {
  protobuf_AddDesc_addmsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "addmsg.proto");
  GOOGLE_CHECK(file != NULL);
  AddMsgRequest_descriptor_ = file->message_type(0);
  static const int AddMsgRequest_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgRequest, isequenceid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgRequest, param1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgRequest, param2_),
  };
  AddMsgRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AddMsgRequest_descriptor_,
      AddMsgRequest::default_instance_,
      AddMsgRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AddMsgRequest));
  AddMsgResult_descriptor_ = file->message_type(1);
  static const int AddMsgResult_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgResult, isequenceid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgResult, error_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgResult, errmsg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgResult, sum_),
  };
  AddMsgResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AddMsgResult_descriptor_,
      AddMsgResult::default_instance_,
      AddMsgResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddMsgResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AddMsgResult));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_addmsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AddMsgRequest_descriptor_, &AddMsgRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AddMsgResult_descriptor_, &AddMsgResult::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_addmsg_2eproto() {
  delete AddMsgRequest::default_instance_;
  delete AddMsgRequest_reflection_;
  delete AddMsgResult::default_instance_;
  delete AddMsgResult_reflection_;
}

void protobuf_AddDesc_addmsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014addmsg.proto\022\004Test\"D\n\rAddMsgRequest\022\023\n"
    "\013iSequenceID\030\001 \002(\r\022\016\n\006param1\030\002 \002(\r\022\016\n\006pa"
    "ram2\030\003 \002(\r\"O\n\014AddMsgResult\022\023\n\013iSequenceI"
    "D\030\001 \002(\r\022\r\n\005error\030\002 \002(\005\022\016\n\006errmsg\030\003 \001(\t\022\013"
    "\n\003sum\030\004 \001(\r", 171);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "addmsg.proto", &protobuf_RegisterTypes);
  AddMsgRequest::default_instance_ = new AddMsgRequest();
  AddMsgResult::default_instance_ = new AddMsgResult();
  AddMsgRequest::default_instance_->InitAsDefaultInstance();
  AddMsgResult::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_addmsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_addmsg_2eproto {
  StaticDescriptorInitializer_addmsg_2eproto() {
    protobuf_AddDesc_addmsg_2eproto();
  }
} static_descriptor_initializer_addmsg_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int AddMsgRequest::kISequenceIDFieldNumber;
const int AddMsgRequest::kParam1FieldNumber;
const int AddMsgRequest::kParam2FieldNumber;
#endif  // !_MSC_VER

AddMsgRequest::AddMsgRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AddMsgRequest::InitAsDefaultInstance() {
}

AddMsgRequest::AddMsgRequest(const AddMsgRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AddMsgRequest::SharedCtor() {
  _cached_size_ = 0;
  isequenceid_ = 0u;
  param1_ = 0u;
  param2_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AddMsgRequest::~AddMsgRequest() {
  SharedDtor();
}

void AddMsgRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AddMsgRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddMsgRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddMsgRequest_descriptor_;
}

const AddMsgRequest& AddMsgRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_addmsg_2eproto();  return *default_instance_;
}

AddMsgRequest* AddMsgRequest::default_instance_ = NULL;

AddMsgRequest* AddMsgRequest::New() const {
  return new AddMsgRequest;
}

void AddMsgRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    isequenceid_ = 0u;
    param1_ = 0u;
    param2_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AddMsgRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 iSequenceID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &isequenceid_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_param1;
        break;
      }
      
      // required uint32 param1 = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_param1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param1_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_param2;
        break;
      }
      
      // required uint32 param2 = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_param2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param2_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AddMsgRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 iSequenceID = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->isequenceid(), output);
  }
  
  // required uint32 param1 = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->param1(), output);
  }
  
  // required uint32 param2 = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->param2(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AddMsgRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 iSequenceID = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->isequenceid(), target);
  }
  
  // required uint32 param1 = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->param1(), target);
  }
  
  // required uint32 param2 = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->param2(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AddMsgRequest::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 iSequenceID = 1;
    if (has_isequenceid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->isequenceid());
    }
    
    // required uint32 param1 = 2;
    if (has_param1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->param1());
    }
    
    // required uint32 param2 = 3;
    if (has_param2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->param2());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddMsgRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AddMsgRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AddMsgRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AddMsgRequest::MergeFrom(const AddMsgRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_isequenceid(from.isequenceid());
    }
    if (from._has_bit(1)) {
      set_param1(from.param1());
    }
    if (from._has_bit(2)) {
      set_param2(from.param2());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AddMsgRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddMsgRequest::CopyFrom(const AddMsgRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddMsgRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void AddMsgRequest::Swap(AddMsgRequest* other) {
  if (other != this) {
    std::swap(isequenceid_, other->isequenceid_);
    std::swap(param1_, other->param1_);
    std::swap(param2_, other->param2_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AddMsgRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddMsgRequest_descriptor_;
  metadata.reflection = AddMsgRequest_reflection_;
  return metadata;
}


// ===================================================================

const ::std::string AddMsgResult::_default_errmsg_;
#ifndef _MSC_VER
const int AddMsgResult::kISequenceIDFieldNumber;
const int AddMsgResult::kErrorFieldNumber;
const int AddMsgResult::kErrmsgFieldNumber;
const int AddMsgResult::kSumFieldNumber;
#endif  // !_MSC_VER

AddMsgResult::AddMsgResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AddMsgResult::InitAsDefaultInstance() {
}

AddMsgResult::AddMsgResult(const AddMsgResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AddMsgResult::SharedCtor() {
  _cached_size_ = 0;
  isequenceid_ = 0u;
  error_ = 0;
  errmsg_ = const_cast< ::std::string*>(&_default_errmsg_);
  sum_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AddMsgResult::~AddMsgResult() {
  SharedDtor();
}

void AddMsgResult::SharedDtor() {
  if (errmsg_ != &_default_errmsg_) {
    delete errmsg_;
  }
  if (this != default_instance_) {
  }
}

void AddMsgResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddMsgResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddMsgResult_descriptor_;
}

const AddMsgResult& AddMsgResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_addmsg_2eproto();  return *default_instance_;
}

AddMsgResult* AddMsgResult::default_instance_ = NULL;

AddMsgResult* AddMsgResult::New() const {
  return new AddMsgResult;
}

void AddMsgResult::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    isequenceid_ = 0u;
    error_ = 0;
    if (_has_bit(2)) {
      if (errmsg_ != &_default_errmsg_) {
        errmsg_->clear();
      }
    }
    sum_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AddMsgResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 iSequenceID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &isequenceid_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_error;
        break;
      }
      
      // required int32 error = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_error:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_errmsg;
        break;
      }
      
      // optional string errmsg = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_errmsg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_errmsg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->errmsg().data(), this->errmsg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_sum;
        break;
      }
      
      // optional uint32 sum = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sum_)));
          _set_bit(3);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AddMsgResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 iSequenceID = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->isequenceid(), output);
  }
  
  // required int32 error = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->error(), output);
  }
  
  // optional string errmsg = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->errmsg().data(), this->errmsg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->errmsg(), output);
  }
  
  // optional uint32 sum = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->sum(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AddMsgResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 iSequenceID = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->isequenceid(), target);
  }
  
  // required int32 error = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->error(), target);
  }
  
  // optional string errmsg = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->errmsg().data(), this->errmsg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->errmsg(), target);
  }
  
  // optional uint32 sum = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->sum(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AddMsgResult::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 iSequenceID = 1;
    if (has_isequenceid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->isequenceid());
    }
    
    // required int32 error = 2;
    if (has_error()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->error());
    }
    
    // optional string errmsg = 3;
    if (has_errmsg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->errmsg());
    }
    
    // optional uint32 sum = 4;
    if (has_sum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sum());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddMsgResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AddMsgResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AddMsgResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AddMsgResult::MergeFrom(const AddMsgResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_isequenceid(from.isequenceid());
    }
    if (from._has_bit(1)) {
      set_error(from.error());
    }
    if (from._has_bit(2)) {
      set_errmsg(from.errmsg());
    }
    if (from._has_bit(3)) {
      set_sum(from.sum());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AddMsgResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddMsgResult::CopyFrom(const AddMsgResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddMsgResult::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void AddMsgResult::Swap(AddMsgResult* other) {
  if (other != this) {
    std::swap(isequenceid_, other->isequenceid_);
    std::swap(error_, other->error_);
    std::swap(errmsg_, other->errmsg_);
    std::swap(sum_, other->sum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AddMsgResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddMsgResult_descriptor_;
  metadata.reflection = AddMsgResult_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Test

// @@protoc_insertion_point(global_scope)
