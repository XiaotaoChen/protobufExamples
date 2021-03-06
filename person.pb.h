// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: person.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_person_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_person_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_person_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_person_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_person_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_person_2eproto_metadata_getter(int index);
namespace cxtExample {
class Person;
struct PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
}  // namespace cxtExample
PROTOBUF_NAMESPACE_OPEN
template<> ::cxtExample::Person* Arena::CreateMaybeMessage<::cxtExample::Person>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cxtExample {

// ===================================================================

class Person PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cxtExample.Person) */ {
 public:
  inline Person() : Person(nullptr) {}
  virtual ~Person();
  explicit constexpr Person(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Person(const Person& from);
  Person(Person&& from) noexcept
    : Person() {
    *this = ::std::move(from);
  }

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  inline Person& operator=(Person&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Person& default_instance() {
    return *internal_default_instance();
  }
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Person& a, Person& b) {
    a.Swap(&b);
  }
  inline void Swap(Person* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Person* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Person* New() const final {
    return CreateMaybeMessage<Person>(nullptr);
  }

  Person* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Person>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Person* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cxtExample.Person";
  }
  protected:
  explicit Person(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_person_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPhonesFieldNumber = 4,
    kNameFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // repeated string phones = 4;
  int phones_size() const;
  private:
  int _internal_phones_size() const;
  public:
  void clear_phones();
  const std::string& phones(int index) const;
  std::string* mutable_phones(int index);
  void set_phones(int index, const std::string& value);
  void set_phones(int index, std::string&& value);
  void set_phones(int index, const char* value);
  void set_phones(int index, const char* value, size_t size);
  std::string* add_phones();
  void add_phones(const std::string& value);
  void add_phones(std::string&& value);
  void add_phones(const char* value);
  void add_phones(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& phones() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_phones();
  private:
  const std::string& _internal_phones(int index) const;
  std::string* _internal_add_phones();
  public:

  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // required int32 id = 2;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:cxtExample.Person)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> phones_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  friend struct ::TableStruct_person_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Person

// optional string name = 1;
inline bool Person::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Person::has_name() const {
  return _internal_has_name();
}
inline void Person::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:cxtExample.Person.name)
  return _internal_name();
}
inline void Person::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:cxtExample.Person.name)
}
inline std::string* Person::mutable_name() {
  // @@protoc_insertion_point(field_mutable:cxtExample.Person.name)
  return _internal_mutable_name();
}
inline const std::string& Person::_internal_name() const {
  return name_.Get();
}
inline void Person::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Person::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:cxtExample.Person.name)
}
inline void Person::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:cxtExample.Person.name)
}
inline void Person::set_name(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:cxtExample.Person.name)
}
inline std::string* Person::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Person::release_name() {
  // @@protoc_insertion_point(field_release:cxtExample.Person.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Person::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:cxtExample.Person.name)
}

// required int32 id = 2;
inline bool Person::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Person::has_id() const {
  return _internal_has_id();
}
inline void Person::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Person::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Person::id() const {
  // @@protoc_insertion_point(field_get:cxtExample.Person.id)
  return _internal_id();
}
inline void Person::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  id_ = value;
}
inline void Person::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:cxtExample.Person.id)
}

// repeated string phones = 4;
inline int Person::_internal_phones_size() const {
  return phones_.size();
}
inline int Person::phones_size() const {
  return _internal_phones_size();
}
inline void Person::clear_phones() {
  phones_.Clear();
}
inline std::string* Person::add_phones() {
  // @@protoc_insertion_point(field_add_mutable:cxtExample.Person.phones)
  return _internal_add_phones();
}
inline const std::string& Person::_internal_phones(int index) const {
  return phones_.Get(index);
}
inline const std::string& Person::phones(int index) const {
  // @@protoc_insertion_point(field_get:cxtExample.Person.phones)
  return _internal_phones(index);
}
inline std::string* Person::mutable_phones(int index) {
  // @@protoc_insertion_point(field_mutable:cxtExample.Person.phones)
  return phones_.Mutable(index);
}
inline void Person::set_phones(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:cxtExample.Person.phones)
  phones_.Mutable(index)->assign(value);
}
inline void Person::set_phones(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:cxtExample.Person.phones)
  phones_.Mutable(index)->assign(std::move(value));
}
inline void Person::set_phones(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  phones_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:cxtExample.Person.phones)
}
inline void Person::set_phones(int index, const char* value, size_t size) {
  phones_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:cxtExample.Person.phones)
}
inline std::string* Person::_internal_add_phones() {
  return phones_.Add();
}
inline void Person::add_phones(const std::string& value) {
  phones_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:cxtExample.Person.phones)
}
inline void Person::add_phones(std::string&& value) {
  phones_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:cxtExample.Person.phones)
}
inline void Person::add_phones(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  phones_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:cxtExample.Person.phones)
}
inline void Person::add_phones(const char* value, size_t size) {
  phones_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:cxtExample.Person.phones)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Person::phones() const {
  // @@protoc_insertion_point(field_list:cxtExample.Person.phones)
  return phones_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Person::mutable_phones() {
  // @@protoc_insertion_point(field_mutable_list:cxtExample.Person.phones)
  return &phones_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace cxtExample

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_person_2eproto
