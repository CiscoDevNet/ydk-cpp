#ifndef _CISCO_CEF_TC_
#define _CISCO_CEF_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_CEF_TC {

class CeffailurereasonEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf mallocFailure;
        static const Enum::YLeaf hwFailure;
        static const Enum::YLeaf keepaliveFailure;
        static const Enum::YLeaf noMsgBuffer;
        static const Enum::YLeaf invalidMsgSize;
        static const Enum::YLeaf internalError;

};

class CefccstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ccStatusIdle;
        static const Enum::YLeaf ccStatusRunning;
        static const Enum::YLeaf ccStatusDone;

};

class CefforwardingelementspecialtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf illegal;
        static const Enum::YLeaf punt;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf null;
        static const Enum::YLeaf glean;
        static const Enum::YLeaf unresolved;
        static const Enum::YLeaf noRoute;
        static const Enum::YLeaf none;

};

class CefprefixsearchstateEnum : public Enum
{
    public:
        static const Enum::YLeaf running;
        static const Enum::YLeaf matchFound;
        static const Enum::YLeaf noMatchFound;

};

class CefpathtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf receive;
        static const Enum::YLeaf connectedPrefix;
        static const Enum::YLeaf attachedPrefix;
        static const Enum::YLeaf attachedHost;
        static const Enum::YLeaf attachedNexthop;
        static const Enum::YLeaf recursiveNexthop;
        static const Enum::YLeaf adjacencyPrefix;
        static const Enum::YLeaf specialPrefix;
        static const Enum::YLeaf unknown;

};

class CefcctypeEnum : public Enum
{
    public:
        static const Enum::YLeaf lcDetect;
        static const Enum::YLeaf scanFibLcRp;
        static const Enum::YLeaf scanFibRpLc;
        static const Enum::YLeaf scanRibFib;
        static const Enum::YLeaf scanFibRib;
        static const Enum::YLeaf scanFibHwSw;
        static const Enum::YLeaf scanFibSwHw;
        static const Enum::YLeaf fullScanRibFib;
        static const Enum::YLeaf fullScanFibRib;
        static const Enum::YLeaf fullScanFibRpLc;
        static const Enum::YLeaf fullScanFibLcRp;
        static const Enum::YLeaf fullScanFibHwSw;
        static const Enum::YLeaf fullScanFibSwHw;

};

class CefoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class CefadjlinktypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf raw;
        static const Enum::YLeaf unknown;

};

class CefccactionEnum : public Enum
{
    public:
        static const Enum::YLeaf ccActionStart;
        static const Enum::YLeaf ccActionAbort;
        static const Enum::YLeaf ccActionNone;

};

class CefadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CefipversionEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_CEF_TC_ */

