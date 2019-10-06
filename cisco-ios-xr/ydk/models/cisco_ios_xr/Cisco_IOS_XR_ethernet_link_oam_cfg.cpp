
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_link_oam_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_link_oam_cfg {

const Enum::YLeaf EtherLinkOamEventActionEnum::disable {1, "disable"};
const Enum::YLeaf EtherLinkOamEventActionEnum::error_disable {2, "error-disable"};
const Enum::YLeaf EtherLinkOamEventActionEnum::log {3, "log"};

const Enum::YLeaf EtherLinkOamEventActionPrimEnum::disable {1, "disable"};
const Enum::YLeaf EtherLinkOamEventActionPrimEnum::log {3, "log"};

const Enum::YLeaf EtherLinkOamRequireModeEnum::passive {0, "passive"};
const Enum::YLeaf EtherLinkOamRequireModeEnum::active {1, "active"};
const Enum::YLeaf EtherLinkOamRequireModeEnum::dont_care {2, "dont-care"};

const Enum::YLeaf EtherLinkOamWindowUnitsSymbolsEnum::milliseconds {1, "milliseconds"};
const Enum::YLeaf EtherLinkOamWindowUnitsSymbolsEnum::symbols {2, "symbols"};

const Enum::YLeaf EtherLinkOamThresholdUnitsFramesEnum::frames {3, "frames"};
const Enum::YLeaf EtherLinkOamThresholdUnitsFramesEnum::ppm {4, "ppm"};

const Enum::YLeaf EtherLinkOamThresholdUnitsSymbolsEnum::symbols {2, "symbols"};
const Enum::YLeaf EtherLinkOamThresholdUnitsSymbolsEnum::ppm {4, "ppm"};

const Enum::YLeaf EtherLinkOamHelloIntervalEnum::Y_1s {0, "1s"};
const Enum::YLeaf EtherLinkOamHelloIntervalEnum::Y_100ms {1, "100ms"};

const Enum::YLeaf EtherLinkOamModeEnum::passive {0, "passive"};
const Enum::YLeaf EtherLinkOamModeEnum::active {1, "active"};

const Enum::YLeaf EtherLinkOamEventActionEnumEfd::disable {1, "disable"};
const Enum::YLeaf EtherLinkOamEventActionEnumEfd::error_disable {2, "error-disable"};
const Enum::YLeaf EtherLinkOamEventActionEnumEfd::log {3, "log"};
const Enum::YLeaf EtherLinkOamEventActionEnumEfd::efd {4, "efd"};

const Enum::YLeaf EtherLinkOamWindowUnitsFramesEnum::milliseconds {1, "milliseconds"};
const Enum::YLeaf EtherLinkOamWindowUnitsFramesEnum::frames {3, "frames"};

const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnum::none {0, "none"};
const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnum::thousand {1, "thousand"};
const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnum::million {2, "million"};
const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnum::billion {3, "billion"};


}
}

