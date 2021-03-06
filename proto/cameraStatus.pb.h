// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cameraStatus.proto

#ifndef PROTOBUF_INCLUDED_cameraStatus_2eproto
#define PROTOBUF_INCLUDED_cameraStatus_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_cameraStatus_2eproto 

namespace protobuf_cameraStatus_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_cameraStatus_2eproto
namespace mmind {
class CameraStatus;
class CameraStatusDefaultTypeInternal;
extern CameraStatusDefaultTypeInternal _CameraStatus_default_instance_;
}  // namespace mmind
namespace google {
namespace protobuf {
template<> ::mmind::CameraStatus* Arena::CreateMaybeMessage<::mmind::CameraStatus>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mmind {

// ===================================================================

class CameraStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mmind.CameraStatus) */ {
 public:
  CameraStatus();
  virtual ~CameraStatus();

  CameraStatus(const CameraStatus& from);

  inline CameraStatus& operator=(const CameraStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CameraStatus(CameraStatus&& from) noexcept
    : CameraStatus() {
    *this = ::std::move(from);
  }

  inline CameraStatus& operator=(CameraStatus&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CameraStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CameraStatus* internal_default_instance() {
    return reinterpret_cast<const CameraStatus*>(
               &_CameraStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CameraStatus* other);
  friend void swap(CameraStatus& a, CameraStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CameraStatus* New() const final {
    return CreateMaybeMessage<CameraStatus>(NULL);
  }

  CameraStatus* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CameraStatus>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CameraStatus& from);
  void MergeFrom(const CameraStatus& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CameraStatus* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string serialId = 3;
  int serialid_size() const;
  void clear_serialid();
  static const int kSerialIdFieldNumber = 3;
  const ::std::string& serialid(int index) const;
  ::std::string* mutable_serialid(int index);
  void set_serialid(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_serialid(int index, ::std::string&& value);
  #endif
  void set_serialid(int index, const char* value);
  void set_serialid(int index, const char* value, size_t size);
  ::std::string* add_serialid();
  void add_serialid(const ::std::string& value);
  #if LANG_CXX11
  void add_serialid(::std::string&& value);
  #endif
  void add_serialid(const char* value);
  void add_serialid(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& serialid() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_serialid();

  // string ip = 1;
  void clear_ip();
  static const int kIpFieldNumber = 1;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // string version = 2;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // string eyeId = 4;
  void clear_eyeid();
  static const int kEyeIdFieldNumber = 4;
  const ::std::string& eyeid() const;
  void set_eyeid(const ::std::string& value);
  #if LANG_CXX11
  void set_eyeid(::std::string&& value);
  #endif
  void set_eyeid(const char* value);
  void set_eyeid(const char* value, size_t size);
  ::std::string* mutable_eyeid();
  ::std::string* release_eyeid();
  void set_allocated_eyeid(::std::string* eyeid);

  // string commit = 6;
  void clear_commit();
  static const int kCommitFieldNumber = 6;
  const ::std::string& commit() const;
  void set_commit(const ::std::string& value);
  #if LANG_CXX11
  void set_commit(::std::string&& value);
  #endif
  void set_commit(const char* value);
  void set_commit(const char* value, size_t size);
  ::std::string* mutable_commit();
  ::std::string* release_commit();
  void set_allocated_commit(::std::string* commit);

  // int32 cameraType = 5;
  void clear_cameratype();
  static const int kCameraTypeFieldNumber = 5;
  ::google::protobuf::int32 cameratype() const;
  void set_cameratype(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:mmind.CameraStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> serialid_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  ::google::protobuf::internal::ArenaStringPtr eyeid_;
  ::google::protobuf::internal::ArenaStringPtr commit_;
  ::google::protobuf::int32 cameratype_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_cameraStatus_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CameraStatus

// string ip = 1;
inline void CameraStatus::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CameraStatus::ip() const {
  // @@protoc_insertion_point(field_get:mmind.CameraStatus.ip)
  return ip_.GetNoArena();
}
inline void CameraStatus::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mmind.CameraStatus.ip)
}
#if LANG_CXX11
inline void CameraStatus::set_ip(::std::string&& value) {
  
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mmind.CameraStatus.ip)
}
#endif
inline void CameraStatus::set_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mmind.CameraStatus.ip)
}
inline void CameraStatus::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mmind.CameraStatus.ip)
}
inline ::std::string* CameraStatus::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:mmind.CameraStatus.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CameraStatus::release_ip() {
  // @@protoc_insertion_point(field_release:mmind.CameraStatus.ip)
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CameraStatus::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:mmind.CameraStatus.ip)
}

// string version = 2;
inline void CameraStatus::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CameraStatus::version() const {
  // @@protoc_insertion_point(field_get:mmind.CameraStatus.version)
  return version_.GetNoArena();
}
inline void CameraStatus::set_version(const ::std::string& value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mmind.CameraStatus.version)
}
#if LANG_CXX11
inline void CameraStatus::set_version(::std::string&& value) {
  
  version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mmind.CameraStatus.version)
}
#endif
inline void CameraStatus::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mmind.CameraStatus.version)
}
inline void CameraStatus::set_version(const char* value, size_t size) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mmind.CameraStatus.version)
}
inline ::std::string* CameraStatus::mutable_version() {
  
  // @@protoc_insertion_point(field_mutable:mmind.CameraStatus.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CameraStatus::release_version() {
  // @@protoc_insertion_point(field_release:mmind.CameraStatus.version)
  
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CameraStatus::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    
  } else {
    
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:mmind.CameraStatus.version)
}

