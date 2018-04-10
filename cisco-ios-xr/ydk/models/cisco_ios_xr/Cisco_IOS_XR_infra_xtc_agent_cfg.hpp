#ifndef _CISCO_IOS_XR_INFRA_XTC_AGENT_CFG_
#define _CISCO_IOS_XR_INFRA_XTC_AGENT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_agent_cfg {

class XtcMetricValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;

};

class XtcBindingSidexplicitRule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fallback_dynamic;
        static const ydk::Enum::YLeaf enforce_srlb;

};

class XtcPathHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf srv6;

};

class XtcAffinityRule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf affinity_include_all;
        static const ydk::Enum::YLeaf affinity_exclude_any;
        static const ydk::Enum::YLeaf affinity_include_any;

};

class XtcPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf dynamic;

};

class XtcMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;

};

class XtcSegment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf mpls_label;

};

class XtcBindingSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_label_specified;
        static const ydk::Enum::YLeaf mpls_label_any;

};

class XtcDisjointness : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;
        static const ydk::Enum::YLeaf srlg_node;

};

class XtcEndPoint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf end_point_type_ipv4;
        static const ydk::Enum::YLeaf end_point_type_ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_AGENT_CFG_ */

