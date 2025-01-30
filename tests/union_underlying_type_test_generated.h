// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_UNIONUNDERLYINGTYPETEST_UNIONUNDERLYINGTYPE_H_
#define FLATBUFFERS_GENERATED_UNIONUNDERLYINGTYPETEST_UNIONUNDERLYINGTYPE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 25 &&
              FLATBUFFERS_VERSION_MINOR == 1 &&
              FLATBUFFERS_VERSION_REVISION == 21,
             "Non-compatible flatbuffers version included");

namespace UnionUnderlyingType {

struct A;
struct ABuilder;
struct AT;

struct B;
struct BBuilder;
struct BT;

struct C;
struct CBuilder;
struct CT;

struct D;
struct DBuilder;
struct DT;

bool operator==(const AT &lhs, const AT &rhs);
bool operator!=(const AT &lhs, const AT &rhs);
bool operator==(const BT &lhs, const BT &rhs);
bool operator!=(const BT &lhs, const BT &rhs);
bool operator==(const CT &lhs, const CT &rhs);
bool operator!=(const CT &lhs, const CT &rhs);
bool operator==(const DT &lhs, const DT &rhs);
bool operator!=(const DT &lhs, const DT &rhs);

inline const ::flatbuffers::TypeTable *ATypeTable();

inline const ::flatbuffers::TypeTable *BTypeTable();

inline const ::flatbuffers::TypeTable *CTypeTable();

inline const ::flatbuffers::TypeTable *DTypeTable();

enum class ABC : int32_t {
  NONE = 0,
  A = 555,
  B = 666,
  C = 777,
  MIN = NONE,
  MAX = C
};

inline const ABC (&EnumValuesABC())[4] {
  static const ABC values[] = {
    ABC::NONE,
    ABC::A,
    ABC::B,
    ABC::C
  };
  return values;
}

inline const char *EnumNameABC(ABC e) {
  switch (e) {
    case ABC::NONE: return "NONE";
    case ABC::A: return "A";
    case ABC::B: return "B";
    case ABC::C: return "C";
    default: return "";
  }
}

template<typename T> struct ABCTraits {
  static const ABC enum_value = ABC::NONE;
};

template<> struct ABCTraits<UnionUnderlyingType::A> {
  static const ABC enum_value = ABC::A;
};

template<> struct ABCTraits<UnionUnderlyingType::B> {
  static const ABC enum_value = ABC::B;
};

template<> struct ABCTraits<UnionUnderlyingType::C> {
  static const ABC enum_value = ABC::C;
};

template<typename T> struct ABCUnionTraits {
  static const ABC enum_value = ABC::NONE;
};

template<> struct ABCUnionTraits<UnionUnderlyingType::AT> {
  static const ABC enum_value = ABC::A;
};

template<> struct ABCUnionTraits<UnionUnderlyingType::BT> {
  static const ABC enum_value = ABC::B;
};

template<> struct ABCUnionTraits<UnionUnderlyingType::CT> {
  static const ABC enum_value = ABC::C;
};

struct ABCUnion {
  ABC type;
  void *value;

  ABCUnion() : type(ABC::NONE), value(nullptr) {}
  ABCUnion(ABCUnion&& u) FLATBUFFERS_NOEXCEPT :
    type(ABC::NONE), value(nullptr)
    { std::swap(type, u.type); std::swap(value, u.value); }
  ABCUnion(const ABCUnion &);
  ABCUnion &operator=(const ABCUnion &u)
    { ABCUnion t(u); std::swap(type, t.type); std::swap(value, t.value); return *this; }
  ABCUnion &operator=(ABCUnion &&u) FLATBUFFERS_NOEXCEPT
    { std::swap(type, u.type); std::swap(value, u.value); return *this; }
  ~ABCUnion() { Reset(); }

  void Reset();

  template <typename T>
  void Set(T&& val) {
    typedef typename std::remove_reference<T>::type RT;
    Reset();
    type = ABCUnionTraits<RT>::enum_value;
    if (type != ABC::NONE) {
      value = new RT(std::forward<T>(val));
    }
  }

