// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: secdata_transfer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_secdata_5ftransfer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_secdata_5ftransfer_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_secdata_5ftransfer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_secdata_5ftransfer_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_secdata_5ftransfer_2eproto;
namespace secdata_transfer {
class KlineReply;
class KlineReplyDefaultTypeInternal;
extern KlineReplyDefaultTypeInternal _KlineReply_default_instance_;
class KlineRequest;
class KlineRequestDefaultTypeInternal;
extern KlineRequestDefaultTypeInternal _KlineRequest_default_instance_;
}  // namespace secdata_transfer
PROTOBUF_NAMESPACE_OPEN
template<> ::secdata_transfer::KlineReply* Arena::CreateMaybeMessage<::secdata_transfer::KlineReply>(Arena*);
template<> ::secdata_transfer::KlineRequest* Arena::CreateMaybeMessage<::secdata_transfer::KlineRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace secdata_transfer {

// ===================================================================

class KlineRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:secdata_transfer.KlineRequest) */ {
 public:
  KlineRequest();
  virtual ~KlineRequest();

  KlineRequest(const KlineRequest& from);
  KlineRequest(KlineRequest&& from) noexcept
    : KlineRequest() {
    *this = ::std::move(from);
  }

  inline KlineRequest& operator=(const KlineRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline KlineRequest& operator=(KlineRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const KlineRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const KlineRequest* internal_default_instance() {
    return reinterpret_cast<const KlineRequest*>(
               &_KlineRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KlineRequest& a, KlineRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(KlineRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KlineRequest* New() const final {
    return CreateMaybeMessage<KlineRequest>(nullptr);
  }

  KlineRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KlineRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KlineRequest& from);
  void MergeFrom(const KlineRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(KlineRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "secdata_transfer.KlineRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_secdata_5ftransfer_2eproto);
    return ::descriptor_table_secdata_5ftransfer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCodeFieldNumber = 2,
    kPeriodFieldNumber = 3,
    kOpenFieldNumber = 4,
    kHighFieldNumber = 5,
    kLowFieldNumber = 6,
    kCloseFieldNumber = 7,
    kVolFieldNumber = 8,
    kAmountFieldNumber = 9,
    kTsFieldNumber = 1,
  };
  // string code = 2;
  void clear_code();
  const std::string& code() const;
  void set_code(const std::string& value);
  void set_code(std::string&& value);
  void set_code(const char* value);
  void set_code(const char* value, size_t size);
  std::string* mutable_code();
  std::string* release_code();
  void set_allocated_code(std::string* code);
  private:
  const std::string& _internal_code() const;
  void _internal_set_code(const std::string& value);
  std::string* _internal_mutable_code();
  public:

  // string period = 3;
  void clear_period();
  const std::string& period() const;
  void set_period(const std::string& value);
  void set_period(std::string&& value);
  void set_period(const char* value);
  void set_period(const char* value, size_t size);
  std::string* mutable_period();
  std::string* release_period();
  void set_allocated_period(std::string* period);
  private:
  const std::string& _internal_period() const;
  void _internal_set_period(const std::string& value);
  std::string* _internal_mutable_period();
  public:

  // double open = 4;
  void clear_open();
  double open() const;
  void set_open(double value);
  private:
  double _internal_open() const;
  void _internal_set_open(double value);
  public:

  // double high = 5;
  void clear_high();
  double high() const;
  void set_high(double value);
  private:
  double _internal_high() const;
  void _internal_set_high(double value);
  public:

  // double low = 6;
  void clear_low();
  double low() const;
  void set_low(double value);
  private:
  double _internal_low() const;
  void _internal_set_low(double value);
  public:

  // double close = 7;
  void clear_close();
  double close() const;
  void set_close(double value);
  private:
  double _internal_close() const;
  void _internal_set_close(double value);
  public:

  // int64 vol = 8;
  void clear_vol();
  ::PROTOBUF_NAMESPACE_ID::int64 vol() const;
  void set_vol(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_vol() const;
  void _internal_set_vol(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // double amount = 9;
  void clear_amount();
  double amount() const;
  void set_amount(double value);
  private:
  double _internal_amount() const;
  void _internal_set_amount(double value);
  public:

  // int32 ts = 1;
  void clear_ts();
  ::PROTOBUF_NAMESPACE_ID::int32 ts() const;
  void set_ts(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_ts() const;
  void _internal_set_ts(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:secdata_transfer.KlineRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr code_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr period_;
  double open_;
  double high_;
  double low_;
  double close_;
  ::PROTOBUF_NAMESPACE_ID::int64 vol_;
  double amount_;
  ::PROTOBUF_NAMESPACE_ID::int32 ts_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_secdata_5ftransfer_2eproto;
};
// -------------------------------------------------------------------

class KlineReply :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:secdata_transfer.KlineReply) */ {
 public:
  KlineReply();
  virtual ~KlineReply();

  KlineReply(const KlineReply& from);
  KlineReply(KlineReply&& from) noexcept
    : KlineReply() {
    *this = ::std::move(from);
  }

  inline KlineReply& operator=(const KlineReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline KlineReply& operator=(KlineReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const KlineReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const KlineReply* internal_default_instance() {
    return reinterpret_cast<const KlineReply*>(
               &_KlineReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(KlineReply& a, KlineReply& b) {
    a.Swap(&b);
  }
  inline void Swap(KlineReply* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KlineReply* New() const final {
    return CreateMaybeMessage<KlineReply>(nullptr);
  }

  KlineReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KlineReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KlineReply& from);
  void MergeFrom(const KlineReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(KlineReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "secdata_transfer.KlineReply";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_secdata_5ftransfer_2eproto);
    return ::descriptor_table_secdata_5ftransfer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 2,
    kStatusFieldNumber = 1,
  };
  // string message = 2;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // int32 status = 1;
  void clear_status();
  ::PROTOBUF_NAMESPACE_ID::int32 status() const;
  void set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_status() const;
  void _internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:secdata_transfer.KlineReply)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::int32 status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_secdata_5ftransfer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KlineRequest

// int32 ts = 1;
inline void KlineRequest::clear_ts() {
  ts_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 KlineRequest::_internal_ts() const {
  return ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 KlineRequest::ts() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.ts)
  return _internal_ts();
}
inline void KlineRequest::_internal_set_ts(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  ts_ = value;
}
inline void KlineRequest::set_ts(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_ts(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.ts)
}

// string code = 2;
inline void KlineRequest::clear_code() {
  code_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& KlineRequest::code() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.code)
  return _internal_code();
}
inline void KlineRequest::set_code(const std::string& value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.code)
}
inline std::string* KlineRequest::mutable_code() {
  // @@protoc_insertion_point(field_mutable:secdata_transfer.KlineRequest.code)
  return _internal_mutable_code();
}
inline const std::string& KlineRequest::_internal_code() const {
  return code_.GetNoArena();
}
inline void KlineRequest::_internal_set_code(const std::string& value) {
  
  code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void KlineRequest::set_code(std::string&& value) {
  
  code_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:secdata_transfer.KlineRequest.code)
}
inline void KlineRequest::set_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:secdata_transfer.KlineRequest.code)
}
inline void KlineRequest::set_code(const char* value, size_t size) {
  
  code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:secdata_transfer.KlineRequest.code)
}
inline std::string* KlineRequest::_internal_mutable_code() {
  
  return code_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* KlineRequest::release_code() {
  // @@protoc_insertion_point(field_release:secdata_transfer.KlineRequest.code)
  
  return code_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void KlineRequest::set_allocated_code(std::string* code) {
  if (code != nullptr) {
    
  } else {
    
  }
  code_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:secdata_transfer.KlineRequest.code)
}

// string period = 3;
inline void KlineRequest::clear_period() {
  period_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& KlineRequest::period() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.period)
  return _internal_period();
}
inline void KlineRequest::set_period(const std::string& value) {
  _internal_set_period(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.period)
}
inline std::string* KlineRequest::mutable_period() {
  // @@protoc_insertion_point(field_mutable:secdata_transfer.KlineRequest.period)
  return _internal_mutable_period();
}
inline const std::string& KlineRequest::_internal_period() const {
  return period_.GetNoArena();
}
inline void KlineRequest::_internal_set_period(const std::string& value) {
  
  period_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void KlineRequest::set_period(std::string&& value) {
  
  period_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:secdata_transfer.KlineRequest.period)
}
inline void KlineRequest::set_period(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  period_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:secdata_transfer.KlineRequest.period)
}
inline void KlineRequest::set_period(const char* value, size_t size) {
  
  period_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:secdata_transfer.KlineRequest.period)
}
inline std::string* KlineRequest::_internal_mutable_period() {
  
  return period_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* KlineRequest::release_period() {
  // @@protoc_insertion_point(field_release:secdata_transfer.KlineRequest.period)
  
  return period_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void KlineRequest::set_allocated_period(std::string* period) {
  if (period != nullptr) {
    
  } else {
    
  }
  period_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), period);
  // @@protoc_insertion_point(field_set_allocated:secdata_transfer.KlineRequest.period)
}

// double open = 4;
inline void KlineRequest::clear_open() {
  open_ = 0;
}
inline double KlineRequest::_internal_open() const {
  return open_;
}
inline double KlineRequest::open() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.open)
  return _internal_open();
}
inline void KlineRequest::_internal_set_open(double value) {
  
  open_ = value;
}
inline void KlineRequest::set_open(double value) {
  _internal_set_open(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.open)
}

// double high = 5;
inline void KlineRequest::clear_high() {
  high_ = 0;
}
inline double KlineRequest::_internal_high() const {
  return high_;
}
inline double KlineRequest::high() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.high)
  return _internal_high();
}
inline void KlineRequest::_internal_set_high(double value) {
  
  high_ = value;
}
inline void KlineRequest::set_high(double value) {
  _internal_set_high(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.high)
}

// double low = 6;
inline void KlineRequest::clear_low() {
  low_ = 0;
}
inline double KlineRequest::_internal_low() const {
  return low_;
}
inline double KlineRequest::low() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.low)
  return _internal_low();
}
inline void KlineRequest::_internal_set_low(double value) {
  
  low_ = value;
}
inline void KlineRequest::set_low(double value) {
  _internal_set_low(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.low)
}

