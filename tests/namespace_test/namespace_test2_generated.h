// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
#define FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_

#include "flatbuffers/flatbuffers.h"

namespace NamespaceA {

struct TableInFirstNS;
struct TableInFirstNSBuilder;
struct TableInFirstNST;

}  // namespace NamespaceA

namespace NamespaceC {

struct TableInC;
struct TableInCBuilder;
struct TableInCT;

}  // namespace NamespaceC

namespace NamespaceA {

struct SecondTableInA;
struct SecondTableInABuilder;
struct SecondTableInAT;

bool operator==(const TableInFirstNST &lhs, const TableInFirstNST &rhs);
bool operator!=(const TableInFirstNST &lhs, const TableInFirstNST &rhs);
}  // namespace NamespaceA

namespace NamespaceC {

bool operator==(const TableInCT &lhs, const TableInCT &rhs);
bool operator!=(const TableInCT &lhs, const TableInCT &rhs);
}  // namespace NamespaceC

namespace NamespaceA {

bool operator==(const SecondTableInAT &lhs, const SecondTableInAT &rhs);
bool operator!=(const SecondTableInAT &lhs, const SecondTableInAT &rhs);

inline const flatbuffers::TypeTable *TableInFirstNSTypeTable();

}  // namespace NamespaceA

namespace NamespaceC {

inline const flatbuffers::TypeTable *TableInCTypeTable();

}  // namespace NamespaceC

namespace NamespaceA {

inline const flatbuffers::TypeTable *SecondTableInATypeTable();

struct TableInFirstNST : public flatbuffers::NativeTable {
  typedef TableInFirstNS TableType;
  flatbuffers::unique_ptr<NamespaceA::NamespaceB::TableInNestedNST> foo_table;
  NamespaceA::NamespaceB::EnumInNestedNS foo_enum;
  flatbuffers::unique_ptr<NamespaceA::NamespaceB::StructInNestedNS> foo_struct;
  TableInFirstNST()
      : foo_enum(NamespaceA::NamespaceB::EnumInNestedNS_A) {
  }
};

inline bool operator==(const TableInFirstNST &lhs, const TableInFirstNST &rhs) {
  return
      (lhs.foo_table == rhs.foo_table) &&
      (lhs.foo_enum == rhs.foo_enum) &&
      (lhs.foo_struct == rhs.foo_struct);
}

inline bool operator!=(const TableInFirstNST &lhs, const TableInFirstNST &rhs) {
    return !(lhs == rhs);
}


struct TableInFirstNS FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TableInFirstNST NativeTableType;
  typedef TableInFirstNSBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return TableInFirstNSTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FOO_TABLE = 4,
    VT_FOO_ENUM = 6,
    VT_FOO_STRUCT = 8
  };
  const NamespaceA::NamespaceB::TableInNestedNS *foo_table() const {
    return GetPointer<const NamespaceA::NamespaceB::TableInNestedNS *>(VT_FOO_TABLE);
  }
  NamespaceA::NamespaceB::TableInNestedNS *mutable_foo_table() {
    return GetPointer<NamespaceA::NamespaceB::TableInNestedNS *>(VT_FOO_TABLE);
  }
  NamespaceA::NamespaceB::EnumInNestedNS foo_enum() const {
    return static_cast<NamespaceA::NamespaceB::EnumInNestedNS>(GetField<int8_t>(VT_FOO_ENUM, 0));
  }
  bool mutate_foo_enum(NamespaceA::NamespaceB::EnumInNestedNS _foo_enum) {
    return SetField<int8_t>(VT_FOO_ENUM, static_cast<int8_t>(_foo_enum), 0);
  }
  const NamespaceA::NamespaceB::StructInNestedNS *foo_struct() const {
    return GetStruct<const NamespaceA::NamespaceB::StructInNestedNS *>(VT_FOO_STRUCT);
  }
  NamespaceA::NamespaceB::StructInNestedNS *mutable_foo_struct() {
    return GetStruct<NamespaceA::NamespaceB::StructInNestedNS *>(VT_FOO_STRUCT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FOO_TABLE) &&
           verifier.VerifyTable(foo_table()) &&
           VerifyField<int8_t>(verifier, VT_FOO_ENUM) &&
           VerifyField<NamespaceA::NamespaceB::StructInNestedNS>(verifier, VT_FOO_STRUCT) &&
           verifier.EndTable();
  }
  TableInFirstNST *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TableInFirstNST *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<TableInFirstNS> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TableInFirstNST* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TableInFirstNSBuilder {
  typedef TableInFirstNS Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_foo_table(flatbuffers::Offset<NamespaceA::NamespaceB::TableInNestedNS> foo_table) {
    fbb_.AddOffset(TableInFirstNS::VT_FOO_TABLE, foo_table);
  }
  void add_foo_enum(NamespaceA::NamespaceB::EnumInNestedNS foo_enum) {
    fbb_.AddElement<int8_t>(TableInFirstNS::VT_FOO_ENUM, static_cast<int8_t>(foo_enum), 0);
  }
  void add_foo_struct(const NamespaceA::NamespaceB::StructInNestedNS *foo_struct) {
    fbb_.AddStruct(TableInFirstNS::VT_FOO_STRUCT, foo_struct);
  }
  explicit TableInFirstNSBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TableInFirstNSBuilder &operator=(const TableInFirstNSBuilder &);
  flatbuffers::Offset<TableInFirstNS> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TableInFirstNS>(end);
    return o;
  }
};

