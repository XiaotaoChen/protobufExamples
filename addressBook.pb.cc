// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressBook.proto

#include "addressBook.pb.h"

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
namespace cxtExample {
constexpr Person_PhoneNumber::Person_PhoneNumber(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : number_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , type_(1)
{}
struct Person_PhoneNumberDefaultTypeInternal {
  constexpr Person_PhoneNumberDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~Person_PhoneNumberDefaultTypeInternal() {}
  union {
    Person_PhoneNumber _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT Person_PhoneNumberDefaultTypeInternal _Person_PhoneNumber_default_instance_;
constexpr Person::Person(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : phones_()
  , name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , email_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(0){}
struct PersonDefaultTypeInternal {
  constexpr PersonDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PersonDefaultTypeInternal() {}
  union {
    Person _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PersonDefaultTypeInternal _Person_default_instance_;
constexpr AddressBook::AddressBook(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : people_(){}
struct AddressBookDefaultTypeInternal {
  constexpr AddressBookDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AddressBookDefaultTypeInternal() {}
  union {
    AddressBook _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AddressBookDefaultTypeInternal _AddressBook_default_instance_;
}  // namespace cxtExample
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_addressBook_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_addressBook_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_addressBook_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_addressBook_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person_PhoneNumber, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person_PhoneNumber, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person_PhoneNumber, number_),
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person_PhoneNumber, type_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person, name_),
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person, id_),
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person, email_),
  PROTOBUF_FIELD_OFFSET(::cxtExample::Person, phones_),
  0,
  2,
  1,
  ~0u,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::cxtExample::AddressBook, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::cxtExample::AddressBook, people_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::cxtExample::Person_PhoneNumber)},
  { 9, 18, sizeof(::cxtExample::Person)},
  { 22, -1, sizeof(::cxtExample::AddressBook)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cxtExample::_Person_PhoneNumber_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cxtExample::_Person_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cxtExample::_AddressBook_default_instance_),
};

const char descriptor_table_protodef_addressBook_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021addressBook.proto\022\ncxtExample\"\337\001\n\006Pers"
  "on\022\014\n\004name\030\001 \001(\t\022\n\n\002id\030\002 \001(\005\022\r\n\005email\030\003 "
  "\001(\t\022.\n\006phones\030\004 \003(\0132\036.cxtExample.Person."
  "PhoneNumber\032O\n\013PhoneNumber\022\016\n\006number\030\001 \001"
  "(\t\0220\n\004type\030\002 \001(\0162\034.cxtExample.Person.Pho"
  "neType:\004HOME\"+\n\tPhoneType\022\n\n\006MOBILE\020\000\022\010\n"
  "\004HOME\020\001\022\010\n\004WORK\020\002\"1\n\013AddressBook\022\"\n\006peop"
  "le\030\001 \003(\0132\022.cxtExample.Person"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_addressBook_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_addressBook_2eproto = {
  false, false, 308, descriptor_table_protodef_addressBook_2eproto, "addressBook.proto", 
  &descriptor_table_addressBook_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_addressBook_2eproto::offsets,
  file_level_metadata_addressBook_2eproto, file_level_enum_descriptors_addressBook_2eproto, file_level_service_descriptors_addressBook_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_addressBook_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_addressBook_2eproto);
  return descriptor_table_addressBook_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_addressBook_2eproto(&descriptor_table_addressBook_2eproto);
namespace cxtExample {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Person_PhoneType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_addressBook_2eproto);
  return file_level_enum_descriptors_addressBook_2eproto[0];
}
bool Person_PhoneType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Person_PhoneType Person::MOBILE;
constexpr Person_PhoneType Person::HOME;
constexpr Person_PhoneType Person::WORK;
constexpr Person_PhoneType Person::PhoneType_MIN;
constexpr Person_PhoneType Person::PhoneType_MAX;
constexpr int Person::PhoneType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class Person_PhoneNumber::_Internal {
 public:
  using HasBits = decltype(std::declval<Person_PhoneNumber>()._has_bits_);
  static void set_has_number(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Person_PhoneNumber::Person_PhoneNumber(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:cxtExample.Person.PhoneNumber)
}
Person_PhoneNumber::Person_PhoneNumber(const Person_PhoneNumber& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_number()) {
    number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_number(), 
      GetArena());
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:cxtExample.Person.PhoneNumber)
}

void Person_PhoneNumber::SharedCtor() {
number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
type_ = 1;
}

Person_PhoneNumber::~Person_PhoneNumber() {
  // @@protoc_insertion_point(destructor:cxtExample.Person.PhoneNumber)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Person_PhoneNumber::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  number_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Person_PhoneNumber::ArenaDtor(void* object) {
  Person_PhoneNumber* _this = reinterpret_cast< Person_PhoneNumber* >(object);
  (void)_this;
}
void Person_PhoneNumber::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Person_PhoneNumber::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Person_PhoneNumber::Clear() {
// @@protoc_insertion_point(message_clear_start:cxtExample.Person.PhoneNumber)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      number_.ClearNonDefaultToEmpty();
    }
    type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Person_PhoneNumber::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_number();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "cxtExample.Person.PhoneNumber.number");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .cxtExample.Person.PhoneType type = 2 [default = HOME];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::cxtExample::Person_PhoneType_IsValid(val))) {
            _internal_set_type(static_cast<::cxtExample::Person_PhoneType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Person_PhoneNumber::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cxtExample.Person.PhoneNumber)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string number = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_number().data(), static_cast<int>(this->_internal_number().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "cxtExample.Person.PhoneNumber.number");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_number(), target);
  }

  // optional .cxtExample.Person.PhoneType type = 2 [default = HOME];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cxtExample.Person.PhoneNumber)
  return target;
}

