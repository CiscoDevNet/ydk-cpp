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

        static int get_enum_value(const std::string & name) {
            if (name == "relative") return 1;
            if (name == "absolute") return 2;
            return -1;
        }
};

class XtcPathHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf srv6;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls") return 1;
            if (name == "srv6") return 2;
            return -1;
        }
};

class XtcBindingSidDynamicRule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            return -1;
        }
};

class XtcAffinityRule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf affinity_include_all;
        static const ydk::Enum::YLeaf affinity_exclude_any;
        static const ydk::Enum::YLeaf affinity_include_any;

        static int get_enum_value(const std::string & name) {
            if (name == "affinity-include-all") return 0;
            if (name == "affinity-exclude-any") return 1;
            if (name == "affinity-include-any") return 2;
            return -1;
        }
};

class XtcEndPoint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf end_point_type_ipv4;
        static const ydk::Enum::YLeaf end_point_type_ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "end-point-type-ipv4") return 1;
            if (name == "end-point-type-ipv6") return 2;
            return -1;
        }
};

class XtcDisjointness : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;
        static const ydk::Enum::YLeaf srlg_node;

        static int get_enum_value(const std::string & name) {
            if (name == "link") return 1;
            if (name == "node") return 2;
            if (name == "srlg") return 3;
            if (name == "srlg-node") return 4;
            return -1;
        }
};

class XtcAutoRouteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf constant;

        static int get_enum_value(const std::string & name) {
            if (name == "relative") return 1;
            if (name == "constant") return 3;
            return -1;
        }
};

class XtcSteeringApplication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp") return 1;
            if (name == "isis") return 2;
            if (name == "ospf") return 3;
            return -1;
        }
};

class XtcBindingSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_label_specified;
        static const ydk::Enum::YLeaf mpls_label_any;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls-label-specified") return 1;
            if (name == "mpls-label-any") return 2;
            return -1;
        }
};

class XtcSegment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf mpls_label;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-address") return 1;
            if (name == "mpls-label") return 3;
            return -1;
        }
};

class XtcBindingSidexplicitRule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fallback_dynamic;
        static const ydk::Enum::YLeaf enforce_srlb;

        static int get_enum_value(const std::string & name) {
            if (name == "fallback-dynamic") return 1;
            if (name == "enforce-srlb") return 2;
            return -1;
        }
};

class XtcPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf dynamic;

        static int get_enum_value(const std::string & name) {
            if (name == "explicit") return 1;
            if (name == "dynamic") return 2;
            return -1;
        }
};

class XtcMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;
        static const ydk::Enum::YLeaf hopcount;
        static const ydk::Enum::YLeaf latency;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 1;
            if (name == "te") return 2;
            if (name == "hopcount") return 3;
            if (name == "latency") return 12;
            return -1;
        }
};

class XtcAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf af_type_ipv4;
        static const ydk::Enum::YLeaf xtc_af_type_ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "af-type-ipv4") return 1;
            if (name == "xtc-af-type-ipv6") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_AGENT_CFG_ */