  static void *UnPack(const void *obj, ABC type, const ::flatbuffers::resolver_function_t *resolver);
  ::flatbuffers::Offset<void> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr) const;

  UnionUnderlyingType::AT *AsA() {
    return type == ABC::A ?
      reinterpret_cast<UnionUnderlyingType::AT *>(value) : nullptr;
  }
  const UnionUnderlyingType::AT *AsA() const {
    return type == ABC::A ?
      reinterpret_cast<const UnionUnderlyingType::AT *>(value) : nullptr;
  }
  UnionUnderlyingType::BT *AsB() {
    return type == ABC::B ?
      reinterpret_cast<UnionUnderlyingType::BT *>(value) : nullptr;
  }
  const UnionUnderlyingType::BT *AsB() const {
    return type == ABC::B ?
      reinterpret_cast<const UnionUnderlyingType::BT *>(value) : nullptr;
  }
  UnionUnderlyingType::CT *AsC() {
    return type == ABC::C ?
      reinterpret_cast<UnionUnderlyingType::CT *>(value) : nullptr;
  }
  const UnionUnderlyingType::CT *AsC() const {
    return type == ABC::C ?
      reinterpret_cast<const UnionUnderlyingType::CT *>(value) : nullptr;
  }
};


inline bool operator==(const ABCUnion &lhs, const ABCUnion &rhs) {
  if (lhs.type != rhs.type) return false;
  switch (lhs.type) {
    case ABC::NONE: {
      return true;
    }
    case ABC::A: {
      return *(reinterpret_cast<const UnionUnderlyingType::AT *>(lhs.value)) ==
             *(reinterpret_cast<const UnionUnderlyingType::AT *>(rhs.value));
    }
    case ABC::B: {
      return *(reinterpret_cast<const UnionUnderlyingType::BT *>(lhs.value)) ==
             *(reinterpret_cast<const UnionUnderlyingType::BT *>(rhs.value));
    }
    case ABC::C: {
      return *(reinterpret_cast<const UnionUnderlyingType::CT *>(lhs.value)) ==
             *(reinterpret_cast<const UnionUnderlyingType::CT *>(rhs.value));
    }
    default: {
      return false;
    }
  }
}

inline bool operator!=(const ABCUnion &lhs, const ABCUnion &rhs) {
    return !(lhs == rhs);
}

bool VerifyABC(::flatbuffers::Verifier &verifier, const void *obj, ABC type);
bool VerifyABCVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<ABC> *types);

struct AT : public ::flatbuffers::NativeTable {
  typedef A TableType;
  int32_t a = 0;
};

