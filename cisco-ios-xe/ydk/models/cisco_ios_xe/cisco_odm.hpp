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

class Mplsstaticbinding : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Mplsstaticbinding();
        ~Mplsstaticbinding();


}; // Mplsstaticbinding

class Mplsforwardingtable : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Mplsforwardingtable();
        ~Mplsforwardingtable();


}; // Mplsforwardingtable

class Bridgedomain : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Bridgedomain();
        ~Bridgedomain();


}; // Bridgedomain

class Platformsoftware : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Platformsoftware();
        ~Platformsoftware();


}; // Platformsoftware

class Virtualservice : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Virtualservice();
        ~Virtualservice();


}; // Virtualservice

class Ospf : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Ospf();
        ~Ospf();


}; // Ospf

class Bfdneighbors : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Bfdneighbors();
        ~Bfdneighbors();


}; // Bfdneighbors

class Flowmonitor : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Flowmonitor();
        ~Flowmonitor();


}; // Flowmonitor

class Ethernetcfmstats : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Ethernetcfmstats();
        ~Ethernetcfmstats();


}; // Ethernetcfmstats

class Bgp : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Bgp();
        ~Bgp();


}; // Bgp

class Mplsldpneighbors : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Mplsldpneighbors();
        ~Mplsldpneighbors();


}; // Mplsldpneighbors

class Diffserv : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Diffserv();
        ~Diffserv();


}; // Diffserv

class Iproute : public cisco_odm::Parsername, virtual ydk::Identity
{
    public:
        Iproute();
        ~Iproute();


}; // Iproute


}
}

#endif /* _CISCO_ODM_ */

