// automatically generated by the FlatBuffers compiler, do not modify

import com.google.flatbuffers.BaseVector;
import com.google.flatbuffers.BooleanVector;
import com.google.flatbuffers.ByteVector;
import com.google.flatbuffers.Constants;
import com.google.flatbuffers.DoubleVector;
import com.google.flatbuffers.FlatBufferBuilder;
import com.google.flatbuffers.FloatVector;
import com.google.flatbuffers.IntVector;
import com.google.flatbuffers.LongVector;
import com.google.flatbuffers.ShortVector;
import com.google.flatbuffers.StringVector;
import com.google.flatbuffers.Struct;
import com.google.flatbuffers.Table;
import com.google.flatbuffers.UnionVector;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

@SuppressWarnings("unused")
public final class Universe extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_23_5_26(); }
  public static Universe getRootAsUniverse(ByteBuffer _bb) { return getRootAsUniverse(_bb, new Universe()); }
  public static Universe getRootAsUniverse(ByteBuffer _bb, Universe obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public Universe __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public double age() { int o = __offset(4); return o != 0 ? bb.getDouble(o + bb_pos) : 0.0; }
  public Galaxy galaxies(int j) { return galaxies(new Galaxy(), j); }
  public Galaxy galaxies(Galaxy obj, int j) { int o = __offset(6); return o != 0 ? obj.__assign(__indirect(__vector(o) + j * 4), bb) : null; }
  public int galaxiesLength() { int o = __offset(6); return o != 0 ? __vector_len(o) : 0; }
  public Galaxy.Vector galaxiesVector() { return galaxiesVector(new Galaxy.Vector()); }
  public Galaxy.Vector galaxiesVector(Galaxy.Vector obj) { int o = __offset(6); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }

  public static int createUniverse(FlatBufferBuilder builder,
      double age,
      int galaxiesOffset) {
    builder.startTable(2);
    Universe.addAge(builder, age);
    Universe.addGalaxies(builder, galaxiesOffset);
    return Universe.endUniverse(builder);
  }

  public static void startUniverse(FlatBufferBuilder builder) { builder.startTable(2); }
  public static void addAge(FlatBufferBuilder builder, double age) { builder.addDouble(0, age, 0.0); }
  public static void addGalaxies(FlatBufferBuilder builder, int galaxiesOffset) { builder.addOffset(1, galaxiesOffset, 0); }
  public static int createGalaxiesVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startGalaxiesVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static int endUniverse(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishUniverseBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedUniverseBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public Universe get(int j) { return get(new Universe(), j); }
    public Universe get(Universe obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}
