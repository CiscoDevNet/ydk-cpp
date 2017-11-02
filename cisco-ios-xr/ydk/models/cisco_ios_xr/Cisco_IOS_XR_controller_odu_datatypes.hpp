#ifndef _CISCO_IOS_XR_CONTROLLER_ODU_DATATYPES_
#define _CISCO_IOS_XR_CONTROLLER_ODU_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_odu_datatypes {

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

};

class OtnChildFlexControllerName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf odu_flex;

};

class OtnFlexMapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gfp_f_fixed;
        static const ydk::Enum::YLeaf gfp_resizable;
        static const ydk::Enum::YLeaf cbr;

};

class OtntcmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf nim;
        static const ydk::Enum::YLeaf operational;

};

class OtnPerMon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class OduTimeSlotGranularity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1__DOT__25g;
        static const ydk::Enum::YLeaf Y_2__DOT__5g;

};

class Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mode_invalid;
        static const ydk::Enum::YLeaf mode_source;
        static const ydk::Enum::YLeaf mode_sink;
        static const ydk::Enum::YLeaf mode_source_sink;

};

class OtnSendTtiTypeOs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_os_ascii__FWD_SLASH__os_ascii;
        static const ydk::Enum::YLeaf send_tti_os_hex__FWD_SLASH__os_hex;

};

class OtnExpTtiTypeSapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

};

class OtnTermination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ether;

};

class OtnSendTtiTypeSapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

};

class OtnSecAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;

};

class OtnMapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gfp_f;
        static const ydk::Enum::YLeaf bmp;
        static const ydk::Enum::YLeaf gmp;
        static const ydk::Enum::YLeaf gfp_f_ext;

};

class OtnExpTtiTypeOs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_os_ascii__FWD_SLASH__os_ascii;
        static const ydk::Enum::YLeaf exp_tti_os_hex__FWD_SLASH__os_hex;

};

class OduDelay : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class OtnLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf internal;

};

class OtnExpTtiTypeFull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_full_ascii__FWD_SLASH__full_ascii;
        static const ydk::Enum::YLeaf exp_tti_hex__FWD_SLASH__hex;

};

class OtnSendTtiTypeFull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_full_ascii__FWD_SLASH__full_ascii;
        static const ydk::Enum::YLeaf send_tti_hex__FWD_SLASH__hex;

};

class OtnExpTtiTypeDapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_dapi_ascii__FWD_SLASH__dapi_ascii;

};

class OtnSendTtiTypeDapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_dapi_ascii__FWD_SLASH__dapi_ascii;

};

class Otntcmca : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

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

};

class Otnpmtimca : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_ODU_DATATYPES_ */

