#ifndef _CISCO_IOS_XR_CONTROLLER_ODU_DATATYPES_
#define _CISCO_IOS_XR_CONTROLLER_ODU_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_odu_datatypes {

class OtnFlexMapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gfp_f_fixed;
        static const ydk::Enum::YLeaf gfp_resizable;
        static const ydk::Enum::YLeaf cbr;

        static int get_enum_value(const std::string & name) {
            if (name == "gfp-f-fixed") return 1;
            if (name == "gfp-resizable") return 2;
            if (name == "cbr") return 3;
            return -1;
        }
};

class OtnChildFlexControllerName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf odu_flex;

        static int get_enum_value(const std::string & name) {
            if (name == "odu-flex") return 22;
            return -1;
        }
};

class OtnTermination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ether;

        static int get_enum_value(const std::string & name) {
            if (name == "ether") return 1;
            return -1;
        }
};

class OtnMapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gfp_f;
        static const ydk::Enum::YLeaf bmp;
        static const ydk::Enum::YLeaf gmp;
        static const ydk::Enum::YLeaf gfp_f_ext;

        static int get_enum_value(const std::string & name) {
            if (name == "gfp-f") return 1;
            if (name == "bmp") return 3;
            if (name == "gmp") return 4;
            if (name == "gfp-f-ext") return 6;
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

class Otntcmca : public ydk::Enum
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

class OtnSendTtiTypeSapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

        static int get_enum_value(const std::string & name) {
            if (name == "send-tti-sapi-ascii/sapi-ascii") return 14;
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

class OtnChildControllerName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf odu1;
        static const ydk::Enum::YLeaf odu2;
        static const ydk::Enum::YLeaf odu3;
        static const ydk::Enum::YLeaf odu0;
        static const ydk::Enum::YLeaf odu2e;
        static const ydk::Enum::YLeaf odu1e;
        static const ydk::Enum::YLeaf odu2f;
        static const ydk::Enum::YLeaf odu3e1;
        static const ydk::Enum::YLeaf odu3e2;

        static int get_enum_value(const std::string & name) {
            if (name == "odu1") return 1;
            if (name == "odu2") return 2;
            if (name == "odu3") return 3;
            if (name == "odu0") return 10;
            if (name == "odu2e") return 11;
            if (name == "odu1e") return 23;
            if (name == "odu2f") return 25;
            if (name == "odu3e1") return 26;
            if (name == "odu3e2") return 27;
            return -1;
        }
};

class Pattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pattern_none;
        static const ydk::Enum::YLeaf pattern_pn31;
        static const ydk::Enum::YLeaf pattern_pn23;
        static const ydk::Enum::YLeaf pattern_pn11;
        static const ydk::Enum::YLeaf pattern_inverted_pn31;
        static const ydk::Enum::YLeaf pattern_inverted_pn11;

        static int get_enum_value(const std::string & name) {
            if (name == "pattern-none") return 0;
            if (name == "pattern-pn31") return 1;
            if (name == "pattern-pn23") return 2;
            if (name == "pattern-pn11") return 4;
            if (name == "pattern-inverted-pn31") return 8;
            if (name == "pattern-inverted-pn11") return 16;
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

class OtnExpTtiTypeSapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

        static int get_enum_value(const std::string & name) {
            if (name == "exp-tti-sapi-ascii/sapi-ascii") return 15;
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

class OtntcmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf nim;
        static const ydk::Enum::YLeaf operational;

        static int get_enum_value(const std::string & name) {
            if (name == "transparent") return 0;
            if (name == "nim") return 1;
            if (name == "operational") return 2;
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

class OduTimeSlotGranularity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1__DOT__25g;
        static const ydk::Enum::YLeaf Y_2__DOT__5g;

        static int get_enum_value(const std::string & name) {
            if (name == "1.25g") return 0;
            if (name == "2.5g") return 1;
            return -1;
        }
};

class Otnpmtimca : public ydk::Enum
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

class OduDelay : public ydk::Enum
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

class Mode : public ydk::Enum
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


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_ODU_DATATYPES_ */

