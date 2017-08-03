
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ST_TC.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ST_TC {

const Enum::YLeaf Fcifservicestatetype::inService {1, "inService"};
const Enum::YLeaf Fcifservicestatetype::outOfService {2, "outOfService"};

const Enum::YLeaf Fcifsfpdiagleveltype::unknown {1, "unknown"};
const Enum::YLeaf Fcifsfpdiagleveltype::normal {2, "normal"};
const Enum::YLeaf Fcifsfpdiagleveltype::lowWarning {3, "lowWarning"};
const Enum::YLeaf Fcifsfpdiagleveltype::lowAlarm {4, "lowAlarm"};
const Enum::YLeaf Fcifsfpdiagleveltype::highWarning {5, "highWarning"};
const Enum::YLeaf Fcifsfpdiagleveltype::highAlarm {6, "highAlarm"};

const Enum::YLeaf Fcportmoduletypes::unknown {1, "unknown"};
const Enum::YLeaf Fcportmoduletypes::other {2, "other"};
const Enum::YLeaf Fcportmoduletypes::gbic {3, "gbic"};
const Enum::YLeaf Fcportmoduletypes::embedded {4, "embedded"};
const Enum::YLeaf Fcportmoduletypes::glm {5, "glm"};
const Enum::YLeaf Fcportmoduletypes::gbicWithSerialID {6, "gbicWithSerialID"};
const Enum::YLeaf Fcportmoduletypes::gbicWithoutSerialID {7, "gbicWithoutSerialID"};
const Enum::YLeaf Fcportmoduletypes::sfpWithSerialID {8, "sfpWithSerialID"};
const Enum::YLeaf Fcportmoduletypes::sfpWithoutSerialID {9, "sfpWithoutSerialID"};
const Enum::YLeaf Fcportmoduletypes::xfp {10, "xfp"};
const Enum::YLeaf Fcportmoduletypes::x2Short {11, "x2Short"};
const Enum::YLeaf Fcportmoduletypes::x2Medium {12, "x2Medium"};
const Enum::YLeaf Fcportmoduletypes::x2Tall {13, "x2Tall"};
const Enum::YLeaf Fcportmoduletypes::xpakShort {14, "xpakShort"};
const Enum::YLeaf Fcportmoduletypes::xpakMedium {15, "xpakMedium"};
const Enum::YLeaf Fcportmoduletypes::xpakTall {16, "xpakTall"};
const Enum::YLeaf Fcportmoduletypes::xenpak {17, "xenpak"};
const Enum::YLeaf Fcportmoduletypes::sfpDwdm {18, "sfpDwdm"};
const Enum::YLeaf Fcportmoduletypes::qsfp {19, "qsfp"};
const Enum::YLeaf Fcportmoduletypes::x2Dwdm {20, "x2Dwdm"};

const Enum::YLeaf Fcporttypes::auto_ {1, "auto"};
const Enum::YLeaf Fcporttypes::fPort {2, "fPort"};
const Enum::YLeaf Fcporttypes::flPort {3, "flPort"};
const Enum::YLeaf Fcporttypes::ePort {4, "ePort"};
const Enum::YLeaf Fcporttypes::bPort {5, "bPort"};
const Enum::YLeaf Fcporttypes::fxPort {6, "fxPort"};
const Enum::YLeaf Fcporttypes::sdPort {7, "sdPort"};
const Enum::YLeaf Fcporttypes::tlPort {8, "tlPort"};
const Enum::YLeaf Fcporttypes::nPort {9, "nPort"};
const Enum::YLeaf Fcporttypes::nlPort {10, "nlPort"};
const Enum::YLeaf Fcporttypes::nxPort {11, "nxPort"};
const Enum::YLeaf Fcporttypes::tePort {12, "tePort"};
const Enum::YLeaf Fcporttypes::fvPort {13, "fvPort"};
const Enum::YLeaf Fcporttypes::portOperDown {14, "portOperDown"};
const Enum::YLeaf Fcporttypes::stPort {15, "stPort"};
const Enum::YLeaf Fcporttypes::npPort {16, "npPort"};
const Enum::YLeaf Fcporttypes::tfPort {17, "tfPort"};
const Enum::YLeaf Fcporttypes::tnpPort {18, "tnpPort"};

const Enum::YLeaf Fcaddresstype::wwn {1, "wwn"};
const Enum::YLeaf Fcaddresstype::fcid {2, "fcid"};

const Enum::YLeaf Fcporttxtypes::unknown {1, "unknown"};
const Enum::YLeaf Fcporttxtypes::longWaveLaser {2, "longWaveLaser"};
const Enum::YLeaf Fcporttxtypes::shortWaveLaser {3, "shortWaveLaser"};
const Enum::YLeaf Fcporttxtypes::longWaveLaserCostReduced {4, "longWaveLaserCostReduced"};
const Enum::YLeaf Fcporttxtypes::electrical {5, "electrical"};
const Enum::YLeaf Fcporttxtypes::tenGigBaseSr {6, "tenGigBaseSr"};
const Enum::YLeaf Fcporttxtypes::tenGigBaseLr {7, "tenGigBaseLr"};
const Enum::YLeaf Fcporttxtypes::tenGigBaseEr {8, "tenGigBaseEr"};
const Enum::YLeaf Fcporttxtypes::tenGigBaseLx4 {9, "tenGigBaseLx4"};
const Enum::YLeaf Fcporttxtypes::tenGigBaseSw {10, "tenGigBaseSw"};
const Enum::YLeaf Fcporttxtypes::tenGigBaseLw {11, "tenGigBaseLw"};
const Enum::YLeaf Fcporttxtypes::tenGigBaseEw {12, "tenGigBaseEw"};

const Enum::YLeaf Fcifspeed::auto_ {1, "auto"};
const Enum::YLeaf Fcifspeed::oneG {2, "oneG"};
const Enum::YLeaf Fcifspeed::twoG {3, "twoG"};
const Enum::YLeaf Fcifspeed::fourG {4, "fourG"};
const Enum::YLeaf Fcifspeed::autoMaxTwoG {5, "autoMaxTwoG"};
const Enum::YLeaf Fcifspeed::eightG {6, "eightG"};
const Enum::YLeaf Fcifspeed::autoMaxFourG {7, "autoMaxFourG"};
const Enum::YLeaf Fcifspeed::tenG {8, "tenG"};
const Enum::YLeaf Fcifspeed::autoMaxEightG {9, "autoMaxEightG"};
const Enum::YLeaf Fcifspeed::sixteenG {10, "sixteenG"};
const Enum::YLeaf Fcifspeed::autoMaxSixteenG {11, "autoMaxSixteenG"};

const Enum::YLeaf Interfaceopermode::auto_ {1, "auto"};
const Enum::YLeaf Interfaceopermode::fPort {2, "fPort"};
const Enum::YLeaf Interfaceopermode::flPort {3, "flPort"};
const Enum::YLeaf Interfaceopermode::ePort {4, "ePort"};
const Enum::YLeaf Interfaceopermode::bPort {5, "bPort"};
const Enum::YLeaf Interfaceopermode::fxPort {6, "fxPort"};
const Enum::YLeaf Interfaceopermode::sdPort {7, "sdPort"};
const Enum::YLeaf Interfaceopermode::tlPort {8, "tlPort"};
const Enum::YLeaf Interfaceopermode::nPort {9, "nPort"};
const Enum::YLeaf Interfaceopermode::nlPort {10, "nlPort"};
const Enum::YLeaf Interfaceopermode::nxPort {11, "nxPort"};
const Enum::YLeaf Interfaceopermode::tePort {12, "tePort"};
const Enum::YLeaf Interfaceopermode::fvPort {13, "fvPort"};
const Enum::YLeaf Interfaceopermode::portOperDown {14, "portOperDown"};
const Enum::YLeaf Interfaceopermode::stPort {15, "stPort"};
const Enum::YLeaf Interfaceopermode::mgmtPort {16, "mgmtPort"};
const Enum::YLeaf Interfaceopermode::ipsPort {17, "ipsPort"};
const Enum::YLeaf Interfaceopermode::evPort {18, "evPort"};
const Enum::YLeaf Interfaceopermode::npPort {19, "npPort"};
const Enum::YLeaf Interfaceopermode::tfPort {20, "tfPort"};
const Enum::YLeaf Interfaceopermode::tnpPort {21, "tnpPort"};


}
}

