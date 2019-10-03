#ifndef _CISCO_CEF_TC_
#define _CISCO_CEF_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_CEF_TC {

class CefFailureReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mallocFailure;
        static const ydk::Enum::YLeaf hwFailure;
        static const ydk::Enum::YLeaf keepaliveFailure;
        static const ydk::Enum::YLeaf noMsgBuffer;
        static const ydk::Enum::YLeaf invalidMsgSize;
        static const ydk::Enum::YLeaf internalError;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "mallocFailure") return 2;
            if (name == "hwFailure") return 3;
            if (name == "keepaliveFailure") return 4;
            if (name == "noMsgBuffer") return 5;
            if (name == "invalidMsgSize") return 6;
            if (name == "internalError") return 7;
            return -1;
        }
};

class CefCCStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ccStatusIdle;
        static const ydk::Enum::YLeaf ccStatusRunning;
        static const ydk::Enum::YLeaf ccStatusDone;

        static int get_enum_value(const std::string & name) {
            if (name == "ccStatusIdle") return 1;
            if (name == "ccStatusRunning") return 2;
            if (name == "ccStatusDone") return 3;
            return -1;
        }
};

class CefForwardingElementSpecialType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf illegal;
        static const ydk::Enum::YLeaf punt;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf glean;
        static const ydk::Enum::YLeaf unresolved;
        static const ydk::Enum::YLeaf noRoute;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "illegal") return 1;
            if (name == "punt") return 2;
            if (name == "drop") return 3;
            if (name == "discard") return 4;
            if (name == "null") return 5;
            if (name == "glean") return 6;
            if (name == "unresolved") return 7;
            if (name == "noRoute") return 8;
            if (name == "none") return 9;
            return -1;
        }
};

class CefPrefixSearchState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf matchFound;
        static const ydk::Enum::YLeaf noMatchFound;

        static int get_enum_value(const std::string & name) {
            if (name == "running") return 1;
            if (name == "matchFound") return 2;
            if (name == "noMatchFound") return 3;
            return -1;
        }
};

class CefPathType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf connectedPrefix;
        static const ydk::Enum::YLeaf attachedPrefix;
        static const ydk::Enum::YLeaf attachedHost;
        static const ydk::Enum::YLeaf attachedNexthop;
        static const ydk::Enum::YLeaf recursiveNexthop;
        static const ydk::Enum::YLeaf adjacencyPrefix;
        static const ydk::Enum::YLeaf specialPrefix;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "receive") return 1;
            if (name == "connectedPrefix") return 2;
            if (name == "attachedPrefix") return 3;
            if (name == "attachedHost") return 4;
            if (name == "attachedNexthop") return 5;
            if (name == "recursiveNexthop") return 6;
            if (name == "adjacencyPrefix") return 7;
            if (name == "specialPrefix") return 8;
            if (name == "unknown") return 9;
            return -1;
        }
};

class CefCCType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lcDetect;
        static const ydk::Enum::YLeaf scanFibLcRp;
        static const ydk::Enum::YLeaf scanFibRpLc;
        static const ydk::Enum::YLeaf scanRibFib;
        static const ydk::Enum::YLeaf scanFibRib;
        static const ydk::Enum::YLeaf scanFibHwSw;
        static const ydk::Enum::YLeaf scanFibSwHw;
        static const ydk::Enum::YLeaf fullScanRibFib;
        static const ydk::Enum::YLeaf fullScanFibRib;
        static const ydk::Enum::YLeaf fullScanFibRpLc;
        static const ydk::Enum::YLeaf fullScanFibLcRp;
        static const ydk::Enum::YLeaf fullScanFibHwSw;
        static const ydk::Enum::YLeaf fullScanFibSwHw;

        static int get_enum_value(const std::string & name) {
            if (name == "lcDetect") return 1;
            if (name == "scanFibLcRp") return 2;
            if (name == "scanFibRpLc") return 3;
            if (name == "scanRibFib") return 4;
            if (name == "scanFibRib") return 5;
            if (name == "scanFibHwSw") return 6;
            if (name == "scanFibSwHw") return 7;
            if (name == "fullScanRibFib") return 8;
            if (name == "fullScanFibRib") return 9;
            if (name == "fullScanFibRpLc") return 10;
            if (name == "fullScanFibLcRp") return 11;
            if (name == "fullScanFibHwSw") return 12;
            if (name == "fullScanFibSwHw") return 13;
            return -1;
        }
};

class CefOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class CefAdjLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf raw;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "mpls") return 3;
            if (name == "raw") return 4;
            if (name == "unknown") return 5;
            return -1;
        }
};

class CefCCAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ccActionStart;
        static const ydk::Enum::YLeaf ccActionAbort;
        static const ydk::Enum::YLeaf ccActionNone;

        static int get_enum_value(const std::string & name) {
            if (name == "ccActionStart") return 1;
            if (name == "ccActionAbort") return 2;
            if (name == "ccActionNone") return 3;
            return -1;
        }
};

class CefAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class CefIpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_CEF_TC_ */

