#ifndef _IP_MIB_
#define _IP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace IP_MIB {

class IpMib : public Entity
{
    public:
        IpMib();
        ~IpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Ip; //type: IpMib::Ip
        class Iptrafficstats; //type: IpMib::Iptrafficstats
        class Icmp; //type: IpMib::Icmp
        class Ipaddrtable; //type: IpMib::Ipaddrtable
        class Ipnettomediatable; //type: IpMib::Ipnettomediatable
        class Ipv4Interfacetable; //type: IpMib::Ipv4Interfacetable
        class Ipv6Interfacetable; //type: IpMib::Ipv6Interfacetable
        class Ipsystemstatstable; //type: IpMib::Ipsystemstatstable
        class Ipifstatstable; //type: IpMib::Ipifstatstable
        class Ipaddressprefixtable; //type: IpMib::Ipaddressprefixtable
        class Ipaddresstable; //type: IpMib::Ipaddresstable
        class Ipnettophysicaltable; //type: IpMib::Ipnettophysicaltable
        class Ipv6Scopezoneindextable; //type: IpMib::Ipv6Scopezoneindextable
        class Ipdefaultroutertable; //type: IpMib::Ipdefaultroutertable
        class Ipv6Routeradverttable; //type: IpMib::Ipv6Routeradverttable
        class Icmpstatstable; //type: IpMib::Icmpstatstable
        class Icmpmsgstatstable; //type: IpMib::Icmpmsgstatstable

        std::shared_ptr<IP_MIB::IpMib::Icmp> icmp_;
        std::shared_ptr<IP_MIB::IpMib::Icmpmsgstatstable> icmpmsgstatstable_;
        std::shared_ptr<IP_MIB::IpMib::Icmpstatstable> icmpstatstable_;
        std::shared_ptr<IP_MIB::IpMib::Ip> ip_;
        std::shared_ptr<IP_MIB::IpMib::Ipaddressprefixtable> ipaddressprefixtable_;
        std::shared_ptr<IP_MIB::IpMib::Ipaddresstable> ipaddresstable_;
        std::shared_ptr<IP_MIB::IpMib::Ipaddrtable> ipaddrtable_;
        std::shared_ptr<IP_MIB::IpMib::Ipdefaultroutertable> ipdefaultroutertable_;
        std::shared_ptr<IP_MIB::IpMib::Ipifstatstable> ipifstatstable_;
        std::shared_ptr<IP_MIB::IpMib::Ipnettomediatable> ipnettomediatable_;
        std::shared_ptr<IP_MIB::IpMib::Ipnettophysicaltable> ipnettophysicaltable_;
        std::shared_ptr<IP_MIB::IpMib::Ipsystemstatstable> ipsystemstatstable_;
        std::shared_ptr<IP_MIB::IpMib::Iptrafficstats> iptrafficstats_;
        std::shared_ptr<IP_MIB::IpMib::Ipv4Interfacetable> ipv4interfacetable_;
        std::shared_ptr<IP_MIB::IpMib::Ipv6Interfacetable> ipv6interfacetable_;
        std::shared_ptr<IP_MIB::IpMib::Ipv6Routeradverttable> ipv6routeradverttable_;
        std::shared_ptr<IP_MIB::IpMib::Ipv6Scopezoneindextable> ipv6scopezoneindextable_;
        
}; // IpMib


class IpMib::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipforwarding; //type: IpforwardingEnum
        YLeaf ipdefaultttl; //type: int32
        YLeaf ipinreceives; //type: uint32
        YLeaf ipinhdrerrors; //type: uint32
        YLeaf ipinaddrerrors; //type: uint32
        YLeaf ipforwdatagrams; //type: uint32
        YLeaf ipinunknownprotos; //type: uint32
        YLeaf ipindiscards; //type: uint32
        YLeaf ipindelivers; //type: uint32
        YLeaf ipoutrequests; //type: uint32
        YLeaf ipoutdiscards; //type: uint32
        YLeaf ipoutnoroutes; //type: uint32
        YLeaf ipreasmtimeout; //type: int32
        YLeaf ipreasmreqds; //type: uint32
        YLeaf ipreasmoks; //type: uint32
        YLeaf ipreasmfails; //type: uint32
        YLeaf ipfragoks; //type: uint32
        YLeaf ipfragfails; //type: uint32
        YLeaf ipfragcreates; //type: uint32
        YLeaf iproutingdiscards; //type: uint32
        YLeaf ipv6ipforwarding; //type: Ipv6IpforwardingEnum
        YLeaf ipv6ipdefaulthoplimit; //type: int32
        YLeaf ipv4interfacetablelastchange; //type: uint32
        YLeaf ipv6interfacetablelastchange; //type: uint32
        YLeaf ipaddressspinlock; //type: int32
        YLeaf ipv6routeradvertspinlock; //type: int32
        class IpforwardingEnum;
        class Ipv6IpforwardingEnum;

}; // IpMib::Ip


