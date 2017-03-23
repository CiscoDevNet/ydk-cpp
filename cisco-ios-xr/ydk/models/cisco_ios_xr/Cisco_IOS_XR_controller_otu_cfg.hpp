#ifndef _CISCO_IOS_XR_CONTROLLER_OTU_CFG_
#define _CISCO_IOS_XR_CONTROLLER_OTU_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_controller_otu_cfg {

class OtnLoopbackEnum : public Enum
{
    public:
        static const Enum::YLeaf line;
        static const Enum::YLeaf internal;

};

class OtnExpTtiTypeSapiEnum : public Enum
{
    public:
        static const Enum::YLeaf exp_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

};

class OtnPerMonEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class OtnSendTtiTypeOsEnum : public Enum
{
    public:
        static const Enum::YLeaf send_tti_os_ascii__FWD_SLASH__os_ascii;
        static const Enum::YLeaf send_tti_os_hex__FWD_SLASH__os_hex;

};

class OtnSendTtiTypeSapiEnum : public Enum
{
    public:
        static const Enum::YLeaf send_tti_sapi_ascii__FWD_SLASH__sapi_ascii;

};

class OtnSendTtiTypeDapiEnum : public Enum
{
    public:
        static const Enum::YLeaf send_tti_dapi_ascii__FWD_SLASH__dapi_ascii;

};

class OtnExpTtiTypeOsEnum : public Enum
{
    public:
        static const Enum::YLeaf exp_tti_os_ascii__FWD_SLASH__os_ascii;
        static const Enum::YLeaf exp_tti_os_hex__FWD_SLASH__os_hex;

};

class OtnSecAdminStateEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf maintenance;

};

class OtnExpTtiTypeFullEnum : public Enum
{
    public:
        static const Enum::YLeaf exp_tti_full_ascii__FWD_SLASH__full_ascii;
        static const Enum::YLeaf exp_tti_hex__FWD_SLASH__hex;

};

class OtuForwardErrorCorrectionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf standard;
        static const Enum::YLeaf enhanced_i7;
        static const Enum::YLeaf enhanced_i4;
        static const Enum::YLeaf enhanced_swizzle;
        static const Enum::YLeaf enhanced_hg20;
        static const Enum::YLeaf enhanced_hg7;

};

class OtnExpTtiTypeDapiEnum : public Enum
{
    public:
        static const Enum::YLeaf exp_tti_dapi_ascii__FWD_SLASH__dapi_ascii;

};

class OtnSendTtiTypeFullEnum : public Enum
{
    public:
        static const Enum::YLeaf send_tti_full_ascii__FWD_SLASH__full_ascii;
        static const Enum::YLeaf send_tti_hex__FWD_SLASH__hex;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OTU_CFG_ */

