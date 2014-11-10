// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: landlords_proto.proto

#ifndef PROTOBUF_landlords_5fproto_2eproto__INCLUDED
#define PROTOBUF_landlords_5fproto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_landlords_5fproto_2eproto();
void protobuf_AssignDesc_landlords_5fproto_2eproto();
void protobuf_ShutdownFile_landlords_5fproto_2eproto();

class DealCard;
class GrabLandlord;
class GrabLandlordOver;
class PlayCard;
class GameOver;

// ===================================================================

class DealCard : public ::google::protobuf::MessageLite {
 public:
  DealCard();
  virtual ~DealCard();

  DealCard(const DealCard& from);

  inline DealCard& operator=(const DealCard& from) {
    CopyFrom(from);
    return *this;
  }

  static const DealCard& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DealCard* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DealCard* other);

  // implements Message ----------------------------------------------

  DealCard* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DealCard& from);
  void MergeFrom(const DealCard& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 cards = 1;
  inline int cards_size() const;
  inline void clear_cards();
  static const int kCardsFieldNumber = 1;
  inline ::google::protobuf::int32 cards(int index) const;
  inline void set_cards(int index, ::google::protobuf::int32 value);
  inline void add_cards(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      cards() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_cards();

  // repeated int32 extras = 2;
  inline int extras_size() const;
  inline void clear_extras();
  static const int kExtrasFieldNumber = 2;
  inline ::google::protobuf::int32 extras(int index) const;
  inline void set_extras(int index, ::google::protobuf::int32 value);
  inline void add_extras(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      extras() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_extras();

  // required int32 cur = 3;
  inline bool has_cur() const;
  inline void clear_cur();
  static const int kCurFieldNumber = 3;
  inline ::google::protobuf::int32 cur() const;
  inline void set_cur(::google::protobuf::int32 value);

  // required int32 max_grade = 4;
  inline bool has_max_grade() const;
  inline void clear_max_grade();
  static const int kMaxGradeFieldNumber = 4;
  inline ::google::protobuf::int32 max_grade() const;
  inline void set_max_grade(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DealCard)
 private:
  inline void set_has_cur();
  inline void clear_has_cur();
  inline void set_has_max_grade();
  inline void clear_has_max_grade();

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > cards_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > extras_;
  ::google::protobuf::int32 cur_;
  ::google::protobuf::int32 max_grade_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto();
  #endif
  friend void protobuf_AssignDesc_landlords_5fproto_2eproto();
  friend void protobuf_ShutdownFile_landlords_5fproto_2eproto();

  void InitAsDefaultInstance();
  static DealCard* default_instance_;
};
// -------------------------------------------------------------------

class GrabLandlord : public ::google::protobuf::MessageLite {
 public:
  GrabLandlord();
  virtual ~GrabLandlord();

  GrabLandlord(const GrabLandlord& from);

  inline GrabLandlord& operator=(const GrabLandlord& from) {
    CopyFrom(from);
    return *this;
  }

  static const GrabLandlord& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GrabLandlord* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GrabLandlord* other);

  // implements Message ----------------------------------------------

  GrabLandlord* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GrabLandlord& from);
  void MergeFrom(const GrabLandlord& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 grade = 1;
  inline bool has_grade() const;
  inline void clear_grade();
  static const int kGradeFieldNumber = 1;
  inline ::google::protobuf::int32 grade() const;
  inline void set_grade(::google::protobuf::int32 value);

  // optional int32 cur = 2;
  inline bool has_cur() const;
  inline void clear_cur();
  static const int kCurFieldNumber = 2;
  inline ::google::protobuf::int32 cur() const;
  inline void set_cur(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GrabLandlord)
 private:
  inline void set_has_grade();
  inline void clear_has_grade();
  inline void set_has_cur();
  inline void clear_has_cur();

  ::google::protobuf::int32 grade_;
  ::google::protobuf::int32 cur_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto();
  #endif
  friend void protobuf_AssignDesc_landlords_5fproto_2eproto();
  friend void protobuf_ShutdownFile_landlords_5fproto_2eproto();

  void InitAsDefaultInstance();
  static GrabLandlord* default_instance_;
};
// -------------------------------------------------------------------

class GrabLandlordOver : public ::google::protobuf::MessageLite {
 public:
  GrabLandlordOver();
  virtual ~GrabLandlordOver();

  GrabLandlordOver(const GrabLandlordOver& from);

  inline GrabLandlordOver& operator=(const GrabLandlordOver& from) {
    CopyFrom(from);
    return *this;
  }

  static const GrabLandlordOver& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GrabLandlordOver* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GrabLandlordOver* other);

  // implements Message ----------------------------------------------

  GrabLandlordOver* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GrabLandlordOver& from);
  void MergeFrom(const GrabLandlordOver& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 who = 1;
  inline bool has_who() const;
  inline void clear_who();
  static const int kWhoFieldNumber = 1;
  inline ::google::protobuf::int32 who() const;
  inline void set_who(::google::protobuf::int32 value);

  // required int32 grade = 2;
  inline bool has_grade() const;
  inline void clear_grade();
  static const int kGradeFieldNumber = 2;
  inline ::google::protobuf::int32 grade() const;
  inline void set_grade(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GrabLandlordOver)
 private:
  inline void set_has_who();
  inline void clear_has_who();
  inline void set_has_grade();
  inline void clear_has_grade();

  ::google::protobuf::int32 who_;
  ::google::protobuf::int32 grade_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto();
  #endif
  friend void protobuf_AssignDesc_landlords_5fproto_2eproto();
  friend void protobuf_ShutdownFile_landlords_5fproto_2eproto();

  void InitAsDefaultInstance();
  static GrabLandlordOver* default_instance_;
};
// -------------------------------------------------------------------