class IpMib::Iptrafficstats : public Entity
{
    public:
        Iptrafficstats();
        ~Iptrafficstats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipifstatstablelastchange; //type: uint32

}; // IpMib::Iptrafficstats


class IpMib::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf icmpinmsgs; //type: uint32
        YLeaf icmpinerrors; //type: uint32
        YLeaf icmpindestunreachs; //type: uint32
        YLeaf icmpintimeexcds; //type: uint32
        YLeaf icmpinparmprobs; //type: uint32
        YLeaf icmpinsrcquenchs; //type: uint32
        YLeaf icmpinredirects; //type: uint32
        YLeaf icmpinechos; //type: uint32
        YLeaf icmpinechoreps; //type: uint32
        YLeaf icmpintimestamps; //type: uint32
        YLeaf icmpintimestampreps; //type: uint32
        YLeaf icmpinaddrmasks; //type: uint32
        YLeaf icmpinaddrmaskreps; //type: uint32
        YLeaf icmpoutmsgs; //type: uint32
        YLeaf icmpouterrors; //type: uint32
        YLeaf icmpoutdestunreachs; //type: uint32
        YLeaf icmpouttimeexcds; //type: uint32
        YLeaf icmpoutparmprobs; //type: uint32
        YLeaf icmpoutsrcquenchs; //type: uint32
        YLeaf icmpoutredirects; //type: uint32
        YLeaf icmpoutechos; //type: uint32
        YLeaf icmpoutechoreps; //type: uint32
        YLeaf icmpouttimestamps; //type: uint32
        YLeaf icmpouttimestampreps; //type: uint32
        YLeaf icmpoutaddrmasks; //type: uint32
        YLeaf icmpoutaddrmaskreps; //type: uint32

}; // IpMib::Icmp


class IpMib::Ipaddrtable : public Entity
{
    public:
        Ipaddrtable();
        ~Ipaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipaddrentry; //type: IpMib::Ipaddrtable::Ipaddrentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipaddrtable::Ipaddrentry> > ipaddrentry_;
        
}; // IpMib::Ipaddrtable


class IpMib::Ipaddrtable::Ipaddrentry : public Entity
{
    public:
        Ipaddrentry();
        ~Ipaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipadentaddr; //type: string
        YLeaf ipadentifindex; //type: int32
        YLeaf ipadentnetmask; //type: string
        YLeaf ipadentbcastaddr; //type: int32
        YLeaf ipadentreasmmaxsize; //type: int32

}; // IpMib::Ipaddrtable::Ipaddrentry


class IpMib::Ipnettomediatable : public Entity
{
    public:
        Ipnettomediatable();
        ~Ipnettomediatable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipnettomediaentry; //type: IpMib::Ipnettomediatable::Ipnettomediaentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipnettomediatable::Ipnettomediaentry> > ipnettomediaentry_;
        
}; // IpMib::Ipnettomediatable


class IpMib::Ipnettomediatable::Ipnettomediaentry : public Entity
{
    public:
        Ipnettomediaentry();
        ~Ipnettomediaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipnettomediaifindex; //type: int32
        YLeaf ipnettomedianetaddress; //type: string
        YLeaf ipnettomediaphysaddress; //type: string
        YLeaf ipnettomediatype; //type: IpnettomediatypeEnum
        class IpnettomediatypeEnum;

}; // IpMib::Ipnettomediatable::Ipnettomediaentry