inline flatbuffers::Offset<TableInFirstNS> CreateTableInFirstNS(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<NamespaceA::NamespaceB::TableInNestedNS> foo_table = 0,
    NamespaceA::NamespaceB::EnumInNestedNS foo_enum = NamespaceA::NamespaceB::EnumInNestedNS_A,
    const NamespaceA::NamespaceB::StructInNestedNS *foo_struct = 0) {
  TableInFirstNSBuilder builder_(_fbb);
  builder_.add_foo_struct(foo_struct);
  builder_.add_foo_table(foo_table);
  builder_.add_foo_enum(foo_enum);
  return builder_.Finish();
}

flatbuffers::Offset<TableInFirstNS> CreateTableInFirstNS(flatbuffers::FlatBufferBuilder &_fbb, const TableInFirstNST *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

}  // namespace NamespaceA

namespace NamespaceC {

struct TableInCT : public flatbuffers::NativeTable {
  typedef TableInC TableType;
  flatbuffers::unique_ptr<NamespaceA::TableInFirstNST> refer_to_a1;
  flatbuffers::unique_ptr<NamespaceA::SecondTableInAT> refer_to_a2;
  TableInCT() {
  }
};

inline bool operator==(const TableInCT &lhs, const TableInCT &rhs) {
  return
      (lhs.refer_to_a1 == rhs.refer_to_a1) &&
      (lhs.refer_to_a2 == rhs.refer_to_a2);
}

inline bool operator!=(const TableInCT &lhs, const TableInCT &rhs) {
    return !(lhs == rhs);
}


struct TableInC FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TableInCT NativeTableType;
  typedef TableInCBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return TableInCTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_REFER_TO_A1 = 4,
    VT_REFER_TO_A2 = 6
  };
  const NamespaceA::TableInFirstNS *refer_to_a1() const {
    return GetPointer<const NamespaceA::TableInFirstNS *>(VT_REFER_TO_A1);
  }
  NamespaceA::TableInFirstNS *mutable_refer_to_a1() {
    return GetPointer<NamespaceA::TableInFirstNS *>(VT_REFER_TO_A1);
  }
  const NamespaceA::SecondTableInA *refer_to_a2() const {
    return GetPointer<const NamespaceA::SecondTableInA *>(VT_REFER_TO_A2);
  }
  NamespaceA::SecondTableInA *mutable_refer_to_a2() {
    return GetPointer<NamespaceA::SecondTableInA *>(VT_REFER_TO_A2);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_REFER_TO_A1) &&
           verifier.VerifyTable(refer_to_a1()) &&
           VerifyOffset(verifier, VT_REFER_TO_A2) &&
           verifier.VerifyTable(refer_to_a2()) &&
           verifier.EndTable();
  }
  TableInCT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TableInCT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<TableInC> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TableInCT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TableInCBuilder {
  typedef TableInC Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_refer_to_a1(flatbuffers::Offset<NamespaceA::TableInFirstNS> refer_to_a1) {
    fbb_.AddOffset(TableInC::VT_REFER_TO_A1, refer_to_a1);
  }
  void add_refer_to_a2(flatbuffers::Offset<NamespaceA::SecondTableInA> refer_to_a2) {
    fbb_.AddOffset(TableInC::VT_REFER_TO_A2, refer_to_a2);
  }
  explicit TableInCBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TableInCBuilder &operator=(const TableInCBuilder &);
  flatbuffers::Offset<TableInC> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TableInC>(end);
    return o;
  }
};

