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

};

class CefCCStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ccStatusIdle;
        static const ydk::Enum::YLeaf ccStatusRunning;
        static const ydk::Enum::YLeaf ccStatusDone;

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

};

class CefPrefixSearchState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf matchFound;
        static const ydk::Enum::YLeaf noMatchFound;

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

};

class CefOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class CefAdjLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf raw;
        static const ydk::Enum::YLeaf unknown;

};

class CefCCAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ccActionStart;
        static const ydk::Enum::YLeaf ccActionAbort;
        static const ydk::Enum::YLeaf ccActionNone;

};

class CefAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CefIpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_CEF_TC_ */

