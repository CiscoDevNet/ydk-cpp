
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ST_TC.hpp"

namespace ydk {
namespace CISCO_ST_TC {

const Enum::YLeaf FcaddresstypeEnum::wwn {1, "wwn"};
const Enum::YLeaf FcaddresstypeEnum::fcid {2, "fcid"};

const Enum::YLeaf FcifservicestatetypeEnum::inService {1, "inService"};
const Enum::YLeaf FcifservicestatetypeEnum::outOfService {2, "outOfService"};

const Enum::YLeaf FcifsfpdiagleveltypeEnum::unknown {1, "unknown"};
const Enum::YLeaf FcifsfpdiagleveltypeEnum::normal {2, "normal"};
const Enum::YLeaf FcifsfpdiagleveltypeEnum::lowWarning {3, "lowWarning"};
const Enum::YLeaf FcifsfpdiagleveltypeEnum::lowAlarm {4, "lowAlarm"};
const Enum::YLeaf FcifsfpdiagleveltypeEnum::highWarning {5, "highWarning"};
const Enum::YLeaf FcifsfpdiagleveltypeEnum::highAlarm {6, "highAlarm"};

const Enum::YLeaf FcportmoduletypesEnum::unknown {1, "unknown"};
const Enum::YLeaf FcportmoduletypesEnum::other {2, "other"};
const Enum::YLeaf FcportmoduletypesEnum::gbic {3, "gbic"};
const Enum::YLeaf FcportmoduletypesEnum::embedded {4, "embedded"};
const Enum::YLeaf FcportmoduletypesEnum::glm {5, "glm"};
const Enum::YLeaf FcportmoduletypesEnum::gbicWithSerialID {6, "gbicWithSerialID"};
const Enum::YLeaf FcportmoduletypesEnum::gbicWithoutSerialID {7, "gbicWithoutSerialID"};
const Enum::YLeaf FcportmoduletypesEnum::sfpWithSerialID {8, "sfpWithSerialID"};
const Enum::YLeaf FcportmoduletypesEnum::sfpWithoutSerialID {9, "sfpWithoutSerialID"};
const Enum::YLeaf FcportmoduletypesEnum::xfp {10, "xfp"};
const Enum::YLeaf FcportmoduletypesEnum::x2Short {11, "x2Short"};
const Enum::YLeaf FcportmoduletypesEnum::x2Medium {12, "x2Medium"};
const Enum::YLeaf FcportmoduletypesEnum::x2Tall {13, "x2Tall"};
const Enum::YLeaf FcportmoduletypesEnum::xpakShort {14, "xpakShort"};
const Enum::YLeaf FcportmoduletypesEnum::xpakMedium {15, "xpakMedium"};
const Enum::YLeaf FcportmoduletypesEnum::xpakTall {16, "xpakTall"};
const Enum::YLeaf FcportmoduletypesEnum::xenpak {17, "xenpak"};
const Enum::YLeaf FcportmoduletypesEnum::sfpDwdm {18, "sfpDwdm"};
const Enum::YLeaf FcportmoduletypesEnum::qsfp {19, "qsfp"};
const Enum::YLeaf FcportmoduletypesEnum::x2Dwdm {20, "x2Dwdm"};

const Enum::YLeaf FcporttypesEnum::auto_ {1, "auto"};
const Enum::YLeaf FcporttypesEnum::fPort {2, "fPort"};
const Enum::YLeaf FcporttypesEnum::flPort {3, "flPort"};
const Enum::YLeaf FcporttypesEnum::ePort {4, "ePort"};
const Enum::YLeaf FcporttypesEnum::bPort {5, "bPort"};
const Enum::YLeaf FcporttypesEnum::fxPort {6, "fxPort"};
const Enum::YLeaf FcporttypesEnum::sdPort {7, "sdPort"};
const Enum::YLeaf FcporttypesEnum::tlPort {8, "tlPort"};
const Enum::YLeaf FcporttypesEnum::nPort {9, "nPort"};
const Enum::YLeaf FcporttypesEnum::nlPort {10, "nlPort"};
const Enum::YLeaf FcporttypesEnum::nxPort {11, "nxPort"};
const Enum::YLeaf FcporttypesEnum::tePort {12, "tePort"};
const Enum::YLeaf FcporttypesEnum::fvPort {13, "fvPort"};
const Enum::YLeaf FcporttypesEnum::portOperDown {14, "portOperDown"};
const Enum::YLeaf FcporttypesEnum::stPort {15, "stPort"};
const Enum::YLeaf FcporttypesEnum::npPort {16, "npPort"};
const Enum::YLeaf FcporttypesEnum::tfPort {17, "tfPort"};
const Enum::YLeaf FcporttypesEnum::tnpPort {18, "tnpPort"};

const Enum::YLeaf FcporttxtypesEnum::unknown {1, "unknown"};
const Enum::YLeaf FcporttxtypesEnum::longWaveLaser {2, "longWaveLaser"};
const Enum::YLeaf FcporttxtypesEnum::shortWaveLaser {3, "shortWaveLaser"};
const Enum::YLeaf FcporttxtypesEnum::longWaveLaserCostReduced {4, "longWaveLaserCostReduced"};
const Enum::YLeaf FcporttxtypesEnum::electrical {5, "electrical"};
const Enum::YLeaf FcporttxtypesEnum::tenGigBaseSr {6, "tenGigBaseSr"};
const Enum::YLeaf FcporttxtypesEnum::tenGigBaseLr {7, "tenGigBaseLr"};
const Enum::YLeaf FcporttxtypesEnum::tenGigBaseEr {8, "tenGigBaseEr"};
const Enum::YLeaf FcporttxtypesEnum::tenGigBaseLx4 {9, "tenGigBaseLx4"};
const Enum::YLeaf FcporttxtypesEnum::tenGigBaseSw {10, "tenGigBaseSw"};
const Enum::YLeaf FcporttxtypesEnum::tenGigBaseLw {11, "tenGigBaseLw"};
const Enum::YLeaf FcporttxtypesEnum::tenGigBaseEw {12, "tenGigBaseEw"};

const Enum::YLeaf FcifspeedEnum::auto_ {1, "auto"};
const Enum::YLeaf FcifspeedEnum::oneG {2, "oneG"};
const Enum::YLeaf FcifspeedEnum::twoG {3, "twoG"};
const Enum::YLeaf FcifspeedEnum::fourG {4, "fourG"};
const Enum::YLeaf FcifspeedEnum::autoMaxTwoG {5, "autoMaxTwoG"};
const Enum::YLeaf FcifspeedEnum::eightG {6, "eightG"};
const Enum::YLeaf FcifspeedEnum::autoMaxFourG {7, "autoMaxFourG"};
const Enum::YLeaf FcifspeedEnum::tenG {8, "tenG"};
const Enum::YLeaf FcifspeedEnum::autoMaxEightG {9, "autoMaxEightG"};
const Enum::YLeaf FcifspeedEnum::sixteenG {10, "sixteenG"};
const Enum::YLeaf FcifspeedEnum::autoMaxSixteenG {11, "autoMaxSixteenG"};

const Enum::YLeaf InterfaceopermodeEnum::auto_ {1, "auto"};
const Enum::YLeaf InterfaceopermodeEnum::fPort {2, "fPort"};
const Enum::YLeaf InterfaceopermodeEnum::flPort {3, "flPort"};
const Enum::YLeaf InterfaceopermodeEnum::ePort {4, "ePort"};
const Enum::YLeaf InterfaceopermodeEnum::bPort {5, "bPort"};
const Enum::YLeaf InterfaceopermodeEnum::fxPort {6, "fxPort"};
const Enum::YLeaf InterfaceopermodeEnum::sdPort {7, "sdPort"};
const Enum::YLeaf InterfaceopermodeEnum::tlPort {8, "tlPort"};
const Enum::YLeaf InterfaceopermodeEnum::nPort {9, "nPort"};
const Enum::YLeaf InterfaceopermodeEnum::nlPort {10, "nlPort"};
const Enum::YLeaf InterfaceopermodeEnum::nxPort {11, "nxPort"};
const Enum::YLeaf InterfaceopermodeEnum::tePort {12, "tePort"};
const Enum::YLeaf InterfaceopermodeEnum::fvPort {13, "fvPort"};
const Enum::YLeaf InterfaceopermodeEnum::portOperDown {14, "portOperDown"};
const Enum::YLeaf InterfaceopermodeEnum::stPort {15, "stPort"};
const Enum::YLeaf InterfaceopermodeEnum::mgmtPort {16, "mgmtPort"};
const Enum::YLeaf InterfaceopermodeEnum::ipsPort {17, "ipsPort"};
const Enum::YLeaf InterfaceopermodeEnum::evPort {18, "evPort"};
const Enum::YLeaf InterfaceopermodeEnum::npPort {19, "npPort"};
const Enum::YLeaf InterfaceopermodeEnum::tfPort {20, "tfPort"};
const Enum::YLeaf InterfaceopermodeEnum::tnpPort {21, "tnpPort"};


}
}

