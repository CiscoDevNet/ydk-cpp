#ifndef _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_
#define _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_protocol_radius_cfg {

class AaaSelectKey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf server_key;
        static const ydk::Enum::YLeaf session_key;

};

class AaaAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf reject;

};

class AaaDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

};

class AaaConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class AaaDscpValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf ef;

};

class AaaAuthentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf session_key;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_ */

