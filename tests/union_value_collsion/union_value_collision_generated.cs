// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace union_value_collsion
{

using global::System;
using global::System.Collections.Generic;
using global::Google.FlatBuffers;

[Newtonsoft.Json.JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
public enum Value : byte
{
  NONE = 0,
  IntValue = 1,
};

public class ValueUnion {
  public Value Type { get; set; }
  public object Value_ { get; set; }

  public ValueUnion() {
    this.Type = Value.NONE;
    this.Value_ = null;
  }

  public T As<T>() where T : class { return this.Value_ as T; }
  public union_value_collsion.IntValueT AsIntValue() { return this.As<union_value_collsion.IntValueT>(); }
  public static ValueUnion FromIntValue(union_value_collsion.IntValueT _intvalue) { return new ValueUnion{ Type = Value.IntValue, Value_ = _intvalue }; }

  public static int Pack(Google.FlatBuffers.FlatBufferBuilder builder, ValueUnion _o) {
    switch (_o.Type) {
      default: return 0;
      case Value.IntValue: return union_value_collsion.IntValue.Pack(builder, _o.AsIntValue()).Value;
    }
  }
}

public class ValueUnion_JsonConverter : Newtonsoft.Json.JsonConverter {
  public override bool CanConvert(System.Type objectType) {
    return objectType == typeof(ValueUnion) || objectType == typeof(System.Collections.Generic.List<ValueUnion>);
  }
  public override void WriteJson(Newtonsoft.Json.JsonWriter writer, object value, Newtonsoft.Json.JsonSerializer serializer) {
    var _olist = value as System.Collections.Generic.List<ValueUnion>;
    if (_olist != null) {
      writer.WriteStartArray();
      foreach (var _o in _olist) { this.WriteJson(writer, _o, serializer); }
      writer.WriteEndArray();
    } else {
      this.WriteJson(writer, value as ValueUnion, serializer);
    }
  }
  public void WriteJson(Newtonsoft.Json.JsonWriter writer, ValueUnion _o, Newtonsoft.Json.JsonSerializer serializer) {
    if (_o == null) return;
    serializer.Serialize(writer, _o.Value_);
  }
  public override object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, object existingValue, Newtonsoft.Json.JsonSerializer serializer) {
    var _olist = existingValue as System.Collections.Generic.List<ValueUnion>;
    if (_olist != null) {
      for (var _j = 0; _j < _olist.Count; ++_j) {
        reader.Read();
        _olist[_j] = this.ReadJson(reader, _olist[_j], serializer);
      }
      reader.Read();
      return _olist;
    } else {
      return this.ReadJson(reader, existingValue as ValueUnion, serializer);
    }
  }
  public ValueUnion ReadJson(Newtonsoft.Json.JsonReader reader, ValueUnion _o, Newtonsoft.Json.JsonSerializer serializer) {
    if (_o == null) return null;
    switch (_o.Type) {
      default: break;
      case Value.IntValue: _o.Value_ = serializer.Deserialize<union_value_collsion.IntValueT>(reader); break;
    }
    return _o;
  }
}



static public class ValueVerify
{
  static public bool Verify(Google.FlatBuffers.Verifier verifier, byte typeId, uint tablePos)
  {
    bool result = true;
    switch((Value)typeId)
    {
      case Value.IntValue:
        result = union_value_collsion.IntValueVerify.Verify(verifier, tablePos);
        break;
      default: result = true;
        break;
    }
    return result;
  }
}

[Newtonsoft.Json.JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
public enum Other : byte
{
  NONE = 0,
  IntValue = 1,
};

public class OtherUnion {
  public Other Type { get; set; }
  public object Value { get; set; }

  public OtherUnion() {
    this.Type = Other.NONE;
    this.Value = null;
  }

  public T As<T>() where T : class { return this.Value as T; }
  public union_value_collsion.IntValueT AsIntValue() { return this.As<union_value_collsion.IntValueT>(); }
  public static OtherUnion FromIntValue(union_value_collsion.IntValueT _intvalue) { return new OtherUnion{ Type = Other.IntValue, Value = _intvalue }; }

  public static int Pack(Google.FlatBuffers.FlatBufferBuilder builder, OtherUnion _o) {
    switch (_o.Type) {
      default: return 0;
      case Other.IntValue: return union_value_collsion.IntValue.Pack(builder, _o.AsIntValue()).Value;
    }
  }
}

public class OtherUnion_JsonConverter : Newtonsoft.Json.JsonConverter {
  public override bool CanConvert(System.Type objectType) {
    return objectType == typeof(OtherUnion) || objectType == typeof(System.Collections.Generic.List<OtherUnion>);
  }
  public override void WriteJson(Newtonsoft.Json.JsonWriter writer, object value, Newtonsoft.Json.JsonSerializer serializer) {
    var _olist = value as System.Collections.Generic.List<OtherUnion>;
    if (_olist != null) {
      writer.WriteStartArray();
      foreach (var _o in _olist) { this.WriteJson(writer, _o, serializer); }
      writer.WriteEndArray();
    } else {
      this.WriteJson(writer, value as OtherUnion, serializer);
    }
  }
  public void WriteJson(Newtonsoft.Json.JsonWriter writer, OtherUnion _o, Newtonsoft.Json.JsonSerializer serializer) {
    if (_o == null) return;
    serializer.Serialize(writer, _o.Value);
  }
  public override object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, object existingValue, Newtonsoft.Json.JsonSerializer serializer) {
    var _olist = existingValue as System.Collections.Generic.List<OtherUnion>;
    if (_olist != null) {
      for (var _j = 0; _j < _olist.Count; ++_j) {
        reader.Read();
        _olist[_j] = this.ReadJson(reader, _olist[_j], serializer);
      }
      reader.Read();
      return _olist;
    } else {
      return this.ReadJson(reader, existingValue as OtherUnion, serializer);
    }
  }
  public OtherUnion ReadJson(Newtonsoft.Json.JsonReader reader, OtherUnion _o, Newtonsoft.Json.JsonSerializer serializer) {
    if (_o == null) return null;
    switch (_o.Type) {
      default: break;
      case Other.IntValue: _o.Value = serializer.Deserialize<union_value_collsion.IntValueT>(reader); break;
    }
    return _o;
  }
}



static public class OtherVerify
{
  static public bool Verify(Google.FlatBuffers.Verifier verifier, byte typeId, uint tablePos)
  {
    bool result = true;
    switch((Other)typeId)
    {
      case Other.IntValue:
        result = union_value_collsion.IntValueVerify.Verify(verifier, tablePos);
        break;
      default: result = true;
        break;
    }
    return result;
  }
}

public struct IntValue : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_25_1_24(); }
  public static IntValue GetRootAsIntValue(ByteBuffer _bb) { return GetRootAsIntValue(_bb, new IntValue()); }
  public static IntValue GetRootAsIntValue(ByteBuffer _bb, IntValue obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public IntValue __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public int Value { get { int o = __p.__offset(4); return o != 0 ? __p.bb.GetInt(o + __p.bb_pos) : (int)0; } }

  public static Offset<union_value_collsion.IntValue> CreateIntValue(FlatBufferBuilder builder,
      int value = 0) {
    builder.StartTable(1);
    IntValue.AddValue(builder, value);
    return IntValue.EndIntValue(builder);
  }

  public static void StartIntValue(FlatBufferBuilder builder) { builder.StartTable(1); }
  public static void AddValue(FlatBufferBuilder builder, int value) { builder.AddInt(0, value, 0); }
  public static Offset<union_value_collsion.IntValue> EndIntValue(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<union_value_collsion.IntValue>(o);
  }
  public IntValueT UnPack() {
    var _o = new IntValueT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(IntValueT _o) {
    _o.Value = this.Value;
  }
  public static Offset<union_value_collsion.IntValue> Pack(FlatBufferBuilder builder, IntValueT _o) {
    if (_o == null) return default(Offset<union_value_collsion.IntValue>);
    return CreateIntValue(
      builder,
      _o.Value);
  }
}

public class IntValueT
{
  [Newtonsoft.Json.JsonProperty("value")]
  public int Value { get; set; }

  public IntValueT() {
    this.Value = 0;
  }
}


static public class IntValueVerify
{
  static public bool Verify(Google.FlatBuffers.Verifier verifier, uint tablePos)
  {
    return verifier.VerifyTableStart(tablePos)
      && verifier.VerifyField(tablePos, 4 /*Value*/, 4 /*int*/, 4, false)
      && verifier.VerifyTableEnd(tablePos);
  }
}
public struct Collide : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_25_1_24(); }
  public static Collide GetRootAsCollide(ByteBuffer _bb) { return GetRootAsCollide(_bb, new Collide()); }
  public static Collide GetRootAsCollide(ByteBuffer _bb, Collide obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public Collide __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public string Collide_ { get { int o = __p.__offset(4); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetCollideBytes() { return __p.__vector_as_span<byte>(4, 1); }
#else
  public ArraySegment<byte>? GetCollideBytes() { return __p.__vector_as_arraysegment(4); }
#endif
  public byte[] GetCollideArray() { return __p.__vector_as_array<byte>(4); }
  public string Value { get { int o = __p.__offset(6); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetValueBytes() { return __p.__vector_as_span<byte>(6, 1); }
#else
  public ArraySegment<byte>? GetValueBytes() { return __p.__vector_as_arraysegment(6); }
#endif
  public byte[] GetValueArray() { return __p.__vector_as_array<byte>(6); }

  public static Offset<union_value_collsion.Collide> CreateCollide(FlatBufferBuilder builder,
      StringOffset collideOffset = default(StringOffset),
      StringOffset valueOffset = default(StringOffset)) {
    builder.StartTable(2);
    Collide.AddValue(builder, valueOffset);
    Collide.AddCollide(builder, collideOffset);
    return Collide.EndCollide(builder);
  }

  public static void StartCollide(FlatBufferBuilder builder) { builder.StartTable(2); }
  public static void AddCollide(FlatBufferBuilder builder, StringOffset collideOffset) { builder.AddOffset(0, collideOffset.Value, 0); }
  public static void AddValue(FlatBufferBuilder builder, StringOffset valueOffset) { builder.AddOffset(1, valueOffset.Value, 0); }
  public static Offset<union_value_collsion.Collide> EndCollide(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    builder.Required(o, 4);  // collide
    return new Offset<union_value_collsion.Collide>(o);
  }

  public static VectorOffset CreateSortedVectorOfCollide(FlatBufferBuilder builder, Offset<Collide>[] offsets) {
    Array.Sort(offsets,
      (Offset<Collide> o1, Offset<Collide> o2) =>
        new Collide().__assign(builder.DataBuffer.Length - o1.Value, builder.DataBuffer).Collide_.CompareTo(new Collide().__assign(builder.DataBuffer.Length - o2.Value, builder.DataBuffer).Collide_));
    return builder.CreateVectorOfTables(offsets);
  }

  public static Collide? __lookup_by_key(int vectorLocation, string key, ByteBuffer bb) {
    Collide obj_ = new Collide();
    int span = bb.GetInt(vectorLocation - 4);
    int start = 0;
    while (span != 0) {
      int middle = span / 2;
      int tableOffset = Table.__indirect(vectorLocation + 4 * (start + middle), bb);
      obj_.__assign(tableOffset, bb);
      int comp = obj_.Collide_.CompareTo(key);
      if (comp > 0) {
        span = middle;
      } else if (comp < 0) {
        middle++;
        start += middle;
        span -= middle;
      } else {
        return obj_;
      }
    }
    return null;
  }
  public CollideT UnPack() {
    var _o = new CollideT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(CollideT _o) {
    _o.Collide_ = this.Collide_;
    _o.Value = this.Value;
  }
  public static Offset<union_value_collsion.Collide> Pack(FlatBufferBuilder builder, CollideT _o) {
    if (_o == null) return default(Offset<union_value_collsion.Collide>);
    var _collide = _o.Collide_ == null ? default(StringOffset) : builder.CreateString(_o.Collide_);
    var _value = _o.Value == null ? default(StringOffset) : builder.CreateString(_o.Value);
    return CreateCollide(
      builder,
      _collide,
      _value);
  }
}

public class CollideT
{
  [Newtonsoft.Json.JsonProperty("collide")]
  public string Collide_ { get; set; }
  [Newtonsoft.Json.JsonProperty("value")]
  public string Value { get; set; }

  public CollideT() {
    this.Collide_ = null;
    this.Value = null;
  }
}


static public class CollideVerify
{
  static public bool Verify(Google.FlatBuffers.Verifier verifier, uint tablePos)
  {
    return verifier.VerifyTableStart(tablePos)
      && verifier.VerifyString(tablePos, 4 /*Collide*/, true)
      && verifier.VerifyString(tablePos, 6 /*Value*/, false)
      && verifier.VerifyTableEnd(tablePos);
  }
}
public struct Collision : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_25_1_24(); }
  public static Collision GetRootAsCollision(ByteBuffer _bb) { return GetRootAsCollision(_bb, new Collision()); }
  public static Collision GetRootAsCollision(ByteBuffer _bb, Collision obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public static bool VerifyCollision(ByteBuffer _bb) {Google.FlatBuffers.Verifier verifier = new Google.FlatBuffers.Verifier(_bb); return verifier.VerifyBuffer("", false, CollisionVerify.Verify); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public Collision __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public union_value_collsion.Value SomeValueType { get { int o = __p.__offset(4); return o != 0 ? (union_value_collsion.Value)__p.bb.Get(o + __p.bb_pos) : union_value_collsion.Value.NONE; } }
  public TTable? SomeValue<TTable>() where TTable : struct, IFlatbufferObject { int o = __p.__offset(6); return o != 0 ? (TTable?)__p.__union<TTable>(o + __p.bb_pos) : null; }
  public union_value_collsion.IntValue SomeValueAsIntValue() { return SomeValue<union_value_collsion.IntValue>().Value; }
  public union_value_collsion.Other ValueType { get { int o = __p.__offset(8); return o != 0 ? (union_value_collsion.Other)__p.bb.Get(o + __p.bb_pos) : union_value_collsion.Other.NONE; } }
  public TTable? Value<TTable>() where TTable : struct, IFlatbufferObject { int o = __p.__offset(10); return o != 0 ? (TTable?)__p.__union<TTable>(o + __p.bb_pos) : null; }
  public union_value_collsion.IntValue ValueAsIntValue() { return Value<union_value_collsion.IntValue>().Value; }
  public union_value_collsion.Collision? Collide(int j) { int o = __p.__offset(12); return o != 0 ? (union_value_collsion.Collision?)(new union_value_collsion.Collision()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int CollideLength { get { int o = __p.__offset(12); return o != 0 ? __p.__vector_len(o) : 0; } }

  public static Offset<union_value_collsion.Collision> CreateCollision(FlatBufferBuilder builder,
      union_value_collsion.Value some_value_type = union_value_collsion.Value.NONE,
      int some_valueOffset = 0,
      union_value_collsion.Other value_type = union_value_collsion.Other.NONE,
      int valueOffset = 0,
      VectorOffset collideOffset = default(VectorOffset)) {
    builder.StartTable(5);
    Collision.AddCollide(builder, collideOffset);
    Collision.AddValue(builder, valueOffset);
    Collision.AddSomeValue(builder, some_valueOffset);
    Collision.AddValueType(builder, value_type);
    Collision.AddSomeValueType(builder, some_value_type);
    return Collision.EndCollision(builder);
  }

  public static void StartCollision(FlatBufferBuilder builder) { builder.StartTable(5); }
  public static void AddSomeValueType(FlatBufferBuilder builder, union_value_collsion.Value someValueType) { builder.AddByte(0, (byte)someValueType, 0); }
  public static void AddSomeValue(FlatBufferBuilder builder, int someValueOffset) { builder.AddOffset(1, someValueOffset, 0); }
  public static void AddValueType(FlatBufferBuilder builder, union_value_collsion.Other valueType) { builder.AddByte(2, (byte)valueType, 0); }
  public static void AddValue(FlatBufferBuilder builder, int valueOffset) { builder.AddOffset(3, valueOffset, 0); }
  public static void AddCollide(FlatBufferBuilder builder, VectorOffset collideOffset) { builder.AddOffset(4, collideOffset.Value, 0); }
  public static VectorOffset CreateCollideVector(FlatBufferBuilder builder, Offset<union_value_collsion.Collision>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateCollideVectorBlock(FlatBufferBuilder builder, Offset<union_value_collsion.Collision>[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static VectorOffset CreateCollideVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<union_value_collsion.Collision>> data) { builder.StartVector(4, data.Count, 4); builder.Add(data); return builder.EndVector(); }
  public static VectorOffset CreateCollideVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { builder.StartVector(1, sizeInBytes, 1); builder.Add<Offset<union_value_collsion.Collision>>(dataPtr, sizeInBytes); return builder.EndVector(); }
  public static void StartCollideVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static Offset<union_value_collsion.Collision> EndCollision(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<union_value_collsion.Collision>(o);
  }
  public static void FinishCollisionBuffer(FlatBufferBuilder builder, Offset<union_value_collsion.Collision> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedCollisionBuffer(FlatBufferBuilder builder, Offset<union_value_collsion.Collision> offset) { builder.FinishSizePrefixed(offset.Value); }
  public CollisionT UnPack() {
    var _o = new CollisionT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(CollisionT _o) {
    _o.SomeValue = new union_value_collsion.ValueUnion();
    _o.SomeValue.Type = this.SomeValueType;
    switch (this.SomeValueType) {
      default: break;
      case union_value_collsion.Value.IntValue:
        _o.SomeValue.Value_ = this.SomeValue<union_value_collsion.IntValue>().HasValue ? this.SomeValue<union_value_collsion.IntValue>().Value.UnPack() : null;
        break;
    }
    _o.Value = new union_value_collsion.OtherUnion();
    _o.Value.Type = this.ValueType;
    switch (this.ValueType) {
      default: break;
      case union_value_collsion.Other.IntValue:
        _o.Value.Value = this.Value<union_value_collsion.IntValue>().HasValue ? this.Value<union_value_collsion.IntValue>().Value.UnPack() : null;
        break;
    }
    _o.Collide = new List<union_value_collsion.CollisionT>();
    for (var _j = 0; _j < this.CollideLength; ++_j) {_o.Collide.Add(this.Collide(_j).HasValue ? this.Collide(_j).Value.UnPack() : null);}
  }
  public static Offset<union_value_collsion.Collision> Pack(FlatBufferBuilder builder, CollisionT _o) {
    if (_o == null) return default(Offset<union_value_collsion.Collision>);
    var _some_value_type = _o.SomeValue == null ? union_value_collsion.Value.NONE : _o.SomeValue.Type;
    var _some_value = _o.SomeValue == null ? 0 : union_value_collsion.ValueUnion.Pack(builder, _o.SomeValue);
    var _value_type = _o.Value == null ? union_value_collsion.Other.NONE : _o.Value.Type;
    var _value = _o.Value == null ? 0 : union_value_collsion.OtherUnion.Pack(builder, _o.Value);
    var _collide = default(VectorOffset);
    if (_o.Collide != null) {
      var __collide = new Offset<union_value_collsion.Collision>[_o.Collide.Count];
      for (var _j = 0; _j < __collide.Length; ++_j) { __collide[_j] = union_value_collsion.Collision.Pack(builder, _o.Collide[_j]); }
      _collide = CreateCollideVector(builder, __collide);
    }
    return CreateCollision(
      builder,
      _some_value_type,
      _some_value,
      _value_type,
      _value,
      _collide);
  }
}

public class CollisionT
{
  [Newtonsoft.Json.JsonProperty("some_value_type")]
  private union_value_collsion.Value SomeValueType {
    get {
      return this.SomeValue != null ? this.SomeValue.Type : union_value_collsion.Value.NONE;
    }
    set {
      this.SomeValue = new union_value_collsion.ValueUnion();
      this.SomeValue.Type = value;
    }
  }
  [Newtonsoft.Json.JsonProperty("some_value")]
  [Newtonsoft.Json.JsonConverter(typeof(union_value_collsion.ValueUnion_JsonConverter))]
  public union_value_collsion.ValueUnion SomeValue { get; set; }
  [Newtonsoft.Json.JsonProperty("value_type")]
  private union_value_collsion.Other ValueType {
    get {
      return this.Value != null ? this.Value.Type : union_value_collsion.Other.NONE;
    }
    set {
      this.Value = new union_value_collsion.OtherUnion();
      this.Value.Type = value;
    }
  }
  [Newtonsoft.Json.JsonProperty("value")]
  [Newtonsoft.Json.JsonConverter(typeof(union_value_collsion.OtherUnion_JsonConverter))]
  public union_value_collsion.OtherUnion Value { get; set; }
  [Newtonsoft.Json.JsonProperty("collide")]
  public List<union_value_collsion.CollisionT> Collide { get; set; }

  public CollisionT() {
    this.SomeValue = null;
    this.Value = null;
    this.Collide = null;
  }

  public static CollisionT DeserializeFromJson(string jsonText) {
    return Newtonsoft.Json.JsonConvert.DeserializeObject<CollisionT>(jsonText);
  }
  public string SerializeToJson() {
    return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
  }
  public static CollisionT DeserializeFromBinary(byte[] fbBuffer) {
    return Collision.GetRootAsCollision(new ByteBuffer(fbBuffer)).UnPack();
  }
  public byte[] SerializeToBinary() {
    var fbb = new FlatBufferBuilder(0x10000);
    Collision.FinishCollisionBuffer(fbb, Collision.Pack(fbb, this));
    return fbb.DataBuffer.ToSizedArray();
  }
}


static public class CollisionVerify
{
  static public bool Verify(Google.FlatBuffers.Verifier verifier, uint tablePos)
  {
    return verifier.VerifyTableStart(tablePos)
      && verifier.VerifyField(tablePos, 4 /*SomeValueType*/, 1 /*union_value_collsion.Value*/, 1, false)
      && verifier.VerifyUnion(tablePos, 4, 6 /*SomeValue*/, union_value_collsion.ValueVerify.Verify, false)
      && verifier.VerifyField(tablePos, 8 /*ValueType*/, 1 /*union_value_collsion.Other*/, 1, false)
      && verifier.VerifyUnion(tablePos, 8, 10 /*Value*/, union_value_collsion.OtherVerify.Verify, false)
      && verifier.VerifyVectorOfTables(tablePos, 12 /*Collide*/, union_value_collsion.CollisionVerify.Verify, false)
      && verifier.VerifyTableEnd(tablePos);
  }
}

}
