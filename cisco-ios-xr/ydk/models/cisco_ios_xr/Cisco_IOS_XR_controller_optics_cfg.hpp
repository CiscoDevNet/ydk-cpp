#ifndef _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_
#define _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_optics_cfg {

class OpticsFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fec_none;
        static const ydk::Enum::YLeaf fec_h15;
        static const ydk::Enum::YLeaf fec_h25;
        static const ydk::Enum::YLeaf fec_h15_de;
        static const ydk::Enum::YLeaf fec_h25_de;

};

class OpticsOtsAmpliControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf automatic;
        static const ydk::Enum::YLeaf manual;

};

class Threshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf high;

};

class OpticsDwdmCarrierParam : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf itu_ch;
        static const ydk::Enum::YLeaf wavelength;
        static const ydk::Enum::YLeaf frequency;

};

class OpticsOtsSafetyControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf disabled;

};

class OpticsOtsAmpliGainRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf extended;

};

class OpticsDwdmCarrierGrid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_50g_hz_grid;
        static const ydk::Enum::YLeaf Y_100mhz_grid;

};

class OpticsLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_ */