class IpMib::Ipv4Interfacetable : public Entity
{
    public:
        Ipv4Interfacetable();
        ~Ipv4Interfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Interfaceentry; //type: IpMib::Ipv4Interfacetable::Ipv4Interfaceentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipv4Interfacetable::Ipv4Interfaceentry> > ipv4interfaceentry_;
        
}; // IpMib::Ipv4Interfacetable


class IpMib::Ipv4Interfacetable::Ipv4Interfaceentry : public Entity
{
    public:
        Ipv4Interfaceentry();
        ~Ipv4Interfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4interfaceifindex; //type: int32
        YLeaf ipv4interfacereasmmaxsize; //type: int32
        YLeaf ipv4interfaceenablestatus; //type: Ipv4InterfaceenablestatusEnum
        YLeaf ipv4interfaceretransmittime; //type: uint32
        class Ipv4InterfaceenablestatusEnum;

}; // IpMib::Ipv4Interfacetable::Ipv4Interfaceentry


class IpMib::Ipv6Interfacetable : public Entity
{
    public:
        Ipv6Interfacetable();
        ~Ipv6Interfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Interfaceentry; //type: IpMib::Ipv6Interfacetable::Ipv6Interfaceentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipv6Interfacetable::Ipv6Interfaceentry> > ipv6interfaceentry_;
        
}; // IpMib::Ipv6Interfacetable


class IpMib::Ipv6Interfacetable::Ipv6Interfaceentry : public Entity
{
    public:
        Ipv6Interfaceentry();
        ~Ipv6Interfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6interfaceifindex; //type: int32
        YLeaf ipv6interfacereasmmaxsize; //type: uint32
        YLeaf ipv6interfaceidentifier; //type: string
        YLeaf ipv6interfaceenablestatus; //type: Ipv6InterfaceenablestatusEnum
        YLeaf ipv6interfacereachabletime; //type: uint32
        YLeaf ipv6interfaceretransmittime; //type: uint32
        YLeaf ipv6interfaceforwarding; //type: Ipv6InterfaceforwardingEnum
        class Ipv6InterfaceenablestatusEnum;
        class Ipv6InterfaceforwardingEnum;

}; // IpMib::Ipv6Interfacetable::Ipv6Interfaceentry


class IpMib::Ipsystemstatstable : public Entity
{
    public:
        Ipsystemstatstable();
        ~Ipsystemstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipsystemstatsentry; //type: IpMib::Ipsystemstatstable::Ipsystemstatsentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipsystemstatstable::Ipsystemstatsentry> > ipsystemstatsentry_;
        
}; // IpMib::Ipsystemstatstable


