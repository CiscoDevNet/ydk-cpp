#ifndef _CISCO_IOS_XR_SYSADMIN_TYPES_
#define _CISCO_IOS_XR_SYSADMIN_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_types {

class RackId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf L0;
        static const ydk::Enum::YLeaf L1;
        static const ydk::Enum::YLeaf L2;
        static const ydk::Enum::YLeaf L3;
        static const ydk::Enum::YLeaf L4;
        static const ydk::Enum::YLeaf L5;
        static const ydk::Enum::YLeaf L6;
        static const ydk::Enum::YLeaf L7;
        static const ydk::Enum::YLeaf L8;
        static const ydk::Enum::YLeaf L9;
        static const ydk::Enum::YLeaf L10;
        static const ydk::Enum::YLeaf L11;
        static const ydk::Enum::YLeaf L12;
        static const ydk::Enum::YLeaf L13;
        static const ydk::Enum::YLeaf L14;
        static const ydk::Enum::YLeaf L15;
        static const ydk::Enum::YLeaf F0;
        static const ydk::Enum::YLeaf F1;
        static const ydk::Enum::YLeaf F2;
        static const ydk::Enum::YLeaf F3;
        static const ydk::Enum::YLeaf B0;
        static const ydk::Enum::YLeaf B1;

};

class Adminstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class GenericOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class GenericOperStatus_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class GenericOperStatus__ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class GenericHaRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_ha_role;
        static const ydk::Enum::YLeaf Active;
        static const ydk::Enum::YLeaf Standby;

};

class FabricLinkTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf S1;
        static const ydk::Enum::YLeaf S2;
        static const ydk::Enum::YLeaf S3;

};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_TYPES_ */

