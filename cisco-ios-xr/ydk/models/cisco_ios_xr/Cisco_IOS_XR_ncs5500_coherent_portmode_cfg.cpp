
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5500_coherent_portmode_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_coherent_portmode_cfg {

const Enum::YLeaf DiffSel::disable {0, "disable"};
const Enum::YLeaf DiffSel::enable {1, "enable"};

const Enum::YLeaf ModSel::qpsk {1, "qpsk"};
const Enum::YLeaf ModSel::Y_8qam {2, "8qam"};
const Enum::YLeaf ModSel::Y_16qam {3, "16qam"};

const Enum::YLeaf FecSel::Y_15sdfec {0, "15sdfec"};
const Enum::YLeaf FecSel::Y_25sdfec {1, "25sdfec"};
const Enum::YLeaf FecSel::Y_15sdfecde {2, "15sdfecde"};
const Enum::YLeaf FecSel::otu7staircase {3, "otu7staircase"};

const Enum::YLeaf SpeedSel::Y_100g {100000000, "100g"};
const Enum::YLeaf SpeedSel::Y_150g {150000000, "150g"};
const Enum::YLeaf SpeedSel::Y_200g {200000000, "200g"};


}
}