// repeated string serialId = 3;
inline int CameraStatus::serialid_size() const {
  return serialid_.size();
}
inline void CameraStatus::clear_serialid() {
  serialid_.Clear();
}
inline const ::std::string& CameraStatus::serialid(int index) const {
  // @@protoc_insertion_point(field_get:mmind.CameraStatus.serialId)
  return serialid_.Get(index);
}
inline ::std::string* CameraStatus::mutable_serialid(int index) {
  // @@protoc_insertion_point(field_mutable:mmind.CameraStatus.serialId)
  return serialid_.Mutable(index);
}
inline void CameraStatus::set_serialid(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:mmind.CameraStatus.serialId)
  serialid_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void CameraStatus::set_serialid(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:mmind.CameraStatus.serialId)
  serialid_.Mutable(index)->assign(std::move(value));
}
#endif
inline void CameraStatus::set_serialid(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  serialid_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:mmind.CameraStatus.serialId)
}
inline void CameraStatus::set_serialid(int index, const char* value, size_t size) {
  serialid_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:mmind.CameraStatus.serialId)
}
inline ::std::string* CameraStatus::add_serialid() {
  // @@protoc_insertion_point(field_add_mutable:mmind.CameraStatus.serialId)
  return serialid_.Add();
}
inline void CameraStatus::add_serialid(const ::std::string& value) {
  serialid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:mmind.CameraStatus.serialId)
}
#if LANG_CXX11
inline void CameraStatus::add_serialid(::std::string&& value) {
  serialid_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:mmind.CameraStatus.serialId)
}
#endif
inline void CameraStatus::add_serialid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  serialid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:mmind.CameraStatus.serialId)
}
inline void CameraStatus::add_serialid(const char* value, size_t size) {
  serialid_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:mmind.CameraStatus.serialId)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CameraStatus::serialid() const {
  // @@protoc_insertion_point(field_list:mmind.CameraStatus.serialId)
  return serialid_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CameraStatus::mutable_serialid() {
  // @@protoc_insertion_point(field_mutable_list:mmind.CameraStatus.serialId)
  return &serialid_;
}

// string eyeId = 4;
inline void CameraStatus::clear_eyeid() {
  eyeid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CameraStatus::eyeid() const {
  // @@protoc_insertion_point(field_get:mmind.CameraStatus.eyeId)
  return eyeid_.GetNoArena();
}
inline void CameraStatus::set_eyeid(const ::std::string& value) {
  
  eyeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mmind.CameraStatus.eyeId)
}
#if LANG_CXX11
inline void CameraStatus::set_eyeid(::std::string&& value) {
  
  eyeid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mmind.CameraStatus.eyeId)
}
#endif
inline void CameraStatus::set_eyeid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  eyeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mmind.CameraStatus.eyeId)
}
inline void CameraStatus::set_eyeid(const char* value, size_t size) {
  
  eyeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mmind.CameraStatus.eyeId)
}
inline ::std::string* CameraStatus::mutable_eyeid() {
  
  // @@protoc_insertion_point(field_mutable:mmind.CameraStatus.eyeId)
  return eyeid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CameraStatus::release_eyeid() {
  // @@protoc_insertion_point(field_release:mmind.CameraStatus.eyeId)
  
  return eyeid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CameraStatus::set_allocated_eyeid(::std::string* eyeid) {
  if (eyeid != NULL) {
    
  } else {
    
  }
  eyeid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), eyeid);
  // @@protoc_insertion_point(field_set_allocated:mmind.CameraStatus.eyeId)
}

// int32 cameraType = 5;
inline void CameraStatus::clear_cameratype() {
  cameratype_ = 0;
}
inline ::google::protobuf::int32 CameraStatus::cameratype() const {
  // @@protoc_insertion_point(field_get:mmind.CameraStatus.cameraType)
  return cameratype_;
}
inline void CameraStatus::set_cameratype(::google::protobuf::int32 value) {
  
  cameratype_ = value;
  // @@protoc_insertion_point(field_set:mmind.CameraStatus.cameraType)
}

// string commit = 6;
inline void CameraStatus::clear_commit() {
  commit_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CameraStatus::commit() const {
  // @@protoc_insertion_point(field_get:mmind.CameraStatus.commit)
  return commit_.GetNoArena();
}
inline void CameraStatus::set_commit(const ::std::string& value) {
  
  commit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mmind.CameraStatus.commit)
}
#if LANG_CXX11
inline void CameraStatus::set_commit(::std::string&& value) {
  
  commit_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mmind.CameraStatus.commit)
}
#endif
inline void CameraStatus::set_commit(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  commit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mmind.CameraStatus.commit)
}
inline void CameraStatus::set_commit(const char* value, size_t size) {
  
  commit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mmind.CameraStatus.commit)
}
inline ::std::string* CameraStatus::mutable_commit() {
  
  // @@protoc_insertion_point(field_mutable:mmind.CameraStatus.commit)
  return commit_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CameraStatus::release_commit() {
  // @@protoc_insertion_point(field_release:mmind.CameraStatus.commit)
  
  return commit_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CameraStatus::set_allocated_commit(::std::string* commit) {
  if (commit != NULL) {
    
  } else {
    
  }
  commit_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), commit);
  // @@protoc_insertion_point(field_set_allocated:mmind.CameraStatus.commit)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mmind

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_cameraStatus_2eproto
