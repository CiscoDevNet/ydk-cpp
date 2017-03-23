
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_link_oam_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_link_oam_cfg {

const Enum::YLeaf EtherLinkOamEventActionEnumEnum::disable {1, "disable"};
const Enum::YLeaf EtherLinkOamEventActionEnumEnum::error_disable {2, "error-disable"};
const Enum::YLeaf EtherLinkOamEventActionEnumEnum::log {3, "log"};

const Enum::YLeaf EtherLinkOamEventActionPrimEnumEnum::disable {1, "disable"};
const Enum::YLeaf EtherLinkOamEventActionPrimEnumEnum::log {3, "log"};

const Enum::YLeaf EtherLinkOamRequireModeEnumEnum::passive {0, "passive"};
const Enum::YLeaf EtherLinkOamRequireModeEnumEnum::active {1, "active"};
const Enum::YLeaf EtherLinkOamRequireModeEnumEnum::dont_care {2, "dont-care"};

const Enum::YLeaf EtherLinkOamWindowUnitsSymbolsEnumEnum::milliseconds {1, "milliseconds"};
const Enum::YLeaf EtherLinkOamWindowUnitsSymbolsEnumEnum::symbols {2, "symbols"};

const Enum::YLeaf EtherLinkOamThresholdUnitsFramesEnumEnum::frames {3, "frames"};
const Enum::YLeaf EtherLinkOamThresholdUnitsFramesEnumEnum::ppm {4, "ppm"};

const Enum::YLeaf EtherLinkOamThresholdUnitsSymbolsEnumEnum::symbols {2, "symbols"};
const Enum::YLeaf EtherLinkOamThresholdUnitsSymbolsEnumEnum::ppm {4, "ppm"};

const Enum::YLeaf EtherLinkOamHelloIntervalEnumEnum::Y_1s {0, "1s"};
const Enum::YLeaf EtherLinkOamHelloIntervalEnumEnum::Y_100ms {1, "100ms"};

const Enum::YLeaf EtherLinkOamModeEnumEnum::passive {0, "passive"};
const Enum::YLeaf EtherLinkOamModeEnumEnum::active {1, "active"};

const Enum::YLeaf EtherLinkOamEventActionEnumEfdEnum::disable {1, "disable"};
const Enum::YLeaf EtherLinkOamEventActionEnumEfdEnum::error_disable {2, "error-disable"};
const Enum::YLeaf EtherLinkOamEventActionEnumEfdEnum::log {3, "log"};
const Enum::YLeaf EtherLinkOamEventActionEnumEfdEnum::efd {4, "efd"};

const Enum::YLeaf EtherLinkOamWindowUnitsFramesEnumEnum::milliseconds {1, "milliseconds"};
const Enum::YLeaf EtherLinkOamWindowUnitsFramesEnumEnum::frames {3, "frames"};

const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnumEnum::none {0, "none"};
const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnumEnum::thousand {1, "thousand"};
const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnumEnum::million {2, "million"};
const Enum::YLeaf EtherLinkOamThresholdWindowMultiplierEnumEnum::billion {3, "billion"};


}
}

