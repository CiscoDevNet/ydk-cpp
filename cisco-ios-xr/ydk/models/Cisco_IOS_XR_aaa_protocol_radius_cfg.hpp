#ifndef _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_
#define _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_protocol_radius_cfg {


class AaaAuthenticationEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf any;
        static const Enum::YLeaf session_key;

};

class AaaConfigEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class AaaActionEnum : public Enum
{
    public:
        static const Enum::YLeaf accept;
        static const Enum::YLeaf reject;

};

class AaaSelectKeyEnum : public Enum
{
    public:
        static const Enum::YLeaf server_key;
        static const Enum::YLeaf session_key;

};

class AaaDscpValueEnum : public Enum
{
    public:
        static const Enum::YLeaf af11;
        static const Enum::YLeaf af12;
        static const Enum::YLeaf af13;
        static const Enum::YLeaf af21;
        static const Enum::YLeaf af22;
        static const Enum::YLeaf af23;
        static const Enum::YLeaf af31;
        static const Enum::YLeaf af32;
        static const Enum::YLeaf af33;
        static const Enum::YLeaf af41;
        static const Enum::YLeaf af42;
        static const Enum::YLeaf af43;
        static const Enum::YLeaf cs1;
        static const Enum::YLeaf cs2;
        static const Enum::YLeaf cs3;
        static const Enum::YLeaf cs4;
        static const Enum::YLeaf cs5;
        static const Enum::YLeaf cs6;
        static const Enum::YLeaf cs7;
        static const Enum::YLeaf default_;
        static const Enum::YLeaf ef;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_ */

