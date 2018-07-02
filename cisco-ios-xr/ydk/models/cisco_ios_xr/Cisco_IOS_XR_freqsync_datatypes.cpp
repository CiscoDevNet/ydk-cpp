
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_freqsync_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_datatypes {

const Enum::YLeaf FsyncQlOption::option_1 {1, "option-1"};
const Enum::YLeaf FsyncQlOption::option_2__COMMA___generation_1 {2, "option-2,-generation-1"};
const Enum::YLeaf FsyncQlOption::option_2__COMMA___generation_2 {3, "option-2,-generation-2"};

const Enum::YLeaf FsyncQlValue::dnu {1, "dnu"};
const Enum::YLeaf FsyncQlValue::o1_prc {10, "o1-prc"};
const Enum::YLeaf FsyncQlValue::o1_ssu_a {11, "o1-ssu-a"};
const Enum::YLeaf FsyncQlValue::o1_ssu_b {12, "o1-ssu-b"};
const Enum::YLeaf FsyncQlValue::o1_sec {13, "o1-sec"};
const Enum::YLeaf FsyncQlValue::o2_g1_prs {20, "o2-g1-prs"};
const Enum::YLeaf FsyncQlValue::o2_g1_stu {21, "o2-g1-stu"};
const Enum::YLeaf FsyncQlValue::o2_g1_st2 {22, "o2-g1-st2"};
const Enum::YLeaf FsyncQlValue::o2_g1_st3 {23, "o2-g1-st3"};
const Enum::YLeaf FsyncQlValue::o2_g1_smc {24, "o2-g1-smc"};
const Enum::YLeaf FsyncQlValue::o2_g1_st4 {25, "o2-g1-st4"};
const Enum::YLeaf FsyncQlValue::o2_g2_prs {30, "o2-g2-prs"};
const Enum::YLeaf FsyncQlValue::o2_g2_stu {31, "o2-g2-stu"};
const Enum::YLeaf FsyncQlValue::o2_g2_st2 {32, "o2-g2-st2"};
const Enum::YLeaf FsyncQlValue::o2_g2_st3 {33, "o2-g2-st3"};
const Enum::YLeaf FsyncQlValue::o2_g2_tnc {34, "o2-g2-tnc"};
const Enum::YLeaf FsyncQlValue::o2_g2_st3e {35, "o2-g2-st3e"};
const Enum::YLeaf FsyncQlValue::o2_g2_smc {36, "o2-g2-smc"};
const Enum::YLeaf FsyncQlValue::o2_g2_st4 {37, "o2-g2-st4"};

const Enum::YLeaf FsyncClock::sync {3, "sync"};
const Enum::YLeaf FsyncClock::internal {4, "internal"};
const Enum::YLeaf FsyncClock::gnss {8, "gnss"};

const Enum::YLeaf GnssConstellation::auto_ {0, "auto"};
const Enum::YLeaf GnssConstellation::gps {1, "gps"};
const Enum::YLeaf GnssConstellation::galileo {2, "galileo"};
const Enum::YLeaf GnssConstellation::bei_dou {3, "bei-dou"};
const Enum::YLeaf GnssConstellation::qzss {4, "qzss"};

const Enum::YLeaf Gnss1ppsPolarity::positive {0, "positive"};
const Enum::YLeaf Gnss1ppsPolarity::negative {1, "negative"};


}
}

