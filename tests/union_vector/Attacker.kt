// automatically generated by the FlatBuffers compiler, do not modify

import java.nio.*
import kotlin.math.sign
import com.google.flatbuffers.*

@Suppress("unused")
class Attacker : Table() {

    fun __init(_i: Int, _bb: ByteBuffer)  {
        __reset(_i, _bb)
    }
    fun __assign(_i: Int, _bb: ByteBuffer) : Attacker {
        __init(_i, _bb)
        return this
    }
    val swordAttackDamage : Int
        get() {
            val o = __offset(4)
            return if(o != 0) bb.getInt(o + bb_pos) else 0
        }
    fun mutateSwordAttackDamage(swordAttackDamage: Int) : Boolean {
        val o = __offset(4)
        return if (o != 0) {
            bb.putInt(o + bb_pos, swordAttackDamage)
            true
        } else {
            false
        }
    }
    companion object {
        fun validateVersion() = Constants.FLATBUFFERS_2_0_0()
        fun getRootAsAttacker(_bb: ByteBuffer): Attacker = getRootAsAttacker(_bb, Attacker())
        fun getRootAsAttacker(_bb: ByteBuffer, obj: Attacker): Attacker {
            _bb.order(ByteOrder.LITTLE_ENDIAN)
            return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb))
        }
        fun createAttacker(builder: FlatBufferBuilder, swordAttackDamage: Int) : Int {
            builder.startTable(1)
            addSwordAttackDamage(builder, swordAttackDamage)
            return endAttacker(builder)
        }
        fun startAttacker(builder: FlatBufferBuilder) = builder.startTable(1)
        fun addSwordAttackDamage(builder: FlatBufferBuilder, swordAttackDamage: Int) = builder.addInt(0, swordAttackDamage, 0)
        fun endAttacker(builder: FlatBufferBuilder) : Int {
            val o = builder.endTable()
            return o
        }
    }
}
