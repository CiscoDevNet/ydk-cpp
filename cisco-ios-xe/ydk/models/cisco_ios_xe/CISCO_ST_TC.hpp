#ifndef _CISCO_ST_TC_
#define _CISCO_ST_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ST_TC {

class FcAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wwn;
        static const ydk::Enum::YLeaf fcid;

        static int get_enum_value(const std::string & name) {
            if (name == "wwn") return 1;
            if (name == "fcid") return 2;
            return -1;
        }
};

class FcIfServiceStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inService;
        static const ydk::Enum::YLeaf outOfService;

        static int get_enum_value(const std::string & name) {
            if (name == "inService") return 1;
            if (name == "outOfService") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "normal") return 2;
            if (name == "lowWarning") return 3;
            if (name == "lowAlarm") return 4;
            if (name == "highWarning") return 5;
            if (name == "highAlarm") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "other") return 2;
            if (name == "gbic") return 3;
            if (name == "embedded") return 4;
            if (name == "glm") return 5;
            if (name == "gbicWithSerialID") return 6;
            if (name == "gbicWithoutSerialID") return 7;
            if (name == "sfpWithSerialID") return 8;
            if (name == "sfpWithoutSerialID") return 9;
            if (name == "xfp") return 10;
            if (name == "x2Short") return 11;
            if (name == "x2Medium") return 12;
            if (name == "x2Tall") return 13;
            if (name == "xpakShort") return 14;
            if (name == "xpakMedium") return 15;
            if (name == "xpakTall") return 16;
            if (name == "xenpak") return 17;
            if (name == "sfpDwdm") return 18;
            if (name == "qsfp") return 19;
            if (name == "x2Dwdm") return 20;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "fPort") return 2;
            if (name == "flPort") return 3;
            if (name == "ePort") return 4;
            if (name == "bPort") return 5;
            if (name == "fxPort") return 6;
            if (name == "sdPort") return 7;
            if (name == "tlPort") return 8;
            if (name == "nPort") return 9;
            if (name == "nlPort") return 10;
            if (name == "nxPort") return 11;
            if (name == "tePort") return 12;
            if (name == "fvPort") return 13;
            if (name == "portOperDown") return 14;
            if (name == "stPort") return 15;
            if (name == "npPort") return 16;
            if (name == "tfPort") return 17;
            if (name == "tnpPort") return 18;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "longWaveLaser") return 2;
            if (name == "shortWaveLaser") return 3;
            if (name == "longWaveLaserCostReduced") return 4;
            if (name == "electrical") return 5;
            if (name == "tenGigBaseSr") return 6;
            if (name == "tenGigBaseLr") return 7;
            if (name == "tenGigBaseEr") return 8;
            if (name == "tenGigBaseLx4") return 9;
            if (name == "tenGigBaseSw") return 10;
            if (name == "tenGigBaseLw") return 11;
            if (name == "tenGigBaseEw") return 12;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "oneG") return 2;
            if (name == "twoG") return 3;
            if (name == "fourG") return 4;
            if (name == "autoMaxTwoG") return 5;
            if (name == "eightG") return 6;
            if (name == "autoMaxFourG") return 7;
            if (name == "tenG") return 8;
            if (name == "autoMaxEightG") return 9;
            if (name == "sixteenG") return 10;
            if (name == "autoMaxSixteenG") return 11;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "fPort") return 2;
            if (name == "flPort") return 3;
            if (name == "ePort") return 4;
            if (name == "bPort") return 5;
            if (name == "fxPort") return 6;
            if (name == "sdPort") return 7;
            if (name == "tlPort") return 8;
            if (name == "nPort") return 9;
            if (name == "nlPort") return 10;
            if (name == "nxPort") return 11;
            if (name == "tePort") return 12;
            if (name == "fvPort") return 13;
            if (name == "portOperDown") return 14;
            if (name == "stPort") return 15;
            if (name == "mgmtPort") return 16;
            if (name == "ipsPort") return 17;
            if (name == "evPort") return 18;
            if (name == "npPort") return 19;
            if (name == "tfPort") return 20;
            if (name == "tnpPort") return 21;
            return -1;
        }
};


}
}

#endif /* _CISCO_ST_TC_ */

