#ifndef _CISCO_IOS_XR_CONTROLLER_OTU_CFG_
#define _CISCO_IOS_XR_CONTROLLER_OTU_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_otu_cfg {

class OtnLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf internal;

        static int get_enum_value(const std::string & name) {
            if (name == "line") return 2;
            if (name == "internal") return 4;
            return -1;
        }
};

class OtnExpTtiTypeSapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

        static int get_enum_value(const std::string & name) {
            if (name == "exp-tti-sapi-ascii/sapi-ascii") return 15;
            return -1;
        }
};

class OtnPerMon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class OtnSendTtiTypeOs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_os_ascii__FWD_SLASH__os_ascii;
        static const ydk::Enum::YLeaf send_tti_os_hex__FWD_SLASH__os_hex;

        static int get_enum_value(const std::string & name) {
            if (name == "send-tti-os-ascii/os-ascii") return 10;
            if (name == "send-tti-os-hex/os-hex") return 12;
            return -1;
        }
};

class OtuPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pattern_none;
        static const ydk::Enum::YLeaf pattern_pn31;
        static const ydk::Enum::YLeaf pattern_pn23;
        static const ydk::Enum::YLeaf pattern_pn11;
        static const ydk::Enum::YLeaf pattern_inverted_pn31;
        static const ydk::Enum::YLeaf pattern_inverted_pn11;
        static const ydk::Enum::YLeaf pattern_pn15;

        static int get_enum_value(const std::string & name) {
            if (name == "pattern-none") return 0;
            if (name == "pattern-pn31") return 1;
            if (name == "pattern-pn23") return 2;
            if (name == "pattern-pn11") return 4;
            if (name == "pattern-inverted-pn31") return 8;
            if (name == "pattern-inverted-pn11") return 16;
            if (name == "pattern-pn15") return 32;
            return -1;
        }
};

class OtnSendTtiTypeSapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

        static int get_enum_value(const std::string & name) {
            if (name == "send-tti-sapi-ascii/sapi-ascii") return 14;
            return -1;
        }
};

class OtnSendTtiTypeDapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_dapi_ascii__FWD_SLASH__dapi_ascii;

        static int get_enum_value(const std::string & name) {
            if (name == "send-tti-dapi-ascii/dapi-ascii") return 8;
            return -1;
        }
};

class OtuMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mode_invalid;
        static const ydk::Enum::YLeaf mode_source;
        static const ydk::Enum::YLeaf mode_sink;
        static const ydk::Enum::YLeaf mode_source_sink;

        static int get_enum_value(const std::string & name) {
            if (name == "mode-invalid") return 0;
            if (name == "mode-source") return 1;
            if (name == "mode-sink") return 2;
            if (name == "mode-source-sink") return 3;
            return -1;
        }
};

class OtnExpTtiTypeOs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_os_ascii__FWD_SLASH__os_ascii;
        static const ydk::Enum::YLeaf exp_tti_os_hex__FWD_SLASH__os_hex;

        static int get_enum_value(const std::string & name) {
            if (name == "exp-tti-os-ascii/os-ascii") return 11;
            if (name == "exp-tti-os-hex/os-hex") return 13;
            return -1;
        }
};

class OtnSecAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 0;
            if (name == "maintenance") return 1;
            return -1;
        }
};

class OtnExpTtiTypeFull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_full_ascii__FWD_SLASH__full_ascii;
        static const ydk::Enum::YLeaf exp_tti_hex__FWD_SLASH__hex;

        static int get_enum_value(const std::string & name) {
            if (name == "exp-tti-full-ascii/full-ascii") return 5;
            if (name == "exp-tti-hex/hex") return 7;
            return -1;
        }
};

class OtuForwardErrorCorrection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf enhanced_i7;
        static const ydk::Enum::YLeaf enhanced_i4;
        static const ydk::Enum::YLeaf enhanced_swizzle;
        static const ydk::Enum::YLeaf enhanced_hg20;
        static const ydk::Enum::YLeaf enhanced_hg7;
        static const ydk::Enum::YLeaf enhanced_sd15;
        static const ydk::Enum::YLeaf enhanced_sd27;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "standard") return 2;
            if (name == "enhanced-i7") return 4;
            if (name == "enhanced-i4") return 8;
            if (name == "enhanced-swizzle") return 16;
            if (name == "enhanced-hg20") return 32;
            if (name == "enhanced-hg7") return 64;
            if (name == "enhanced-sd15") return 512;
            if (name == "enhanced-sd27") return 1024;
            return -1;
        }
};

class OtnExpTtiTypeDapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_dapi_ascii__FWD_SLASH__dapi_ascii;

        static int get_enum_value(const std::string & name) {
            if (name == "exp-tti-dapi-ascii/dapi-ascii") return 9;
            return -1;
        }
};

class OtnSendTtiTypeFull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_full_ascii__FWD_SLASH__full_ascii;
        static const ydk::Enum::YLeaf send_tti_hex__FWD_SLASH__hex;

        static int get_enum_value(const std::string & name) {
            if (name == "send-tti-full-ascii/full-ascii") return 4;
            if (name == "send-tti-hex/hex") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OTU_CFG_ */