size_t Person_PhoneNumber::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cxtExample.Person.PhoneNumber)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string number = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_number());
    }

    // optional .cxtExample.Person.PhoneType type = 2 [default = HOME];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Person_PhoneNumber::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cxtExample.Person.PhoneNumber)
  GOOGLE_DCHECK_NE(&from, this);
  const Person_PhoneNumber* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Person_PhoneNumber>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cxtExample.Person.PhoneNumber)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cxtExample.Person.PhoneNumber)
    MergeFrom(*source);
  }
}

void Person_PhoneNumber::MergeFrom(const Person_PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cxtExample.Person.PhoneNumber)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_number(from._internal_number());
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Person_PhoneNumber::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cxtExample.Person.PhoneNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person_PhoneNumber::CopyFrom(const Person_PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cxtExample.Person.PhoneNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person_PhoneNumber::IsInitialized() const {
  return true;
}

void Person_PhoneNumber::InternalSwap(Person_PhoneNumber* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  number_.Swap(&other->number_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Person_PhoneNumber::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class Person::_Internal {
 public:
  using HasBits = decltype(std::declval<Person>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_email(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Person::Person(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  phones_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:cxtExample.Person)
}
Person::Person(const Person& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      phones_(from.phones_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  email_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_email()) {
    email_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_email(), 
      GetArena());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:cxtExample.Person)
}

void Person::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
email_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
id_ = 0;
}

Person::~Person() {
  // @@protoc_insertion_point(destructor:cxtExample.Person)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Person::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Person::ArenaDtor(void* object) {
  Person* _this = reinterpret_cast< Person* >(object);
  (void)_this;
}
void Person::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Person::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Person::Clear() {
// @@protoc_insertion_point(message_clear_start:cxtExample.Person)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  phones_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      email_.ClearNonDefaultToEmpty();
    }
  }
  id_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Person::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "cxtExample.Person.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string email = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_email();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "cxtExample.Person.email");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .cxtExample.Person.PhoneNumber phones = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_phones(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Person::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cxtExample.Person)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "cxtExample.Person.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // optional int32 id = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_id(), target);
  }

  // optional string email = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_email().data(), static_cast<int>(this->_internal_email().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "cxtExample.Person.email");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_email(), target);
  }

  // repeated .cxtExample.Person.PhoneNumber phones = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_phones_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_phones(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cxtExample.Person)
  return target;
}

size_t Person::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cxtExample.Person)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .cxtExample.Person.PhoneNumber phones = 4;
  total_size += 1UL * this->_internal_phones_size();
  for (const auto& msg : this->phones_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional string email = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_email());
    }

    // optional int32 id = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_id());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Person::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cxtExample.Person)
  GOOGLE_DCHECK_NE(&from, this);
  const Person* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Person>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cxtExample.Person)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cxtExample.Person)
    MergeFrom(*source);
  }
}

void Person::MergeFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cxtExample.Person)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  phones_.MergeFrom(from.phones_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_email(from._internal_email());
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Person::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cxtExample.Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::CopyFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cxtExample.Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person::IsInitialized() const {
  return true;
}

void Person::InternalSwap(Person* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  phones_.InternalSwap(&other->phones_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  email_.Swap(&other->email_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Person::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class AddressBook::_Internal {
 public:
};

AddressBook::AddressBook(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  people_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:cxtExample.AddressBook)
}
AddressBook::AddressBook(const AddressBook& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      people_(from.people_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cxtExample.AddressBook)
}

void AddressBook::SharedCtor() {
}

AddressBook::~AddressBook() {
  // @@protoc_insertion_point(destructor:cxtExample.AddressBook)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AddressBook::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AddressBook::ArenaDtor(void* object) {
  AddressBook* _this = reinterpret_cast< AddressBook* >(object);
  (void)_this;
}
void AddressBook::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AddressBook::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AddressBook::Clear() {
// @@protoc_insertion_point(message_clear_start:cxtExample.AddressBook)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  people_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AddressBook::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .cxtExample.Person people = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_people(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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

::PROTOBUF_NAMESPACE_ID::uint8* AddressBook::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cxtExample.AddressBook)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .cxtExample.Person people = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_people_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_people(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cxtExample.AddressBook)
  return target;
}

size_t AddressBook::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cxtExample.AddressBook)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .cxtExample.Person people = 1;
  total_size += 1UL * this->_internal_people_size();
  for (const auto& msg : this->people_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AddressBook::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cxtExample.AddressBook)
  GOOGLE_DCHECK_NE(&from, this);
  const AddressBook* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AddressBook>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cxtExample.AddressBook)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cxtExample.AddressBook)
    MergeFrom(*source);
  }
}

void AddressBook::MergeFrom(const AddressBook& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cxtExample.AddressBook)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  people_.MergeFrom(from.people_);
}

void AddressBook::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cxtExample.AddressBook)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddressBook::CopyFrom(const AddressBook& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cxtExample.AddressBook)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddressBook::IsInitialized() const {
  return true;
}

void AddressBook::InternalSwap(AddressBook* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  people_.InternalSwap(&other->people_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AddressBook::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace cxtExample
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cxtExample::Person_PhoneNumber* Arena::CreateMaybeMessage< ::cxtExample::Person_PhoneNumber >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cxtExample::Person_PhoneNumber >(arena);
}
template<> PROTOBUF_NOINLINE ::cxtExample::Person* Arena::CreateMaybeMessage< ::cxtExample::Person >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cxtExample::Person >(arena);
}
template<> PROTOBUF_NOINLINE ::cxtExample::AddressBook* Arena::CreateMaybeMessage< ::cxtExample::AddressBook >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cxtExample::AddressBook >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