// double close = 7;
inline void KlineRequest::clear_close() {
  close_ = 0;
}
inline double KlineRequest::_internal_close() const {
  return close_;
}
inline double KlineRequest::close() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.close)
  return _internal_close();
}
inline void KlineRequest::_internal_set_close(double value) {
  
  close_ = value;
}
inline void KlineRequest::set_close(double value) {
  _internal_set_close(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.close)
}

// int64 vol = 8;
inline void KlineRequest::clear_vol() {
  vol_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 KlineRequest::_internal_vol() const {
  return vol_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 KlineRequest::vol() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.vol)
  return _internal_vol();
}
inline void KlineRequest::_internal_set_vol(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  vol_ = value;
}
inline void KlineRequest::set_vol(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_vol(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.vol)
}

// double amount = 9;
inline void KlineRequest::clear_amount() {
  amount_ = 0;
}
inline double KlineRequest::_internal_amount() const {
  return amount_;
}
inline double KlineRequest::amount() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineRequest.amount)
  return _internal_amount();
}
inline void KlineRequest::_internal_set_amount(double value) {
  
  amount_ = value;
}
inline void KlineRequest::set_amount(double value) {
  _internal_set_amount(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineRequest.amount)
}

// -------------------------------------------------------------------

// KlineReply

