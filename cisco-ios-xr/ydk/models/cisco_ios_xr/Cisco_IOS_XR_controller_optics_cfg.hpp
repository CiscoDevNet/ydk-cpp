#ifndef _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_
#define _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_optics_cfg {

class OpticsDwdmCarrierGrid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_50g_hz_grid;
        static const ydk::Enum::YLeaf Y_100mhz_grid;

        static int get_enum_value(const std::string & name) {
            if (name == "50g-hz-grid") return 0;
            if (name == "100mhz-grid") return 1;
            return -1;
        }
};

class OpticsOtsAmpliGainRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf extended;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 1;
            if (name == "extended") return 2;
            return -1;
        }
};

class OpticsOtsSafetyControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class OpticsLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "internal") return 1;
            if (name == "line") return 2;
            return -1;
        }
};

class OpticsFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fec_none;
        static const ydk::Enum::YLeaf fec_h15;
        static const ydk::Enum::YLeaf fec_h25;
        static const ydk::Enum::YLeaf fec_h15_de;
        static const ydk::Enum::YLeaf fec_h25_de;

        static int get_enum_value(const std::string & name) {
            if (name == "fec-none") return 0;
            if (name == "fec-h15") return 1;
            if (name == "fec-h25") return 2;
            if (name == "fec-h15-de") return 4;
            if (name == "fec-h25-de") return 8;
            return -1;
        }
};

class Threshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf high;

        static int get_enum_value(const std::string & name) {
            if (name == "low") return 1;
            if (name == "high") return 2;
            return -1;
        }
};

class OpticsOtsAmpliControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf automatic;
        static const ydk::Enum::YLeaf manual;

        static int get_enum_value(const std::string & name) {
            if (name == "automatic") return 1;
            if (name == "manual") return 2;
            return -1;
        }
};

class OpticsDwdmCarrierParam : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf itu_ch;
        static const ydk::Enum::YLeaf wavelength;
        static const ydk::Enum::YLeaf frequency;

        static int get_enum_value(const std::string & name) {
            if (name == "itu-ch") return 0;
            if (name == "wavelength") return 1;
            if (name == "frequency") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OPTICS_CFG_ */

