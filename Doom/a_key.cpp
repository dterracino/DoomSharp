#include "p_mobj.hpp"

[Scriptable]
[ActorType(MT_MISC4)]
[DoomedNum(5)]
ref class BlueCard : DActor
{
public:
	BlueCard()
	{
		Special = true;
		NotDMatch = true;
		DefineState("Spawn",S_BKEY);
	}
};

[Scriptable]
[ActorType(MT_MISC5)]
[DoomedNum(13)]
ref class RedCard : DActor
{
public:
	RedCard()
	{
		Special = true;
		NotDMatch = true;
		DefineState("Spawn",S_RKEY);
	}
};

[Scriptable]
[ActorType(MT_MISC6)]
[DoomedNum(6)]
ref class YellowCard : DActor
{
public:
	YellowCard()
	{
		Special = true;
		NotDMatch = true;
		DefineState("Spawn",S_YKEY);
	}
};

[Scriptable]
[ActorType(MT_MISC7)]
[DoomedNum(39)]
ref class YellowSkull : DActor
{
public:
	YellowSkull()
	{
		Special = true;
		NotDMatch = true;
		DefineState("Spawn",S_YSKULL);
	}
};

[Scriptable]
[ActorType(MT_MISC8)]
[DoomedNum(38)]
ref class RedSkull : DActor
{
public:
	RedSkull()
	{
		Special = true;
		NotDMatch = true;
		DefineState("Spawn",S_RSKULL);
	}
};

[Scriptable]
[ActorType(MT_MISC9)]
[DoomedNum(40)]
ref class BlueSkull : DActor
{
public:
	BlueSkull()
	{
		Special = true;
		NotDMatch = true;
		DefineState("Spawn",S_BSKULL);
	}
};
