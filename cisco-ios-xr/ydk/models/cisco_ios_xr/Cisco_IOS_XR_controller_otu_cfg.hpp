#ifndef _CISCO_IOS_XR_CONTROLLER_OTU_CFG_
#define _CISCO_IOS_XR_CONTROLLER_OTU_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_otu_cfg {

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

};

class OtnPerMon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

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

class OtnSendTtiTypeSapi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

};

class OtuMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mode_invalid;
        static const ydk::Enum::YLeaf mode_source;
        static const ydk::Enum::YLeaf mode_sink;
        static const ydk::Enum::YLeaf mode_source_sink;

};

class OtnSecAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;

};

class OtnExpTtiTypeOs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exp_tti_os_ascii__FWD_SLASH__os_ascii;
        static const ydk::Enum::YLeaf exp_tti_os_hex__FWD_SLASH__os_hex;

};

class OtnLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf internal;

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


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OTU_CFG_ */