inline flatbuffers::Offset<TableInC> CreateTableInC(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<NamespaceA::TableInFirstNS> refer_to_a1 = 0,
    flatbuffers::Offset<NamespaceA::SecondTableInA> refer_to_a2 = 0) {
  TableInCBuilder builder_(_fbb);
  builder_.add_refer_to_a2(refer_to_a2);
  builder_.add_refer_to_a1(refer_to_a1);
  return builder_.Finish();
}

flatbuffers::Offset<TableInC> CreateTableInC(flatbuffers::FlatBufferBuilder &_fbb, const TableInCT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

}  // namespace NamespaceC

namespace NamespaceA {

struct SecondTableInAT : public flatbuffers::NativeTable {
  typedef SecondTableInA TableType;
  flatbuffers::unique_ptr<NamespaceC::TableInCT> refer_to_c;
  SecondTableInAT() {
  }
};

inline bool operator==(const SecondTableInAT &lhs, const SecondTableInAT &rhs) {
  return
      (lhs.refer_to_c == rhs.refer_to_c);
}

inline bool operator!=(const SecondTableInAT &lhs, const SecondTableInAT &rhs) {
    return !(lhs == rhs);
}


struct SecondTableInA FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SecondTableInAT NativeTableType;
  typedef SecondTableInABuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return SecondTableInATypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_REFER_TO_C = 4
  };
  const NamespaceC::TableInC *refer_to_c() const {
    return GetPointer<const NamespaceC::TableInC *>(VT_REFER_TO_C);
  }
  NamespaceC::TableInC *mutable_refer_to_c() {
    return GetPointer<NamespaceC::TableInC *>(VT_REFER_TO_C);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_REFER_TO_C) &&
           verifier.VerifyTable(refer_to_c()) &&
           verifier.EndTable();
  }
  SecondTableInAT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(SecondTableInAT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<SecondTableInA> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SecondTableInAT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct SecondTableInABuilder {
  typedef SecondTableInA Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_refer_to_c(flatbuffers::Offset<NamespaceC::TableInC> refer_to_c) {
    fbb_.AddOffset(SecondTableInA::VT_REFER_TO_C, refer_to_c);
  }
  explicit SecondTableInABuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SecondTableInABuilder &operator=(const SecondTableInABuilder &);
  flatbuffers::Offset<SecondTableInA> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SecondTableInA>(end);
    return o;
  }
};

inline flatbuffers::Offset<SecondTableInA> CreateSecondTableInA(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<NamespaceC::TableInC> refer_to_c = 0) {
  SecondTableInABuilder builder_(_fbb);
  builder_.add_refer_to_c(refer_to_c);
  return builder_.Finish();
}

flatbuffers::Offset<SecondTableInA> CreateSecondTableInA(flatbuffers::FlatBufferBuilder &_fbb, const SecondTableInAT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline TableInFirstNST *TableInFirstNS::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  flatbuffers::unique_ptr<NamespaceA::TableInFirstNST> _o = flatbuffers::unique_ptr<NamespaceA::TableInFirstNST>(new TableInFirstNST());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void TableInFirstNS::UnPackTo(TableInFirstNST *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = foo_table(); if (_e) _o->foo_table = flatbuffers::unique_ptr<NamespaceA::NamespaceB::TableInNestedNST>(_e->UnPack(_resolver)); }
  { auto _e = foo_enum(); _o->foo_enum = _e; }
  { auto _e = foo_struct(); if (_e) _o->foo_struct = flatbuffers::unique_ptr<NamespaceA::NamespaceB::StructInNestedNS>(new NamespaceA::NamespaceB::StructInNestedNS(*_e)); }
}