class IpMib::Ipsystemstatstable::Ipsystemstatsentry : public Entity
{
    public:
        Ipsystemstatsentry();
        ~Ipsystemstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipsystemstatsipversion; //type: IpVersionEnum
        YLeaf ipsystemstatsinreceives; //type: uint32
        YLeaf ipsystemstatshcinreceives; //type: uint64
        YLeaf ipsystemstatsinoctets; //type: uint32
        YLeaf ipsystemstatshcinoctets; //type: uint64
        YLeaf ipsystemstatsinhdrerrors; //type: uint32
        YLeaf ipsystemstatsinnoroutes; //type: uint32
        YLeaf ipsystemstatsinaddrerrors; //type: uint32
        YLeaf ipsystemstatsinunknownprotos; //type: uint32
        YLeaf ipsystemstatsintruncatedpkts; //type: uint32
        YLeaf ipsystemstatsinforwdatagrams; //type: uint32
        YLeaf ipsystemstatshcinforwdatagrams; //type: uint64
        YLeaf ipsystemstatsreasmreqds; //type: uint32
        YLeaf ipsystemstatsreasmoks; //type: uint32
        YLeaf ipsystemstatsreasmfails; //type: uint32
        YLeaf ipsystemstatsindiscards; //type: uint32
        YLeaf ipsystemstatsindelivers; //type: uint32
        YLeaf ipsystemstatshcindelivers; //type: uint64
        YLeaf ipsystemstatsoutrequests; //type: uint32
        YLeaf ipsystemstatshcoutrequests; //type: uint64
        YLeaf ipsystemstatsoutnoroutes; //type: uint32
        YLeaf ipsystemstatsoutforwdatagrams; //type: uint32
        YLeaf ipsystemstatshcoutforwdatagrams; //type: uint64
        YLeaf ipsystemstatsoutdiscards; //type: uint32
        YLeaf ipsystemstatsoutfragreqds; //type: uint32
        YLeaf ipsystemstatsoutfragoks; //type: uint32
        YLeaf ipsystemstatsoutfragfails; //type: uint32
        YLeaf ipsystemstatsoutfragcreates; //type: uint32
        YLeaf ipsystemstatsouttransmits; //type: uint32
        YLeaf ipsystemstatshcouttransmits; //type: uint64
        YLeaf ipsystemstatsoutoctets; //type: uint32
        YLeaf ipsystemstatshcoutoctets; //type: uint64
        YLeaf ipsystemstatsinmcastpkts; //type: uint32
        YLeaf ipsystemstatshcinmcastpkts; //type: uint64
        YLeaf ipsystemstatsinmcastoctets; //type: uint32
        YLeaf ipsystemstatshcinmcastoctets; //type: uint64
        YLeaf ipsystemstatsoutmcastpkts; //type: uint32
        YLeaf ipsystemstatshcoutmcastpkts; //type: uint64
        YLeaf ipsystemstatsoutmcastoctets; //type: uint32
        YLeaf ipsystemstatshcoutmcastoctets; //type: uint64
        YLeaf ipsystemstatsinbcastpkts; //type: uint32
        YLeaf ipsystemstatshcinbcastpkts; //type: uint64
        YLeaf ipsystemstatsoutbcastpkts; //type: uint32
        YLeaf ipsystemstatshcoutbcastpkts; //type: uint64
        YLeaf ipsystemstatsdiscontinuitytime; //type: uint32
        YLeaf ipsystemstatsrefreshrate; //type: uint32

}; // IpMib::Ipsystemstatstable::Ipsystemstatsentry


class IpMib::Ipifstatstable : public Entity
{
    public:
        Ipifstatstable();
        ~Ipifstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipifstatsentry; //type: IpMib::Ipifstatstable::Ipifstatsentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipifstatstable::Ipifstatsentry> > ipifstatsentry_;
        
}; // IpMib::Ipifstatstable


class IpMib::Ipifstatstable::Ipifstatsentry : public Entity
{
    public:
        Ipifstatsentry();
        ~Ipifstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipifstatsipversion; //type: IpVersionEnum
        YLeaf ipifstatsifindex; //type: int32
        YLeaf ipifstatsinreceives; //type: uint32
        YLeaf ipifstatshcinreceives; //type: uint64
        YLeaf ipifstatsinoctets; //type: uint32
        YLeaf ipifstatshcinoctets; //type: uint64
        YLeaf ipifstatsinhdrerrors; //type: uint32
        YLeaf ipifstatsinnoroutes; //type: uint32
        YLeaf ipifstatsinaddrerrors; //type: uint32
        YLeaf ipifstatsinunknownprotos; //type: uint32
        YLeaf ipifstatsintruncatedpkts; //type: uint32
        YLeaf ipifstatsinforwdatagrams; //type: uint32
        YLeaf ipifstatshcinforwdatagrams; //type: uint64
        YLeaf ipifstatsreasmreqds; //type: uint32
        YLeaf ipifstatsreasmoks; //type: uint32
        YLeaf ipifstatsreasmfails; //type: uint32
        YLeaf ipifstatsindiscards; //type: uint32
        YLeaf ipifstatsindelivers; //type: uint32
        YLeaf ipifstatshcindelivers; //type: uint64
        YLeaf ipifstatsoutrequests; //type: uint32
        YLeaf ipifstatshcoutrequests; //type: uint64
        YLeaf ipifstatsoutforwdatagrams; //type: uint32
        YLeaf ipifstatshcoutforwdatagrams; //type: uint64
        YLeaf ipifstatsoutdiscards; //type: uint32
        YLeaf ipifstatsoutfragreqds; //type: uint32
        YLeaf ipifstatsoutfragoks; //type: uint32
        YLeaf ipifstatsoutfragfails; //type: uint32
        YLeaf ipifstatsoutfragcreates; //type: uint32
        YLeaf ipifstatsouttransmits; //type: uint32
        YLeaf ipifstatshcouttransmits; //type: uint64
        YLeaf ipifstatsoutoctets; //type: uint32
        YLeaf ipifstatshcoutoctets; //type: uint64
        YLeaf ipifstatsinmcastpkts; //type: uint32
        YLeaf ipifstatshcinmcastpkts; //type: uint64
        YLeaf ipifstatsinmcastoctets; //type: uint32
        YLeaf ipifstatshcinmcastoctets; //type: uint64
        YLeaf ipifstatsoutmcastpkts; //type: uint32
        YLeaf ipifstatshcoutmcastpkts; //type: uint64
        YLeaf ipifstatsoutmcastoctets; //type: uint32
        YLeaf ipifstatshcoutmcastoctets; //type: uint64
        YLeaf ipifstatsinbcastpkts; //type: uint32
        YLeaf ipifstatshcinbcastpkts; //type: uint64
        YLeaf ipifstatsoutbcastpkts; //type: uint32
        YLeaf ipifstatshcoutbcastpkts; //type: uint64
        YLeaf ipifstatsdiscontinuitytime; //type: uint32
        YLeaf ipifstatsrefreshrate; //type: uint32

}; // IpMib::Ipifstatstable::Ipifstatsentry