struct A FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef AT NativeTableType;
  typedef ABuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return ATypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_A = 4
  };
  int32_t a() const {
    return GetField<int32_t>(VT_A, 0);
  }
  bool mutate_a(int32_t _a = 0) {
    return SetField<int32_t>(VT_A, _a, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_A, 4) &&
           verifier.EndTable();
  }
  AT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(AT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<A> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const AT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ABuilder {
  typedef A Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_a(int32_t a) {
    fbb_.AddElement<int32_t>(A::VT_A, a, 0);
  }
  explicit ABuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<A> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<A>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<A> CreateA(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int32_t a = 0) {
  ABuilder builder_(_fbb);
  builder_.add_a(a);
  return builder_.Finish();
}

::flatbuffers::Offset<A> CreateA(::flatbuffers::FlatBufferBuilder &_fbb, const AT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct BT : public ::flatbuffers::NativeTable {
  typedef B TableType;
  std::string b{};
};

struct B FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BT NativeTableType;
  typedef BBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return BTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_B = 4
  };
  const ::flatbuffers::String *b() const {
    return GetPointer<const ::flatbuffers::String *>(VT_B);
  }
  ::flatbuffers::String *mutable_b() {
    return GetPointer<::flatbuffers::String *>(VT_B);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_B) &&
           verifier.VerifyString(b()) &&
           verifier.EndTable();
  }
  BT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(BT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<B> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const BT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct BBuilder {
  typedef B Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_b(::flatbuffers::Offset<::flatbuffers::String> b) {
    fbb_.AddOffset(B::VT_B, b);
  }
  explicit BBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<B> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<B>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<B> CreateB(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> b = 0) {
  BBuilder builder_(_fbb);
  builder_.add_b(b);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<B> CreateBDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *b = nullptr) {
  auto b__ = b ? _fbb.CreateString(b) : 0;
  return UnionUnderlyingType::CreateB(
      _fbb,
      b__);
}

::flatbuffers::Offset<B> CreateB(::flatbuffers::FlatBufferBuilder &_fbb, const BT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct CT : public ::flatbuffers::NativeTable {
  typedef C TableType;
  bool c = false;
};

struct C FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef CT NativeTableType;
  typedef CBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return CTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_C = 4
  };
  bool c() const {
    return GetField<uint8_t>(VT_C, 0) != 0;
  }
  bool mutate_c(bool _c = 0) {
    return SetField<uint8_t>(VT_C, static_cast<uint8_t>(_c), 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_C, 1) &&
           verifier.EndTable();
  }
  CT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<C> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const CT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CBuilder {
  typedef C Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_c(bool c) {
    fbb_.AddElement<uint8_t>(C::VT_C, static_cast<uint8_t>(c), 0);
  }
  explicit CBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<C> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<C>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<C> CreateC(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool c = false) {
  CBuilder builder_(_fbb);
  builder_.add_c(c);
  return builder_.Finish();
}

::flatbuffers::Offset<C> CreateC(::flatbuffers::FlatBufferBuilder &_fbb, const CT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct DT : public ::flatbuffers::NativeTable {
  typedef D TableType;
  UnionUnderlyingType::ABCUnion test_union{};
  std::vector<UnionUnderlyingType::ABCUnion> test_vector_of_union{};
};

struct D FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef DT NativeTableType;
  typedef DBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return DTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEST_UNION_TYPE = 4,
    VT_TEST_UNION = 6,
    VT_TEST_VECTOR_OF_UNION_TYPE = 8,
    VT_TEST_VECTOR_OF_UNION = 10
  };
  UnionUnderlyingType::ABC test_union_type() const {
    return static_cast<UnionUnderlyingType::ABC>(GetField<int32_t>(VT_TEST_UNION_TYPE, 0));
  }
  const void *test_union() const {
    return GetPointer<const void *>(VT_TEST_UNION);
  }
  template<typename T> const T *test_union_as() const;
  const UnionUnderlyingType::A *test_union_as_A() const {
    return test_union_type() == UnionUnderlyingType::ABC::A ? static_cast<const UnionUnderlyingType::A *>(test_union()) : nullptr;
  }
  const UnionUnderlyingType::B *test_union_as_B() const {
    return test_union_type() == UnionUnderlyingType::ABC::B ? static_cast<const UnionUnderlyingType::B *>(test_union()) : nullptr;
  }
  const UnionUnderlyingType::C *test_union_as_C() const {
    return test_union_type() == UnionUnderlyingType::ABC::C ? static_cast<const UnionUnderlyingType::C *>(test_union()) : nullptr;
  }
  void *mutable_test_union() {
    return GetPointer<void *>(VT_TEST_UNION);
  }
  const ::flatbuffers::Vector<UnionUnderlyingType::ABC> *test_vector_of_union_type() const {
    return GetPointer<const ::flatbuffers::Vector<UnionUnderlyingType::ABC> *>(VT_TEST_VECTOR_OF_UNION_TYPE);
  }
  ::flatbuffers::Vector<UnionUnderlyingType::ABC> *mutable_test_vector_of_union_type() {
    return GetPointer<::flatbuffers::Vector<UnionUnderlyingType::ABC> *>(VT_TEST_VECTOR_OF_UNION_TYPE);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *test_vector_of_union() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *>(VT_TEST_VECTOR_OF_UNION);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<void>> *mutable_test_vector_of_union() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<void>> *>(VT_TEST_VECTOR_OF_UNION);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TEST_UNION_TYPE, 1) &&
           VerifyOffset(verifier, VT_TEST_UNION) &&
           VerifyABC(verifier, test_union(), test_union_type()) &&
           VerifyOffset(verifier, VT_TEST_VECTOR_OF_UNION_TYPE) &&
           verifier.VerifyVector(test_vector_of_union_type()) &&
           VerifyOffset(verifier, VT_TEST_VECTOR_OF_UNION) &&
           verifier.VerifyVector(test_vector_of_union()) &&
           VerifyABCVector(verifier, test_vector_of_union(), test_vector_of_union_type()) &&
           verifier.EndTable();
  }
  DT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<D> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const DT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

template<> inline const UnionUnderlyingType::A *D::test_union_as<UnionUnderlyingType::A>() const {
  return test_union_as_A();
}

template<> inline const UnionUnderlyingType::B *D::test_union_as<UnionUnderlyingType::B>() const {
  return test_union_as_B();
}

template<> inline const UnionUnderlyingType::C *D::test_union_as<UnionUnderlyingType::C>() const {
  return test_union_as_C();
}

struct DBuilder {
  typedef D Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_test_union_type(UnionUnderlyingType::ABC test_union_type) {
    fbb_.AddElement<int32_t>(D::VT_TEST_UNION_TYPE, static_cast<int32_t>(test_union_type), 0);
  }
  void add_test_union(::flatbuffers::Offset<void> test_union) {
    fbb_.AddOffset(D::VT_TEST_UNION, test_union);
  }
  void add_test_vector_of_union_type(::flatbuffers::Offset<::flatbuffers::Vector<UnionUnderlyingType::ABC>> test_vector_of_union_type) {
    fbb_.AddOffset(D::VT_TEST_VECTOR_OF_UNION_TYPE, test_vector_of_union_type);
  }
  void add_test_vector_of_union(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<void>>> test_vector_of_union) {
    fbb_.AddOffset(D::VT_TEST_VECTOR_OF_UNION, test_vector_of_union);
  }
  explicit DBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<D>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<D> CreateD(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    UnionUnderlyingType::ABC test_union_type = UnionUnderlyingType::ABC::NONE,
    ::flatbuffers::Offset<void> test_union = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<UnionUnderlyingType::ABC>> test_vector_of_union_type = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<void>>> test_vector_of_union = 0) {
  DBuilder builder_(_fbb);
  builder_.add_test_vector_of_union(test_vector_of_union);
  builder_.add_test_vector_of_union_type(test_vector_of_union_type);
  builder_.add_test_union(test_union);
  builder_.add_test_union_type(test_union_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<D> CreateDDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    UnionUnderlyingType::ABC test_union_type = UnionUnderlyingType::ABC::NONE,
    ::flatbuffers::Offset<void> test_union = 0,
    const std::vector<UnionUnderlyingType::ABC> *test_vector_of_union_type = nullptr,
    const std::vector<::flatbuffers::Offset<void>> *test_vector_of_union = nullptr) {
  auto test_vector_of_union_type__ = test_vector_of_union_type ? _fbb.CreateVector<UnionUnderlyingType::ABC>(*test_vector_of_union_type) : 0;
  auto test_vector_of_union__ = test_vector_of_union ? _fbb.CreateVector<::flatbuffers::Offset<void>>(*test_vector_of_union) : 0;
  return UnionUnderlyingType::CreateD(
      _fbb,
      test_union_type,
      test_union,
      test_vector_of_union_type__,
      test_vector_of_union__);
}

::flatbuffers::Offset<D> CreateD(::flatbuffers::FlatBufferBuilder &_fbb, const DT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);


inline bool operator==(const AT &lhs, const AT &rhs) {
  return
      (lhs.a == rhs.a);
}

inline bool operator!=(const AT &lhs, const AT &rhs) {
    return !(lhs == rhs);
}


inline AT *A::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<AT>(new AT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void A::UnPackTo(AT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = a(); _o->a = _e; }
}

inline ::flatbuffers::Offset<A> A::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const AT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateA(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<A> CreateA(::flatbuffers::FlatBufferBuilder &_fbb, const AT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const AT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _a = _o->a;
  return UnionUnderlyingType::CreateA(
      _fbb,
      _a);
}


inline bool operator==(const BT &lhs, const BT &rhs) {
  return
      (lhs.b == rhs.b);
}

inline bool operator!=(const BT &lhs, const BT &rhs) {
    return !(lhs == rhs);
}


inline BT *B::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<BT>(new BT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void B::UnPackTo(BT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = b(); if (_e) _o->b = _e->str(); }
}

inline ::flatbuffers::Offset<B> B::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const BT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateB(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<B> CreateB(::flatbuffers::FlatBufferBuilder &_fbb, const BT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const BT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _b = _o->b.empty() ? 0 : _fbb.CreateString(_o->b);
  return UnionUnderlyingType::CreateB(
      _fbb,
      _b);
}


inline bool operator==(const CT &lhs, const CT &rhs) {
  return
      (lhs.c == rhs.c);
}

inline bool operator!=(const CT &lhs, const CT &rhs) {
    return !(lhs == rhs);
}


inline CT *C::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<CT>(new CT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void C::UnPackTo(CT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = c(); _o->c = _e; }
}

inline ::flatbuffers::Offset<C> C::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const CT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateC(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<C> CreateC(::flatbuffers::FlatBufferBuilder &_fbb, const CT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const CT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _c = _o->c;
  return UnionUnderlyingType::CreateC(
      _fbb,
      _c);
}


inline bool operator==(const DT &lhs, const DT &rhs) {
  return
      (lhs.test_union == rhs.test_union) &&
      (lhs.test_vector_of_union == rhs.test_vector_of_union);
}

inline bool operator!=(const DT &lhs, const DT &rhs) {
    return !(lhs == rhs);
}


inline DT *D::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<DT>(new DT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void D::UnPackTo(DT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = test_union_type(); _o->test_union.type = _e; }
  { auto _e = test_union(); if (_e) _o->test_union.value = UnionUnderlyingType::ABCUnion::UnPack(_e, test_union_type(), _resolver); }
  { auto _e = test_vector_of_union_type(); if (_e) { _o->test_vector_of_union.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->test_vector_of_union[_i].type = static_cast<UnionUnderlyingType::ABC>(_e->Get(_i)); } } else { _o->test_vector_of_union.resize(0); } }
  { auto _e = test_vector_of_union(); if (_e) { _o->test_vector_of_union.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->test_vector_of_union[_i].value = UnionUnderlyingType::ABCUnion::UnPack(_e->Get(_i), test_vector_of_union_type()->GetEnum<ABC>(_i), _resolver); } } else { _o->test_vector_of_union.resize(0); } }
}

inline ::flatbuffers::Offset<D> D::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const DT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateD(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<D> CreateD(::flatbuffers::FlatBufferBuilder &_fbb, const DT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const DT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _test_union_type = _o->test_union.type;
  auto _test_union = _o->test_union.Pack(_fbb);
  auto _test_vector_of_union_type = _o->test_vector_of_union.size() ? _fbb.CreateVector<ABC>(_o->test_vector_of_union.size(), [](size_t i, _VectorArgs *__va) { return __va->__o->test_vector_of_union[i].type; }, &_va) : 0;
  auto _test_vector_of_union = _o->test_vector_of_union.size() ? _fbb.CreateVector<::flatbuffers::Offset<void>>(_o->test_vector_of_union.size(), [](size_t i, _VectorArgs *__va) { return __va->__o->test_vector_of_union[i].Pack(*__va->__fbb, __va->__rehasher); }, &_va) : 0;
  return UnionUnderlyingType::CreateD(
      _fbb,
      _test_union_type,
      _test_union,
      _test_vector_of_union_type,
      _test_vector_of_union);
}

inline bool VerifyABC(::flatbuffers::Verifier &verifier, const void *obj, ABC type) {
  switch (type) {
    case ABC::NONE: {
      return true;
    }
    case ABC::A: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::A *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case ABC::B: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::B *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case ABC::C: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::C *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyABCVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<ABC> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (::flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyABC(
        verifier,  values->Get(i), types->GetEnum<ABC>(i))) {
      return false;
    }
  }
  return true;
}

inline void *ABCUnion::UnPack(const void *obj, ABC type, const ::flatbuffers::resolver_function_t *resolver) {
  (void)resolver;
  switch (type) {
    case ABC::A: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::A *>(obj);
      return ptr->UnPack(resolver);
    }
    case ABC::B: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::B *>(obj);
      return ptr->UnPack(resolver);
    }
    case ABC::C: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::C *>(obj);
      return ptr->UnPack(resolver);
    }
    default: return nullptr;
  }
}

inline ::flatbuffers::Offset<void> ABCUnion::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const ::flatbuffers::rehasher_function_t *_rehasher) const {
  (void)_rehasher;
  switch (type) {
    case ABC::A: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::AT *>(value);
      return CreateA(_fbb, ptr, _rehasher).Union();
    }
    case ABC::B: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::BT *>(value);
      return CreateB(_fbb, ptr, _rehasher).Union();
    }
    case ABC::C: {
      auto ptr = reinterpret_cast<const UnionUnderlyingType::CT *>(value);
      return CreateC(_fbb, ptr, _rehasher).Union();
    }
    default: return 0;
  }
}

inline ABCUnion::ABCUnion(const ABCUnion &u) : type(u.type), value(nullptr) {
  switch (type) {
    case ABC::A: {
      value = new UnionUnderlyingType::AT(*reinterpret_cast<UnionUnderlyingType::AT *>(u.value));
      break;
    }
    case ABC::B: {
      value = new UnionUnderlyingType::BT(*reinterpret_cast<UnionUnderlyingType::BT *>(u.value));
      break;
    }
    case ABC::C: {
      value = new UnionUnderlyingType::CT(*reinterpret_cast<UnionUnderlyingType::CT *>(u.value));
      break;
    }
    default:
      break;
  }
}

inline void ABCUnion::Reset() {
  switch (type) {
    case ABC::A: {
      auto ptr = reinterpret_cast<UnionUnderlyingType::AT *>(value);
      delete ptr;
      break;
    }
    case ABC::B: {
      auto ptr = reinterpret_cast<UnionUnderlyingType::BT *>(value);
      delete ptr;
      break;
    }
    case ABC::C: {
      auto ptr = reinterpret_cast<UnionUnderlyingType::CT *>(value);
      delete ptr;
      break;
    }
    default: break;
  }
  value = nullptr;
  type = ABC::NONE;
}

inline const ::flatbuffers::TypeTable *ABCTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_SEQUENCE, 0, -1 },
    { ::flatbuffers::ET_SEQUENCE, 0, 0 },
    { ::flatbuffers::ET_SEQUENCE, 0, 1 },
    { ::flatbuffers::ET_SEQUENCE, 0, 2 }
  };
  static const ::flatbuffers::TypeFunction type_refs[] = {
    UnionUnderlyingType::ATypeTable,
    UnionUnderlyingType::BTypeTable,
    UnionUnderlyingType::CTypeTable
  };
  static const int64_t values[] = { 0, 555, 666, 777 };
  static const char * const names[] = {
    "NONE",
    "A",
    "B",
    "C"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_UNION, 4, type_codes, type_refs, nullptr, values, names
  };
  return &tt;
}

