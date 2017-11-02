#ifndef _CISCO_ODM_
#define _CISCO_ODM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_odm {

class Parsername : public virtual ydk::Identity
{
    public:
        Parsername();
        ~Parsername();


}; // Parsername

class BGP : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        BGP();
        ~BGP();


}; // BGP

class IPRoute : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        IPRoute();
        ~IPRoute();


}; // IPRoute

class FlowMonitor : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        FlowMonitor();
        ~FlowMonitor();


}; // FlowMonitor

class BFDNeighbors : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        BFDNeighbors();
        ~BFDNeighbors();


}; // BFDNeighbors

class BridgeDomain : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        BridgeDomain();
        ~BridgeDomain();


}; // BridgeDomain

class Diffserv : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Diffserv();
        ~Diffserv();


}; // Diffserv

class VirtualService : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        VirtualService();
        ~VirtualService();


}; // VirtualService

class MPLSLDPNeighbors : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        MPLSLDPNeighbors();
        ~MPLSLDPNeighbors();


}; // MPLSLDPNeighbors

class PlatformSoftware : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        PlatformSoftware();
        ~PlatformSoftware();


}; // PlatformSoftware

class MPLSStaticBinding : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        MPLSStaticBinding();
        ~MPLSStaticBinding();


}; // MPLSStaticBinding

class MPLSForwardingTable : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        MPLSForwardingTable();
        ~MPLSForwardingTable();


}; // MPLSForwardingTable

class OSPF : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        OSPF();
        ~OSPF();


}; // OSPF

class EthernetCFMStats : public cisco_ios_xe::cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        EthernetCFMStats();
        ~EthernetCFMStats();


}; // EthernetCFMStats


}
}

#endif /* _CISCO_ODM_ */