class PlayCard : public ::google::protobuf::MessageLite {
 public:
  PlayCard();
  virtual ~PlayCard();

  PlayCard(const PlayCard& from);

  inline PlayCard& operator=(const PlayCard& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayCard& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayCard* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayCard* other);

  // implements Message ----------------------------------------------

  PlayCard* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayCard& from);
  void MergeFrom(const PlayCard& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 cards = 1;
  inline int cards_size() const;
  inline void clear_cards();
  static const int kCardsFieldNumber = 1;
  inline ::google::protobuf::int32 cards(int index) const;
  inline void set_cards(int index, ::google::protobuf::int32 value);
  inline void add_cards(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      cards() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_cards();

  // optional int32 who = 2;
  inline bool has_who() const;
  inline void clear_who();
  static const int kWhoFieldNumber = 2;
  inline ::google::protobuf::int32 who() const;
  inline void set_who(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PlayCard)
 private:
  inline void set_has_who();
  inline void clear_has_who();

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > cards_;
  ::google::protobuf::int32 who_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto();
  #endif
  friend void protobuf_AssignDesc_landlords_5fproto_2eproto();
  friend void protobuf_ShutdownFile_landlords_5fproto_2eproto();

  void InitAsDefaultInstance();
  static PlayCard* default_instance_;
};
// -------------------------------------------------------------------

class GameOver : public ::google::protobuf::MessageLite {
 public:
  GameOver();
  virtual ~GameOver();

  GameOver(const GameOver& from);

  inline GameOver& operator=(const GameOver& from) {
    CopyFrom(from);
    return *this;
  }

  static const GameOver& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GameOver* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GameOver* other);

  // implements Message ----------------------------------------------

  GameOver* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GameOver& from);
  void MergeFrom(const GameOver& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:GameOver)
 private:


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_landlords_5fproto_2eproto();
  #endif
  friend void protobuf_AssignDesc_landlords_5fproto_2eproto();
  friend void protobuf_ShutdownFile_landlords_5fproto_2eproto();

  void InitAsDefaultInstance();
  static GameOver* default_instance_;
};
// ===================================================================


// ===================================================================

// DealCard

