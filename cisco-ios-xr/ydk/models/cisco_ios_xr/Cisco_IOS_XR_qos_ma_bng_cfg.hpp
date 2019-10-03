#ifndef _CISCO_IOS_XR_QOS_MA_BNG_CFG_
#define _CISCO_IOS_XR_QOS_MA_BNG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_qos_ma_bng_cfg {

class Qosl2DataLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aal5;

        static int get_enum_value(const std::string & name) {
            if (name == "aal5") return 0;
            return -1;
        }
};

class Qosl2Encap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snap_pppoa;
        static const ydk::Enum::YLeaf mux_pppoa;
        static const ydk::Enum::YLeaf snap1483_routed;
        static const ydk::Enum::YLeaf mux1483_routed;
        static const ydk::Enum::YLeaf snap_rbe;
        static const ydk::Enum::YLeaf snap_dot1qrbe;
        static const ydk::Enum::YLeaf mux_rbe;
        static const ydk::Enum::YLeaf mux_dot1qrbe;

        static int get_enum_value(const std::string & name) {
            if (name == "snap-pppoa") return 1;
            if (name == "mux-pppoa") return 2;
            if (name == "snap1483-routed") return 3;
            if (name == "mux1483-routed") return 4;
            if (name == "snap-rbe") return 5;
            if (name == "snap-dot1qrbe") return 6;
            if (name == "mux-rbe") return 7;
            if (name == "mux-dot1qrbe") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_BNG_CFG_ */

