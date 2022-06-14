// automatically generated by the FlatBuffers compiler, do not modify
extern crate alloc;
extern crate flatbuffers;
use alloc::boxed::Box;
use alloc::string::{String, ToString};
use alloc::vec::Vec;
use core::mem;
use core::cmp::Ordering;
use self::flatbuffers::{EndianScalar, Follow};
use super::*;
#[deprecated(since = "2.0.0", note = "Use associated constants instead. This will no longer be generated in 2021.")]
pub const ENUM_MIN_UNION_IN_NESTED_NS: u8 = 0;
#[deprecated(since = "2.0.0", note = "Use associated constants instead. This will no longer be generated in 2021.")]
pub const ENUM_MAX_UNION_IN_NESTED_NS: u8 = 1;
#[deprecated(since = "2.0.0", note = "Use associated constants instead. This will no longer be generated in 2021.")]
#[allow(non_camel_case_types)]
pub const ENUM_VALUES_UNION_IN_NESTED_NS: [UnionInNestedNS; 2] = [
  UnionInNestedNS::NONE,
  UnionInNestedNS::TableInNestedNS,
];

#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash, Default)]
#[repr(transparent)]
pub struct UnionInNestedNS(pub u8);
#[allow(non_upper_case_globals)]
impl UnionInNestedNS {
  pub const NONE: Self = Self(0);
  pub const TableInNestedNS: Self = Self(1);

  pub const ENUM_MIN: u8 = 0;
  pub const ENUM_MAX: u8 = 1;
  pub const ENUM_VALUES: &'static [Self] = &[
    Self::NONE,
    Self::TableInNestedNS,
  ];
  /// Returns the variant's name or "" if unknown.
  pub fn variant_name(self) -> Option<&'static str> {
    match self {
      Self::NONE => Some("NONE"),
      Self::TableInNestedNS => Some("TableInNestedNS"),
      _ => None,
    }
  }
}
impl core::fmt::Debug for UnionInNestedNS {
  fn fmt(&self, f: &mut core::fmt::Formatter) -> core::fmt::Result {
    if let Some(name) = self.variant_name() {
      f.write_str(name)
    } else {
      f.write_fmt(format_args!("<UNKNOWN {:?}>", self.0))
    }
  }
}
impl<'a> flatbuffers::Follow<'a> for UnionInNestedNS {
  type Inner = Self;
  #[inline]
  fn follow(buf: &'a [u8], loc: usize) -> Self::Inner {
    let b = unsafe {
      flatbuffers::read_scalar_at::<u8>(buf, loc)
    };
    Self(b)
  }
}

impl flatbuffers::Push for UnionInNestedNS {
    type Output = UnionInNestedNS;
    #[inline]
    fn push(&self, dst: &mut [u8], _rest: &[u8]) {
        unsafe { flatbuffers::emplace_scalar::<u8>(dst, self.0); }
    }
}

impl flatbuffers::EndianScalar for UnionInNestedNS {
  #[inline]
  fn to_little_endian(self) -> Self {
    let b = u8::to_le(self.0);
    Self(b)
  }
  #[inline]
  #[allow(clippy::wrong_self_convention)]
  fn from_little_endian(self) -> Self {
    let b = u8::from_le(self.0);
    Self(b)
  }
}

impl<'a> flatbuffers::Verifiable for UnionInNestedNS {
  #[inline]
  fn run_verifier(
    v: &mut flatbuffers::Verifier, pos: usize
  ) -> Result<(), flatbuffers::InvalidFlatbuffer> {
    use self::flatbuffers::Verifiable;
    u8::run_verifier(v, pos)
  }
}

impl flatbuffers::SimpleToVerifyInSlice for UnionInNestedNS {}
pub struct UnionInNestedNSUnionTableOffset {}

#[allow(clippy::upper_case_acronyms)]
#[non_exhaustive]
#[derive(Debug, Clone, PartialEq)]
pub enum UnionInNestedNST {
  NONE,
  TableInNestedNS(Box<TableInNestedNST>),
}
impl Default for UnionInNestedNST {
  fn default() -> Self {
    Self::NONE
  }
}
impl UnionInNestedNST {
  pub fn union_in_nested_ns_type(&self) -> UnionInNestedNS {
    match self {
      Self::NONE => UnionInNestedNS::NONE,
      Self::TableInNestedNS(_) => UnionInNestedNS::TableInNestedNS,
    }
  }
  pub fn pack(&self, fbb: &mut flatbuffers::FlatBufferBuilder) -> Option<flatbuffers::WIPOffset<flatbuffers::UnionWIPOffset>> {
    match self {
      Self::NONE => None,
      Self::TableInNestedNS(v) => Some(v.pack(fbb).as_union_value()),
    }
  }
  /// If the union variant matches, return the owned TableInNestedNST, setting the union to NONE.
  pub fn take_table_in_nested_ns(&mut self) -> Option<Box<TableInNestedNST>> {
    if let Self::TableInNestedNS(_) = self {
      let v = core::mem::replace(self, Self::NONE);
      if let Self::TableInNestedNS(w) = v {
        Some(w)
      } else {
        unreachable!()
      }
    } else {
      None
    }
  }
  /// If the union variant matches, return a reference to the TableInNestedNST.
  pub fn as_table_in_nested_ns(&self) -> Option<&TableInNestedNST> {
    if let Self::TableInNestedNS(v) = self { Some(v.as_ref()) } else { None }
  }
  /// If the union variant matches, return a mutable reference to the TableInNestedNST.
  pub fn as_table_in_nested_ns_mut(&mut self) -> Option<&mut TableInNestedNST> {
    if let Self::TableInNestedNS(v) = self { Some(v.as_mut()) } else { None }
  }
}