class IpMib::Ipaddressprefixtable : public Entity
{
    public:
        Ipaddressprefixtable();
        ~Ipaddressprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipaddressprefixentry; //type: IpMib::Ipaddressprefixtable::Ipaddressprefixentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipaddressprefixtable::Ipaddressprefixentry> > ipaddressprefixentry_;
        
}; // IpMib::Ipaddressprefixtable


class IpMib::Ipaddressprefixtable::Ipaddressprefixentry : public Entity
{
    public:
        Ipaddressprefixentry();
        ~Ipaddressprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipaddressprefixifindex; //type: int32
        YLeaf ipaddressprefixtype; //type: InetaddresstypeEnum
        YLeaf ipaddressprefixprefix; //type: binary
        YLeaf ipaddressprefixlength; //type: uint32
        YLeaf ipaddressprefixorigin; //type: IpaddressprefixorigintcEnum
        YLeaf ipaddressprefixonlinkflag; //type: boolean
        YLeaf ipaddressprefixautonomousflag; //type: boolean
        YLeaf ipaddressprefixadvpreferredlifetime; //type: uint32
        YLeaf ipaddressprefixadvvalidlifetime; //type: uint32

}; // IpMib::Ipaddressprefixtable::Ipaddressprefixentry


class IpMib::Ipaddresstable : public Entity
{
    public:
        Ipaddresstable();
        ~Ipaddresstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipaddressentry; //type: IpMib::Ipaddresstable::Ipaddressentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipaddresstable::Ipaddressentry> > ipaddressentry_;
        
}; // IpMib::Ipaddresstable


class IpMib::Ipaddresstable::Ipaddressentry : public Entity
{
    public:
        Ipaddressentry();
        ~Ipaddressentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipaddressaddrtype; //type: InetaddresstypeEnum
        YLeaf ipaddressaddr; //type: binary
        YLeaf ipaddressifindex; //type: int32
        YLeaf ipaddresstype; //type: IpaddresstypeEnum
        YLeaf ipaddressprefix; //type: string
        YLeaf ipaddressorigin; //type: IpaddressorigintcEnum
        YLeaf ipaddressstatus; //type: IpaddressstatustcEnum
        YLeaf ipaddresscreated; //type: uint32
        YLeaf ipaddresslastchanged; //type: uint32
        YLeaf ipaddressrowstatus; //type: RowstatusEnum
        YLeaf ipaddressstoragetype; //type: StoragetypeEnum
        class IpaddresstypeEnum;

}; // IpMib::Ipaddresstable::Ipaddressentry


class IpMib::Ipnettophysicaltable : public Entity
{
    public:
        Ipnettophysicaltable();
        ~Ipnettophysicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipnettophysicalentry; //type: IpMib::Ipnettophysicaltable::Ipnettophysicalentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipnettophysicaltable::Ipnettophysicalentry> > ipnettophysicalentry_;
        
}; // IpMib::Ipnettophysicaltable


