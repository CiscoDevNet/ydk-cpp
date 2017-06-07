#ifndef _CISCO_ST_TC_
#define _CISCO_ST_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ST_TC {

class FcaddresstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf wwn;
        static const Enum::YLeaf fcid;

};

class FcifservicestatetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf inService;
        static const Enum::YLeaf outOfService;

};

class FcifsfpdiagleveltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf lowWarning;
        static const Enum::YLeaf lowAlarm;
        static const Enum::YLeaf highWarning;
        static const Enum::YLeaf highAlarm;

};

class FcportmoduletypesEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf other;
        static const Enum::YLeaf gbic;
        static const Enum::YLeaf embedded;
        static const Enum::YLeaf glm;
        static const Enum::YLeaf gbicWithSerialID;
        static const Enum::YLeaf gbicWithoutSerialID;
        static const Enum::YLeaf sfpWithSerialID;
        static const Enum::YLeaf sfpWithoutSerialID;
        static const Enum::YLeaf xfp;
        static const Enum::YLeaf x2Short;
        static const Enum::YLeaf x2Medium;
        static const Enum::YLeaf x2Tall;
        static const Enum::YLeaf xpakShort;
        static const Enum::YLeaf xpakMedium;
        static const Enum::YLeaf xpakTall;
        static const Enum::YLeaf xenpak;
        static const Enum::YLeaf sfpDwdm;
        static const Enum::YLeaf qsfp;
        static const Enum::YLeaf x2Dwdm;

};

class FcporttypesEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf fPort;
        static const Enum::YLeaf flPort;
        static const Enum::YLeaf ePort;
        static const Enum::YLeaf bPort;
        static const Enum::YLeaf fxPort;
        static const Enum::YLeaf sdPort;
        static const Enum::YLeaf tlPort;
        static const Enum::YLeaf nPort;
        static const Enum::YLeaf nlPort;
        static const Enum::YLeaf nxPort;
        static const Enum::YLeaf tePort;
        static const Enum::YLeaf fvPort;
        static const Enum::YLeaf portOperDown;
        static const Enum::YLeaf stPort;
        static const Enum::YLeaf npPort;
        static const Enum::YLeaf tfPort;
        static const Enum::YLeaf tnpPort;

};

class FcporttxtypesEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf longWaveLaser;
        static const Enum::YLeaf shortWaveLaser;
        static const Enum::YLeaf longWaveLaserCostReduced;
        static const Enum::YLeaf electrical;
        static const Enum::YLeaf tenGigBaseSr;
        static const Enum::YLeaf tenGigBaseLr;
        static const Enum::YLeaf tenGigBaseEr;
        static const Enum::YLeaf tenGigBaseLx4;
        static const Enum::YLeaf tenGigBaseSw;
        static const Enum::YLeaf tenGigBaseLw;
        static const Enum::YLeaf tenGigBaseEw;

};

class FcifspeedEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf oneG;
        static const Enum::YLeaf twoG;
        static const Enum::YLeaf fourG;
        static const Enum::YLeaf autoMaxTwoG;
        static const Enum::YLeaf eightG;
        static const Enum::YLeaf autoMaxFourG;
        static const Enum::YLeaf tenG;
        static const Enum::YLeaf autoMaxEightG;
        static const Enum::YLeaf sixteenG;
        static const Enum::YLeaf autoMaxSixteenG;

};

class InterfaceopermodeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf fPort;
        static const Enum::YLeaf flPort;
        static const Enum::YLeaf ePort;
        static const Enum::YLeaf bPort;
        static const Enum::YLeaf fxPort;
        static const Enum::YLeaf sdPort;
        static const Enum::YLeaf tlPort;
        static const Enum::YLeaf nPort;
        static const Enum::YLeaf nlPort;
        static const Enum::YLeaf nxPort;
        static const Enum::YLeaf tePort;
        static const Enum::YLeaf fvPort;
        static const Enum::YLeaf portOperDown;
        static const Enum::YLeaf stPort;
        static const Enum::YLeaf mgmtPort;
        static const Enum::YLeaf ipsPort;
        static const Enum::YLeaf evPort;
        static const Enum::YLeaf npPort;
        static const Enum::YLeaf tfPort;
        static const Enum::YLeaf tnpPort;

};


}
}

#endif /* _CISCO_ST_TC_ */

