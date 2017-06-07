#ifndef _CISCO_ODM_
#define _CISCO_ODM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_odm {

class ParsernameIdentity : public virtual Identity
{
    public:
        ParsernameIdentity();
        ~ParsernameIdentity();


}; // ParsernameIdentity

class FlowmonitorIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        FlowmonitorIdentity();
        ~FlowmonitorIdentity();


}; // FlowmonitorIdentity

class VirtualserviceIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        VirtualserviceIdentity();
        ~VirtualserviceIdentity();


}; // VirtualserviceIdentity

class DiffservIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        DiffservIdentity();
        ~DiffservIdentity();


}; // DiffservIdentity

class BridgedomainIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        BridgedomainIdentity();
        ~BridgedomainIdentity();


}; // BridgedomainIdentity

class MplsstaticbindingIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        MplsstaticbindingIdentity();
        ~MplsstaticbindingIdentity();


}; // MplsstaticbindingIdentity

class EthernetcfmstatsIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        EthernetcfmstatsIdentity();
        ~EthernetcfmstatsIdentity();


}; // EthernetcfmstatsIdentity

class MplsforwardingtableIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        MplsforwardingtableIdentity();
        ~MplsforwardingtableIdentity();


}; // MplsforwardingtableIdentity

class BgpIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        BgpIdentity();
        ~BgpIdentity();


}; // BgpIdentity

class IprouteIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        IprouteIdentity();
        ~IprouteIdentity();


}; // IprouteIdentity

class PlatformsoftwareIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        PlatformsoftwareIdentity();
        ~PlatformsoftwareIdentity();


}; // PlatformsoftwareIdentity

class MplsldpneighborsIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        MplsldpneighborsIdentity();
        ~MplsldpneighborsIdentity();


}; // MplsldpneighborsIdentity

class BfdneighborsIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        BfdneighborsIdentity();
        ~BfdneighborsIdentity();


}; // BfdneighborsIdentity

class OspfIdentity : public cisco_odm::ParsernameIdentity, virtual Identity
{
    public:
        OspfIdentity();
        ~OspfIdentity();


}; // OspfIdentity


}
}

#endif /* _CISCO_ODM_ */

