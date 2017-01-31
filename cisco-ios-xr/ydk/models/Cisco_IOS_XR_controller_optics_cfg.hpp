#ifndef _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_
#define _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_controller_optics_cfg {


class ThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf low;
        static const Enum::YLeaf high;

};

class OpticsFecEnum : public Enum
{
    public:
        static const Enum::YLeaf fec_none;
        static const Enum::YLeaf fec_h15;
        static const Enum::YLeaf fec_h25;
        static const Enum::YLeaf fec_h15_de;
        static const Enum::YLeaf fec_h25_de;

};

class OpticsLoopbackEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf line;

};

class OpticsDwdmCarrierGridEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_50g_hz_grid;
        static const Enum::YLeaf Y_100mhz_grid;

};

class OpticsDwdmCarrierParamEnum : public Enum
{
    public:
        static const Enum::YLeaf itu_ch;
        static const Enum::YLeaf wavelength;
        static const Enum::YLeaf frequency;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_ */