// int32 status = 1;
inline void KlineReply::clear_status() {
  status_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 KlineReply::_internal_status() const {
  return status_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 KlineReply::status() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineReply.status)
  return _internal_status();
}
inline void KlineReply::_internal_set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  status_ = value;
}
inline void KlineReply::set_status(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineReply.status)
}

// string message = 2;
inline void KlineReply::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& KlineReply::message() const {
  // @@protoc_insertion_point(field_get:secdata_transfer.KlineReply.message)
  return _internal_message();
}
inline void KlineReply::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:secdata_transfer.KlineReply.message)
}
inline std::string* KlineReply::mutable_message() {
  // @@protoc_insertion_point(field_mutable:secdata_transfer.KlineReply.message)
  return _internal_mutable_message();
}
inline const std::string& KlineReply::_internal_message() const {
  return message_.GetNoArena();
}
inline void KlineReply::_internal_set_message(const std::string& value) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void KlineReply::set_message(std::string&& value) {
  
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:secdata_transfer.KlineReply.message)
}
inline void KlineReply::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:secdata_transfer.KlineReply.message)
}
inline void KlineReply::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:secdata_transfer.KlineReply.message)
}
inline std::string* KlineReply::_internal_mutable_message() {
  
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* KlineReply::release_message() {
  // @@protoc_insertion_point(field_release:secdata_transfer.KlineReply.message)
  
  return message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void KlineReply::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:secdata_transfer.KlineReply.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace secdata_transfer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_secdata_5ftransfer_2eproto