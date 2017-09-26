
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ST_TC.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ST_TC {

const Enum::YLeaf FcPortModuleTypes::unknown {1, "unknown"};
const Enum::YLeaf FcPortModuleTypes::other {2, "other"};
const Enum::YLeaf FcPortModuleTypes::gbic {3, "gbic"};
const Enum::YLeaf FcPortModuleTypes::embedded {4, "embedded"};
const Enum::YLeaf FcPortModuleTypes::glm {5, "glm"};
const Enum::YLeaf FcPortModuleTypes::gbicWithSerialID {6, "gbicWithSerialID"};
const Enum::YLeaf FcPortModuleTypes::gbicWithoutSerialID {7, "gbicWithoutSerialID"};
const Enum::YLeaf FcPortModuleTypes::sfpWithSerialID {8, "sfpWithSerialID"};
const Enum::YLeaf FcPortModuleTypes::sfpWithoutSerialID {9, "sfpWithoutSerialID"};
const Enum::YLeaf FcPortModuleTypes::xfp {10, "xfp"};
const Enum::YLeaf FcPortModuleTypes::x2Short {11, "x2Short"};
const Enum::YLeaf FcPortModuleTypes::x2Medium {12, "x2Medium"};
const Enum::YLeaf FcPortModuleTypes::x2Tall {13, "x2Tall"};
const Enum::YLeaf FcPortModuleTypes::xpakShort {14, "xpakShort"};
const Enum::YLeaf FcPortModuleTypes::xpakMedium {15, "xpakMedium"};
const Enum::YLeaf FcPortModuleTypes::xpakTall {16, "xpakTall"};
const Enum::YLeaf FcPortModuleTypes::xenpak {17, "xenpak"};
const Enum::YLeaf FcPortModuleTypes::sfpDwdm {18, "sfpDwdm"};
const Enum::YLeaf FcPortModuleTypes::qsfp {19, "qsfp"};
const Enum::YLeaf FcPortModuleTypes::x2Dwdm {20, "x2Dwdm"};

const Enum::YLeaf FcAddressType::wwn {1, "wwn"};
const Enum::YLeaf FcAddressType::fcid {2, "fcid"};

const Enum::YLeaf InterfaceOperMode::auto_ {1, "auto"};
const Enum::YLeaf InterfaceOperMode::fPort {2, "fPort"};
const Enum::YLeaf InterfaceOperMode::flPort {3, "flPort"};
const Enum::YLeaf InterfaceOperMode::ePort {4, "ePort"};
const Enum::YLeaf InterfaceOperMode::bPort {5, "bPort"};
const Enum::YLeaf InterfaceOperMode::fxPort {6, "fxPort"};
const Enum::YLeaf InterfaceOperMode::sdPort {7, "sdPort"};
const Enum::YLeaf InterfaceOperMode::tlPort {8, "tlPort"};
const Enum::YLeaf InterfaceOperMode::nPort {9, "nPort"};
const Enum::YLeaf InterfaceOperMode::nlPort {10, "nlPort"};
const Enum::YLeaf InterfaceOperMode::nxPort {11, "nxPort"};
const Enum::YLeaf InterfaceOperMode::tePort {12, "tePort"};
const Enum::YLeaf InterfaceOperMode::fvPort {13, "fvPort"};
const Enum::YLeaf InterfaceOperMode::portOperDown {14, "portOperDown"};
const Enum::YLeaf InterfaceOperMode::stPort {15, "stPort"};
const Enum::YLeaf InterfaceOperMode::mgmtPort {16, "mgmtPort"};
const Enum::YLeaf InterfaceOperMode::ipsPort {17, "ipsPort"};
const Enum::YLeaf InterfaceOperMode::evPort {18, "evPort"};
const Enum::YLeaf InterfaceOperMode::npPort {19, "npPort"};
const Enum::YLeaf InterfaceOperMode::tfPort {20, "tfPort"};
const Enum::YLeaf InterfaceOperMode::tnpPort {21, "tnpPort"};

const Enum::YLeaf FcIfSfpDiagLevelType::unknown {1, "unknown"};
const Enum::YLeaf FcIfSfpDiagLevelType::normal {2, "normal"};
const Enum::YLeaf FcIfSfpDiagLevelType::lowWarning {3, "lowWarning"};
const Enum::YLeaf FcIfSfpDiagLevelType::lowAlarm {4, "lowAlarm"};
const Enum::YLeaf FcIfSfpDiagLevelType::highWarning {5, "highWarning"};
const Enum::YLeaf FcIfSfpDiagLevelType::highAlarm {6, "highAlarm"};

const Enum::YLeaf FcIfSpeed::auto_ {1, "auto"};
const Enum::YLeaf FcIfSpeed::oneG {2, "oneG"};
const Enum::YLeaf FcIfSpeed::twoG {3, "twoG"};
const Enum::YLeaf FcIfSpeed::fourG {4, "fourG"};
const Enum::YLeaf FcIfSpeed::autoMaxTwoG {5, "autoMaxTwoG"};
const Enum::YLeaf FcIfSpeed::eightG {6, "eightG"};
const Enum::YLeaf FcIfSpeed::autoMaxFourG {7, "autoMaxFourG"};
const Enum::YLeaf FcIfSpeed::tenG {8, "tenG"};
const Enum::YLeaf FcIfSpeed::autoMaxEightG {9, "autoMaxEightG"};
const Enum::YLeaf FcIfSpeed::sixteenG {10, "sixteenG"};
const Enum::YLeaf FcIfSpeed::autoMaxSixteenG {11, "autoMaxSixteenG"};

const Enum::YLeaf FcPortTxTypes::unknown {1, "unknown"};
const Enum::YLeaf FcPortTxTypes::longWaveLaser {2, "longWaveLaser"};
const Enum::YLeaf FcPortTxTypes::shortWaveLaser {3, "shortWaveLaser"};
const Enum::YLeaf FcPortTxTypes::longWaveLaserCostReduced {4, "longWaveLaserCostReduced"};
const Enum::YLeaf FcPortTxTypes::electrical {5, "electrical"};
const Enum::YLeaf FcPortTxTypes::tenGigBaseSr {6, "tenGigBaseSr"};
const Enum::YLeaf FcPortTxTypes::tenGigBaseLr {7, "tenGigBaseLr"};
const Enum::YLeaf FcPortTxTypes::tenGigBaseEr {8, "tenGigBaseEr"};
const Enum::YLeaf FcPortTxTypes::tenGigBaseLx4 {9, "tenGigBaseLx4"};
const Enum::YLeaf FcPortTxTypes::tenGigBaseSw {10, "tenGigBaseSw"};
const Enum::YLeaf FcPortTxTypes::tenGigBaseLw {11, "tenGigBaseLw"};
const Enum::YLeaf FcPortTxTypes::tenGigBaseEw {12, "tenGigBaseEw"};

const Enum::YLeaf FcPortTypes::auto_ {1, "auto"};
const Enum::YLeaf FcPortTypes::fPort {2, "fPort"};
const Enum::YLeaf FcPortTypes::flPort {3, "flPort"};
const Enum::YLeaf FcPortTypes::ePort {4, "ePort"};
const Enum::YLeaf FcPortTypes::bPort {5, "bPort"};
const Enum::YLeaf FcPortTypes::fxPort {6, "fxPort"};
const Enum::YLeaf FcPortTypes::sdPort {7, "sdPort"};
const Enum::YLeaf FcPortTypes::tlPort {8, "tlPort"};
const Enum::YLeaf FcPortTypes::nPort {9, "nPort"};
const Enum::YLeaf FcPortTypes::nlPort {10, "nlPort"};
const Enum::YLeaf FcPortTypes::nxPort {11, "nxPort"};
const Enum::YLeaf FcPortTypes::tePort {12, "tePort"};
const Enum::YLeaf FcPortTypes::fvPort {13, "fvPort"};
const Enum::YLeaf FcPortTypes::portOperDown {14, "portOperDown"};
const Enum::YLeaf FcPortTypes::stPort {15, "stPort"};
const Enum::YLeaf FcPortTypes::npPort {16, "npPort"};
const Enum::YLeaf FcPortTypes::tfPort {17, "tfPort"};
const Enum::YLeaf FcPortTypes::tnpPort {18, "tnpPort"};

const Enum::YLeaf FcIfServiceStateType::inService {1, "inService"};
const Enum::YLeaf FcIfServiceStateType::outOfService {2, "outOfService"};


}
}

