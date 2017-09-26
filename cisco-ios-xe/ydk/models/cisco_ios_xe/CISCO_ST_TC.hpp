#ifndef _CISCO_ST_TC_
#define _CISCO_ST_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ST_TC {

class FcIfServiceStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inService;
        static const ydk::Enum::YLeaf outOfService;

};

class FcIfSfpDiagLevelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf lowWarning;
        static const ydk::Enum::YLeaf lowAlarm;
        static const ydk::Enum::YLeaf highWarning;
        static const ydk::Enum::YLeaf highAlarm;

};

class FcPortTxTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf longWaveLaser;
        static const ydk::Enum::YLeaf shortWaveLaser;
        static const ydk::Enum::YLeaf longWaveLaserCostReduced;
        static const ydk::Enum::YLeaf electrical;
        static const ydk::Enum::YLeaf tenGigBaseSr;
        static const ydk::Enum::YLeaf tenGigBaseLr;
        static const ydk::Enum::YLeaf tenGigBaseEr;
        static const ydk::Enum::YLeaf tenGigBaseLx4;
        static const ydk::Enum::YLeaf tenGigBaseSw;
        static const ydk::Enum::YLeaf tenGigBaseLw;
        static const ydk::Enum::YLeaf tenGigBaseEw;

};

class FcPortTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf fPort;
        static const ydk::Enum::YLeaf flPort;
        static const ydk::Enum::YLeaf ePort;
        static const ydk::Enum::YLeaf bPort;
        static const ydk::Enum::YLeaf fxPort;
        static const ydk::Enum::YLeaf sdPort;
        static const ydk::Enum::YLeaf tlPort;
        static const ydk::Enum::YLeaf nPort;
        static const ydk::Enum::YLeaf nlPort;
        static const ydk::Enum::YLeaf nxPort;
        static const ydk::Enum::YLeaf tePort;
        static const ydk::Enum::YLeaf fvPort;
        static const ydk::Enum::YLeaf portOperDown;
        static const ydk::Enum::YLeaf stPort;
        static const ydk::Enum::YLeaf npPort;
        static const ydk::Enum::YLeaf tfPort;
        static const ydk::Enum::YLeaf tnpPort;

};

class FcIfSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf oneG;
        static const ydk::Enum::YLeaf twoG;
        static const ydk::Enum::YLeaf fourG;
        static const ydk::Enum::YLeaf autoMaxTwoG;
        static const ydk::Enum::YLeaf eightG;
        static const ydk::Enum::YLeaf autoMaxFourG;
        static const ydk::Enum::YLeaf tenG;
        static const ydk::Enum::YLeaf autoMaxEightG;
        static const ydk::Enum::YLeaf sixteenG;
        static const ydk::Enum::YLeaf autoMaxSixteenG;

};

class InterfaceOperMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf fPort;
        static const ydk::Enum::YLeaf flPort;
        static const ydk::Enum::YLeaf ePort;
        static const ydk::Enum::YLeaf bPort;
        static const ydk::Enum::YLeaf fxPort;
        static const ydk::Enum::YLeaf sdPort;
        static const ydk::Enum::YLeaf tlPort;
        static const ydk::Enum::YLeaf nPort;
        static const ydk::Enum::YLeaf nlPort;
        static const ydk::Enum::YLeaf nxPort;
        static const ydk::Enum::YLeaf tePort;
        static const ydk::Enum::YLeaf fvPort;
        static const ydk::Enum::YLeaf portOperDown;
        static const ydk::Enum::YLeaf stPort;
        static const ydk::Enum::YLeaf mgmtPort;
        static const ydk::Enum::YLeaf ipsPort;
        static const ydk::Enum::YLeaf evPort;
        static const ydk::Enum::YLeaf npPort;
        static const ydk::Enum::YLeaf tfPort;
        static const ydk::Enum::YLeaf tnpPort;

};

class FcPortModuleTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf gbic;
        static const ydk::Enum::YLeaf embedded;
        static const ydk::Enum::YLeaf glm;
        static const ydk::Enum::YLeaf gbicWithSerialID;
        static const ydk::Enum::YLeaf gbicWithoutSerialID;
        static const ydk::Enum::YLeaf sfpWithSerialID;
        static const ydk::Enum::YLeaf sfpWithoutSerialID;
        static const ydk::Enum::YLeaf xfp;
        static const ydk::Enum::YLeaf x2Short;
        static const ydk::Enum::YLeaf x2Medium;
        static const ydk::Enum::YLeaf x2Tall;
        static const ydk::Enum::YLeaf xpakShort;
        static const ydk::Enum::YLeaf xpakMedium;
        static const ydk::Enum::YLeaf xpakTall;
        static const ydk::Enum::YLeaf xenpak;
        static const ydk::Enum::YLeaf sfpDwdm;
        static const ydk::Enum::YLeaf qsfp;
        static const ydk::Enum::YLeaf x2Dwdm;

};

class FcAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wwn;
        static const ydk::Enum::YLeaf fcid;

};


}
}

#endif /* _CISCO_ST_TC_ */

