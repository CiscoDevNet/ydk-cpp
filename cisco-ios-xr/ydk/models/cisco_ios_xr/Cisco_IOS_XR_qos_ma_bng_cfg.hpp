#ifndef _CISCO_IOS_XR_QOS_MA_BNG_CFG_
#define _CISCO_IOS_XR_QOS_MA_BNG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_bng_cfg {

class Qosl2DataLinkEnum : public Enum
{
    public:
        static const Enum::YLeaf aal5;

};

class Qosl2EncapEnum : public Enum
{
    public:
        static const Enum::YLeaf snap_pppoa;
        static const Enum::YLeaf mux_pppoa;
        static const Enum::YLeaf snap1483_routed;
        static const Enum::YLeaf mux1483_routed;
        static const Enum::YLeaf snap_rbe;
        static const Enum::YLeaf snap_dot1qrbe;
        static const Enum::YLeaf mux_rbe;
        static const Enum::YLeaf mux_dot1qrbe;

};


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_BNG_CFG_ */