// repeated int32 cards = 1;
inline int DealCard::cards_size() const {
  return cards_.size();
}
inline void DealCard::clear_cards() {
  cards_.Clear();
}
inline ::google::protobuf::int32 DealCard::cards(int index) const {
  return cards_.Get(index);
}
inline void DealCard::set_cards(int index, ::google::protobuf::int32 value) {
  cards_.Set(index, value);
}
inline void DealCard::add_cards(::google::protobuf::int32 value) {
  cards_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
DealCard::cards() const {
  return cards_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
DealCard::mutable_cards() {
  return &cards_;
}

// repeated int32 extras = 2;
inline int DealCard::extras_size() const {
  return extras_.size();
}
inline void DealCard::clear_extras() {
  extras_.Clear();
}
inline ::google::protobuf::int32 DealCard::extras(int index) const {
  return extras_.Get(index);
}
inline void DealCard::set_extras(int index, ::google::protobuf::int32 value) {
  extras_.Set(index, value);
}
inline void DealCard::add_extras(::google::protobuf::int32 value) {
  extras_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
DealCard::extras() const {
  return extras_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
DealCard::mutable_extras() {
  return &extras_;
}

// required int32 cur = 3;
inline bool DealCard::has_cur() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DealCard::set_has_cur() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DealCard::clear_has_cur() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DealCard::clear_cur() {
  cur_ = 0;
  clear_has_cur();
}
inline ::google::protobuf::int32 DealCard::cur() const {
  return cur_;
}
inline void DealCard::set_cur(::google::protobuf::int32 value) {
  set_has_cur();
  cur_ = value;
}

// required int32 max_grade = 4;
inline bool DealCard::has_max_grade() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DealCard::set_has_max_grade() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DealCard::clear_has_max_grade() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DealCard::clear_max_grade() {
  max_grade_ = 0;
  clear_has_max_grade();
}
inline ::google::protobuf::int32 DealCard::max_grade() const {
  return max_grade_;
}
inline void DealCard::set_max_grade(::google::protobuf::int32 value) {
  set_has_max_grade();
  max_grade_ = value;
}

// -------------------------------------------------------------------

// GrabLandlord

// required int32 grade = 1;
inline bool GrabLandlord::has_grade() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GrabLandlord::set_has_grade() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GrabLandlord::clear_has_grade() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GrabLandlord::clear_grade() {
  grade_ = 0;
  clear_has_grade();
}
inline ::google::protobuf::int32 GrabLandlord::grade() const {
  return grade_;
}
inline void GrabLandlord::set_grade(::google::protobuf::int32 value) {
  set_has_grade();
  grade_ = value;
}

// optional int32 cur = 2;
inline bool GrabLandlord::has_cur() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GrabLandlord::set_has_cur() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GrabLandlord::clear_has_cur() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GrabLandlord::clear_cur() {
  cur_ = 0;
  clear_has_cur();
}
inline ::google::protobuf::int32 GrabLandlord::cur() const {
  return cur_;
}
inline void GrabLandlord::set_cur(::google::protobuf::int32 value) {
  set_has_cur();
  cur_ = value;
}

// -------------------------------------------------------------------

// GrabLandlordOver

// required int32 who = 1;
inline bool GrabLandlordOver::has_who() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GrabLandlordOver::set_has_who() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GrabLandlordOver::clear_has_who() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GrabLandlordOver::clear_who() {
  who_ = 0;
  clear_has_who();
}
inline ::google::protobuf::int32 GrabLandlordOver::who() const {
  return who_;
}
inline void GrabLandlordOver::set_who(::google::protobuf::int32 value) {
  set_has_who();
  who_ = value;
}

// required int32 grade = 2;
inline bool GrabLandlordOver::has_grade() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GrabLandlordOver::set_has_grade() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GrabLandlordOver::clear_has_grade() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GrabLandlordOver::clear_grade() {
  grade_ = 0;
  clear_has_grade();
}
inline ::google::protobuf::int32 GrabLandlordOver::grade() const {
  return grade_;
}
inline void GrabLandlordOver::set_grade(::google::protobuf::int32 value) {
  set_has_grade();
  grade_ = value;
}

// -------------------------------------------------------------------

// PlayCard

// repeated int32 cards = 1;
inline int PlayCard::cards_size() const {
  return cards_.size();
}
inline void PlayCard::clear_cards() {
  cards_.Clear();
}
inline ::google::protobuf::int32 PlayCard::cards(int index) const {
  return cards_.Get(index);
}
inline void PlayCard::set_cards(int index, ::google::protobuf::int32 value) {
  cards_.Set(index, value);
}
inline void PlayCard::add_cards(::google::protobuf::int32 value) {
  cards_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
PlayCard::cards() const {
  return cards_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
PlayCard::mutable_cards() {
  return &cards_;
}

// optional int32 who = 2;
inline bool PlayCard::has_who() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayCard::set_has_who() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayCard::clear_has_who() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayCard::clear_who() {
  who_ = 0;
  clear_has_who();
}
inline ::google::protobuf::int32 PlayCard::who() const {
  return who_;
}
inline void PlayCard::set_who(::google::protobuf::int32 value) {
  set_has_who();
  who_ = value;
}

// -------------------------------------------------------------------

// GameOver


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_landlords_5fproto_2eproto__INCLUDED