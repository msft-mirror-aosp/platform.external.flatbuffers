--[[ TableA

  Automatically generated by the FlatBuffers compiler, do not modify.
  Or modify. I'm a message, not a cop.

  flatc version: 25.1.24

  Declared by  : //include_test/include_test1.fbs
  Rooting type : MyGame.Example.Monster (//monster_test.fbs)

--]]

local __MyGame_OtherNameSpace_TableB = require('MyGame.OtherNameSpace.TableB')
local flatbuffers = require('flatbuffers')

local TableA = {}
local mt = {}

function TableA.New()
  local o = {}
  setmetatable(o, {__index = mt})
  return o
end

function mt:Init(buf, pos)
  self.view = flatbuffers.view.New(buf, pos)
end

function mt:B()
  local o = self.view:Offset(4)
  if o ~= 0 then
    local x = self.view:Indirect(self.view.pos + o)
    local obj = __MyGame_OtherNameSpace_TableB.New()
    obj:Init(self.view.bytes, x)
    return obj
  end
end

function TableA.Start(builder)
  builder:StartObject(1)
end

function TableA.AddB(builder, b)
  builder:PrependStructSlot(0, b, 0)
end

function TableA.End(builder)
  return builder:EndObject()
end

return TableA