class IpMib::Ipnettophysicaltable::Ipnettophysicalentry : public Entity
{
    public:
        Ipnettophysicalentry();
        ~Ipnettophysicalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipnettophysicalifindex; //type: int32
        YLeaf ipnettophysicalnetaddresstype; //type: InetaddresstypeEnum
        YLeaf ipnettophysicalnetaddress; //type: binary
        YLeaf ipnettophysicalphysaddress; //type: string
        YLeaf ipnettophysicallastupdated; //type: uint32
        YLeaf ipnettophysicaltype; //type: IpnettophysicaltypeEnum
        YLeaf ipnettophysicalstate; //type: IpnettophysicalstateEnum
        YLeaf ipnettophysicalrowstatus; //type: RowstatusEnum
        class IpnettophysicaltypeEnum;
        class IpnettophysicalstateEnum;

}; // IpMib::Ipnettophysicaltable::Ipnettophysicalentry


class IpMib::Ipv6Scopezoneindextable : public Entity
{
    public:
        Ipv6Scopezoneindextable();
        ~Ipv6Scopezoneindextable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Scopezoneindexentry; //type: IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry> > ipv6scopezoneindexentry_;
        
}; // IpMib::Ipv6Scopezoneindextable


class IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry : public Entity
{
    public:
        Ipv6Scopezoneindexentry();
        ~Ipv6Scopezoneindexentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6scopezoneindexifindex; //type: int32
        YLeaf ipv6scopezoneindexlinklocal; //type: uint32
        YLeaf ipv6scopezoneindex3; //type: uint32
        YLeaf ipv6scopezoneindexadminlocal; //type: uint32
        YLeaf ipv6scopezoneindexsitelocal; //type: uint32
        YLeaf ipv6scopezoneindex6; //type: uint32
        YLeaf ipv6scopezoneindex7; //type: uint32
        YLeaf ipv6scopezoneindexorganizationlocal; //type: uint32
        YLeaf ipv6scopezoneindex9; //type: uint32
        YLeaf ipv6scopezoneindexa; //type: uint32
        YLeaf ipv6scopezoneindexb; //type: uint32
        YLeaf ipv6scopezoneindexc; //type: uint32
        YLeaf ipv6scopezoneindexd; //type: uint32

}; // IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry


class IpMib::Ipdefaultroutertable : public Entity
{
    public:
        Ipdefaultroutertable();
        ~Ipdefaultroutertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipdefaultrouterentry; //type: IpMib::Ipdefaultroutertable::Ipdefaultrouterentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipdefaultroutertable::Ipdefaultrouterentry> > ipdefaultrouterentry_;
        
}; // IpMib::Ipdefaultroutertable


class IpMib::Ipdefaultroutertable::Ipdefaultrouterentry : public Entity
{
    public:
        Ipdefaultrouterentry();
        ~Ipdefaultrouterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipdefaultrouteraddresstype; //type: InetaddresstypeEnum
        YLeaf ipdefaultrouteraddress; //type: binary
        YLeaf ipdefaultrouterifindex; //type: int32
        YLeaf ipdefaultrouterlifetime; //type: uint32
        YLeaf ipdefaultrouterpreference; //type: IpdefaultrouterpreferenceEnum
        class IpdefaultrouterpreferenceEnum;

}; // IpMib::Ipdefaultroutertable::Ipdefaultrouterentry


class IpMib::Ipv6Routeradverttable : public Entity
{
    public:
        Ipv6Routeradverttable();
        ~Ipv6Routeradverttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Routeradvertentry; //type: IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry> > ipv6routeradvertentry_;
        
}; // IpMib::Ipv6Routeradverttable


class IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry : public Entity
{
    public:
        Ipv6Routeradvertentry();
        ~Ipv6Routeradvertentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6routeradvertifindex; //type: int32
        YLeaf ipv6routeradvertsendadverts; //type: boolean
        YLeaf ipv6routeradvertmaxinterval; //type: uint32
        YLeaf ipv6routeradvertmininterval; //type: uint32
        YLeaf ipv6routeradvertmanagedflag; //type: boolean
        YLeaf ipv6routeradvertotherconfigflag; //type: boolean
        YLeaf ipv6routeradvertlinkmtu; //type: uint32
        YLeaf ipv6routeradvertreachabletime; //type: uint32
        YLeaf ipv6routeradvertretransmittime; //type: uint32
        YLeaf ipv6routeradvertcurhoplimit; //type: uint32
        YLeaf ipv6routeradvertdefaultlifetime; //type: uint32
        YLeaf ipv6routeradvertrowstatus; //type: RowstatusEnum

}; // IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry


