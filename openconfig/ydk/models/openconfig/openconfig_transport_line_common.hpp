#ifndef _OPENCONFIG_TRANSPORT_LINE_COMMON_
#define _OPENCONFIG_TRANSPORT_LINE_COMMON_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_transport_line_common {

class OPTICALLINEPORTTYPE : public virtual ydk::Identity
{
    public:
        OPTICALLINEPORTTYPE();
        ~OPTICALLINEPORTTYPE();


}; // OPTICALLINEPORTTYPE

class INGRESS : public openconfig::openconfig_transport_line_common::OPTICALLINEPORTTYPE, virtual ydk::Identity
{
    public:
        INGRESS();
        ~INGRESS();


}; // INGRESS

class EGRESS : public openconfig::openconfig_transport_line_common::OPTICALLINEPORTTYPE, virtual ydk::Identity
{
    public:
        EGRESS();
        ~EGRESS();


}; // EGRESS

class ADD : public openconfig::openconfig_transport_line_common::OPTICALLINEPORTTYPE, virtual ydk::Identity
{
    public:
        ADD();
        ~ADD();


}; // ADD

class DROP : public openconfig::openconfig_transport_line_common::OPTICALLINEPORTTYPE, virtual ydk::Identity
{
    public:
        DROP();
        ~DROP();


}; // DROP

class MONITOR : public openconfig::openconfig_transport_line_common::OPTICALLINEPORTTYPE, virtual ydk::Identity
{
    public:
        MONITOR();
        ~MONITOR();


}; // MONITOR


}
}

#endif /* _OPENCONFIG_TRANSPORT_LINE_COMMON_ */

