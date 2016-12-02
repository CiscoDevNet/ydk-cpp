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
        static const Enum::Value low;
        static const Enum::Value high;

};

class OpticsFecEnum : public Enum
{
    public:
        static const Enum::Value fec_none;
        static const Enum::Value fec_h15;
        static const Enum::Value fec_h25;
        static const Enum::Value fec_h15_de;
        static const Enum::Value fec_h25_de;

};

class OpticsLoopbackEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value internal;
        static const Enum::Value line;

};

class OpticsDwdmCarrierGridEnum : public Enum
{
    public:
        static const Enum::Value Y_50g_hz_grid;
        static const Enum::Value Y_100mhz_grid;

};

class OpticsDwdmCarrierParamEnum : public Enum
{
    public:
        static const Enum::Value itu_ch;
        static const Enum::Value wavelength;
        static const Enum::Value frequency;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_ */

