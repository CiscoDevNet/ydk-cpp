#ifndef _CISCO_IOS_XR_QOS_MA_BNG_CFG_
#define _CISCO_IOS_XR_QOS_MA_BNG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_qos_ma_bng_cfg {

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

};

class Qosl2DataLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aal5;

};


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_BNG_CFG_ */