inline const ::flatbuffers::TypeTable *ATypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_INT, 0, -1 }
  };
  static const char * const names[] = {
    "a"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 1, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const ::flatbuffers::TypeTable *BTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_STRING, 0, -1 }
  };
  static const char * const names[] = {
    "b"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 1, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const ::flatbuffers::TypeTable *CTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_BOOL, 0, -1 }
  };
  static const char * const names[] = {
    "c"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 1, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const ::flatbuffers::TypeTable *DTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_UTYPE, 0, 0 },
    { ::flatbuffers::ET_SEQUENCE, 0, 0 },
    { ::flatbuffers::ET_UTYPE, 1, 0 },
    { ::flatbuffers::ET_SEQUENCE, 1, 0 }
  };
  static const ::flatbuffers::TypeFunction type_refs[] = {
    UnionUnderlyingType::ABCTypeTable
  };
  static const char * const names[] = {
    "test_union_type",
    "test_union",
    "test_vector_of_union_type",
    "test_vector_of_union"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 4, type_codes, type_refs, nullptr, nullptr, names
  };
  return &tt;
}

}  // namespace UnionUnderlyingType

#endif  // FLATBUFFERS_GENERATED_UNIONUNDERLYINGTYPETEST_UNIONUNDERLYINGTYPE_H_