inline flatbuffers::Offset<TableInFirstNS> TableInFirstNS::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TableInFirstNST* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTableInFirstNS(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TableInFirstNS> CreateTableInFirstNS(flatbuffers::FlatBufferBuilder &_fbb, const TableInFirstNST *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TableInFirstNST* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _foo_table = _o->foo_table ? CreateTableInNestedNS(_fbb, _o->foo_table.get(), _rehasher) : 0;
  auto _foo_enum = _o->foo_enum;
  auto _foo_struct = _o->foo_struct ? _o->foo_struct.get() : 0;
  return NamespaceA::CreateTableInFirstNS(
      _fbb,
      _foo_table,
      _foo_enum,
      _foo_struct);
}

}  // namespace NamespaceA

namespace NamespaceC {

inline TableInCT *TableInC::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  flatbuffers::unique_ptr<NamespaceC::TableInCT> _o = flatbuffers::unique_ptr<NamespaceC::TableInCT>(new TableInCT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void TableInC::UnPackTo(TableInCT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = refer_to_a1(); if (_e) _o->refer_to_a1 = flatbuffers::unique_ptr<NamespaceA::TableInFirstNST>(_e->UnPack(_resolver)); }
  { auto _e = refer_to_a2(); if (_e) _o->refer_to_a2 = flatbuffers::unique_ptr<NamespaceA::SecondTableInAT>(_e->UnPack(_resolver)); }
}

inline flatbuffers::Offset<TableInC> TableInC::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TableInCT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTableInC(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TableInC> CreateTableInC(flatbuffers::FlatBufferBuilder &_fbb, const TableInCT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TableInCT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _refer_to_a1 = _o->refer_to_a1 ? CreateTableInFirstNS(_fbb, _o->refer_to_a1.get(), _rehasher) : 0;
  auto _refer_to_a2 = _o->refer_to_a2 ? CreateSecondTableInA(_fbb, _o->refer_to_a2.get(), _rehasher) : 0;
  return NamespaceC::CreateTableInC(
      _fbb,
      _refer_to_a1,
      _refer_to_a2);
}

}  // namespace NamespaceC

namespace NamespaceA {

inline SecondTableInAT *SecondTableInA::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  flatbuffers::unique_ptr<NamespaceA::SecondTableInAT> _o = flatbuffers::unique_ptr<NamespaceA::SecondTableInAT>(new SecondTableInAT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void SecondTableInA::UnPackTo(SecondTableInAT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = refer_to_c(); if (_e) _o->refer_to_c = flatbuffers::unique_ptr<NamespaceC::TableInCT>(_e->UnPack(_resolver)); }
}

inline flatbuffers::Offset<SecondTableInA> SecondTableInA::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SecondTableInAT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateSecondTableInA(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<SecondTableInA> CreateSecondTableInA(flatbuffers::FlatBufferBuilder &_fbb, const SecondTableInAT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SecondTableInAT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _refer_to_c = _o->refer_to_c ? CreateTableInC(_fbb, _o->refer_to_c.get(), _rehasher) : 0;
  return NamespaceA::CreateSecondTableInA(
      _fbb,
      _refer_to_c);
}

inline const flatbuffers::TypeTable *TableInFirstNSTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 1 },
    { flatbuffers::ET_SEQUENCE, 0, 2 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    NamespaceA::NamespaceB::TableInNestedNSTypeTable,
    NamespaceA::NamespaceB::EnumInNestedNSTypeTable,
    NamespaceA::NamespaceB::StructInNestedNSTypeTable
  };
  static const char * const names[] = {
    "foo_table",
    "foo_enum",
    "foo_struct"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 3, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

}  // namespace NamespaceA

namespace NamespaceC {

inline const flatbuffers::TypeTable *TableInCTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 },
    { flatbuffers::ET_SEQUENCE, 0, 1 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    NamespaceA::TableInFirstNSTypeTable,
    NamespaceA::SecondTableInATypeTable
  };
  static const char * const names[] = {
    "refer_to_a1",
    "refer_to_a2"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 2, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

}  // namespace NamespaceC

namespace NamespaceA {

inline const flatbuffers::TypeTable *SecondTableInATypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    NamespaceC::TableInCTypeTable
  };
  static const char * const names[] = {
    "refer_to_c"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

}  // namespace NamespaceA

#endif  // FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
