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
        static const Enum::Value all;
        static const Enum::Value any;
        static const Enum::Value session_key;

};

class AaaConfigEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class AaaActionEnum : public Enum
{
    public:
        static const Enum::Value accept;
        static const Enum::Value reject;

};

class AaaSelectKeyEnum : public Enum
{
    public:
        static const Enum::Value server_key;
        static const Enum::Value session_key;

};

class AaaDscpValueEnum : public Enum
{
    public:
        static const Enum::Value af11;
        static const Enum::Value af12;
        static const Enum::Value af13;
        static const Enum::Value af21;
        static const Enum::Value af22;
        static const Enum::Value af23;
        static const Enum::Value af31;
        static const Enum::Value af32;
        static const Enum::Value af33;
        static const Enum::Value af41;
        static const Enum::Value af42;
        static const Enum::Value af43;
        static const Enum::Value cs1;
        static const Enum::Value cs2;
        static const Enum::Value cs3;
        static const Enum::Value cs4;
        static const Enum::Value cs5;
        static const Enum::Value cs6;
        static const Enum::Value cs7;
        static const Enum::Value default_;
        static const Enum::Value ef;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_ */