class IpMib::Icmpstatstable : public Entity
{
    public:
        Icmpstatstable();
        ~Icmpstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Icmpstatsentry; //type: IpMib::Icmpstatstable::Icmpstatsentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Icmpstatstable::Icmpstatsentry> > icmpstatsentry_;
        
}; // IpMib::Icmpstatstable


class IpMib::Icmpstatstable::Icmpstatsentry : public Entity
{
    public:
        Icmpstatsentry();
        ~Icmpstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf icmpstatsipversion; //type: IpVersionEnum
        YLeaf icmpstatsinmsgs; //type: uint32
        YLeaf icmpstatsinerrors; //type: uint32
        YLeaf icmpstatsoutmsgs; //type: uint32
        YLeaf icmpstatsouterrors; //type: uint32

}; // IpMib::Icmpstatstable::Icmpstatsentry


class IpMib::Icmpmsgstatstable : public Entity
{
    public:
        Icmpmsgstatstable();
        ~Icmpmsgstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Icmpmsgstatsentry; //type: IpMib::Icmpmsgstatstable::Icmpmsgstatsentry

        std::vector<std::shared_ptr<IP_MIB::IpMib::Icmpmsgstatstable::Icmpmsgstatsentry> > icmpmsgstatsentry_;
        
}; // IpMib::Icmpmsgstatstable


class IpMib::Icmpmsgstatstable::Icmpmsgstatsentry : public Entity
{
    public:
        Icmpmsgstatsentry();
        ~Icmpmsgstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf icmpmsgstatsipversion; //type: IpVersionEnum
        YLeaf icmpmsgstatstype; //type: int32
        YLeaf icmpmsgstatsinpkts; //type: uint32
        YLeaf icmpmsgstatsoutpkts; //type: uint32

}; // IpMib::Icmpmsgstatstable::Icmpmsgstatsentry

class IpaddressprefixorigintcEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf manual;
        static const Enum::YLeaf wellknown;
        static const Enum::YLeaf dhcp;
        static const Enum::YLeaf routeradv;

};

class IpaddressorigintcEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf manual;
        static const Enum::YLeaf dhcp;
        static const Enum::YLeaf linklayer;
        static const Enum::YLeaf random;

};

class IpaddressstatustcEnum : public Enum
{
    public:
        static const Enum::YLeaf preferred;
        static const Enum::YLeaf deprecated;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf inaccessible;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf tentative;
        static const Enum::YLeaf duplicate;
        static const Enum::YLeaf optimistic;

};

class IpMib::Ip::IpforwardingEnum : public Enum
{
    public:
        static const Enum::YLeaf forwarding;
        static const Enum::YLeaf notForwarding;

};

class IpMib::Ip::Ipv6IpforwardingEnum : public Enum
{
    public:
        static const Enum::YLeaf forwarding;
        static const Enum::YLeaf notForwarding;

};

class IpMib::Ipnettomediatable::Ipnettomediaentry::IpnettomediatypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf static_;

};

class IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4InterfaceenablestatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6InterfaceenablestatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6InterfaceforwardingEnum : public Enum
{
    public:
        static const Enum::YLeaf forwarding;
        static const Enum::YLeaf notForwarding;

};

class IpMib::Ipaddresstable::Ipaddressentry::IpaddresstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf anycast;
        static const Enum::YLeaf broadcast;

};

class IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicaltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf local;

};

class IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum : public Enum
{
    public:
        static const Enum::YLeaf reachable;
        static const Enum::YLeaf stale;
        static const Enum::YLeaf delay;
        static const Enum::YLeaf probe;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf incomplete;

};

class IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::IpdefaultrouterpreferenceEnum : public Enum
{
    public:
        static const Enum::YLeaf reserved;
        static const Enum::YLeaf low;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf high;

};


}
}

#endif /* _IP_MIB_ */

