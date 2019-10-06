#ifndef _IP_MIB_
#define _IP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IP_MIB {

class IPMIB : public ydk::Entity
{
    public:
        IPMIB();
        ~IPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Ip; //type: IPMIB::Ip
        class IpTrafficStats; //type: IPMIB::IpTrafficStats
        class Icmp; //type: IPMIB::Icmp
        class IpAddrTable; //type: IPMIB::IpAddrTable
        class IpNetToMediaTable; //type: IPMIB::IpNetToMediaTable
        class Ipv4InterfaceTable; //type: IPMIB::Ipv4InterfaceTable
        class Ipv6InterfaceTable; //type: IPMIB::Ipv6InterfaceTable
        class IpSystemStatsTable; //type: IPMIB::IpSystemStatsTable
        class IpIfStatsTable; //type: IPMIB::IpIfStatsTable
        class IpAddressPrefixTable; //type: IPMIB::IpAddressPrefixTable
        class IpAddressTable; //type: IPMIB::IpAddressTable
        class IpNetToPhysicalTable; //type: IPMIB::IpNetToPhysicalTable
        class Ipv6ScopeZoneIndexTable; //type: IPMIB::Ipv6ScopeZoneIndexTable
        class IpDefaultRouterTable; //type: IPMIB::IpDefaultRouterTable
        class Ipv6RouterAdvertTable; //type: IPMIB::Ipv6RouterAdvertTable
        class IcmpStatsTable; //type: IPMIB::IcmpStatsTable
        class IcmpMsgStatsTable; //type: IPMIB::IcmpMsgStatsTable

        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ip> ip;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpTrafficStats> iptrafficstats;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpAddrTable> ipaddrtable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpNetToMediaTable> ipnettomediatable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv4InterfaceTable> ipv4interfacetable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6InterfaceTable> ipv6interfacetable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpSystemStatsTable> ipsystemstatstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpIfStatsTable> ipifstatstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpAddressPrefixTable> ipaddressprefixtable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpAddressTable> ipaddresstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpNetToPhysicalTable> ipnettophysicaltable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6ScopeZoneIndexTable> ipv6scopezoneindextable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IpDefaultRouterTable> ipdefaultroutertable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6RouterAdvertTable> ipv6routeradverttable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IcmpStatsTable> icmpstatstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::IcmpMsgStatsTable> icmpmsgstatstable;
        
}; // IPMIB


class IPMIB::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipforwarding; //type: IpForwarding
        ydk::YLeaf ipdefaultttl; //type: int32
        ydk::YLeaf ipinreceives; //type: uint32
        ydk::YLeaf ipinhdrerrors; //type: uint32
        ydk::YLeaf ipinaddrerrors; //type: uint32
        ydk::YLeaf ipforwdatagrams; //type: uint32
        ydk::YLeaf ipinunknownprotos; //type: uint32
        ydk::YLeaf ipindiscards; //type: uint32
        ydk::YLeaf ipindelivers; //type: uint32
        ydk::YLeaf ipoutrequests; //type: uint32
        ydk::YLeaf ipoutdiscards; //type: uint32
        ydk::YLeaf ipoutnoroutes; //type: uint32
        ydk::YLeaf ipreasmtimeout; //type: int32
        ydk::YLeaf ipreasmreqds; //type: uint32
        ydk::YLeaf ipreasmoks; //type: uint32
        ydk::YLeaf ipreasmfails; //type: uint32
        ydk::YLeaf ipfragoks; //type: uint32
        ydk::YLeaf ipfragfails; //type: uint32
        ydk::YLeaf ipfragcreates; //type: uint32
        ydk::YLeaf iproutingdiscards; //type: uint32
        ydk::YLeaf ipv6ipforwarding; //type: Ipv6IpForwarding
        ydk::YLeaf ipv6ipdefaulthoplimit; //type: int32
        ydk::YLeaf ipv4interfacetablelastchange; //type: uint32
        ydk::YLeaf ipv6interfacetablelastchange; //type: uint32
        ydk::YLeaf ipaddressspinlock; //type: int32
        ydk::YLeaf ipv6routeradvertspinlock; //type: int32
        class IpForwarding;
        class Ipv6IpForwarding;

}; // IPMIB::Ip


class IPMIB::IpTrafficStats : public ydk::Entity
{
    public:
        IpTrafficStats();
        ~IpTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipifstatstablelastchange; //type: uint32

}; // IPMIB::IpTrafficStats


class IPMIB::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf icmpinmsgs; //type: uint32
        ydk::YLeaf icmpinerrors; //type: uint32
        ydk::YLeaf icmpindestunreachs; //type: uint32
        ydk::YLeaf icmpintimeexcds; //type: uint32
        ydk::YLeaf icmpinparmprobs; //type: uint32
        ydk::YLeaf icmpinsrcquenchs; //type: uint32
        ydk::YLeaf icmpinredirects; //type: uint32
        ydk::YLeaf icmpinechos; //type: uint32
        ydk::YLeaf icmpinechoreps; //type: uint32
        ydk::YLeaf icmpintimestamps; //type: uint32
        ydk::YLeaf icmpintimestampreps; //type: uint32
        ydk::YLeaf icmpinaddrmasks; //type: uint32
        ydk::YLeaf icmpinaddrmaskreps; //type: uint32
        ydk::YLeaf icmpoutmsgs; //type: uint32
        ydk::YLeaf icmpouterrors; //type: uint32
        ydk::YLeaf icmpoutdestunreachs; //type: uint32
        ydk::YLeaf icmpouttimeexcds; //type: uint32
        ydk::YLeaf icmpoutparmprobs; //type: uint32
        ydk::YLeaf icmpoutsrcquenchs; //type: uint32
        ydk::YLeaf icmpoutredirects; //type: uint32
        ydk::YLeaf icmpoutechos; //type: uint32
        ydk::YLeaf icmpoutechoreps; //type: uint32
        ydk::YLeaf icmpouttimestamps; //type: uint32
        ydk::YLeaf icmpouttimestampreps; //type: uint32
        ydk::YLeaf icmpoutaddrmasks; //type: uint32
        ydk::YLeaf icmpoutaddrmaskreps; //type: uint32

}; // IPMIB::Icmp


class IPMIB::IpAddrTable : public ydk::Entity
{
    public:
        IpAddrTable();
        ~IpAddrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpAddrEntry; //type: IPMIB::IpAddrTable::IpAddrEntry

        ydk::YList ipaddrentry;
        
}; // IPMIB::IpAddrTable


class IPMIB::IpAddrTable::IpAddrEntry : public ydk::Entity
{
    public:
        IpAddrEntry();
        ~IpAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipadentaddr; //type: string
        ydk::YLeaf ipadentifindex; //type: int32
        ydk::YLeaf ipadentnetmask; //type: string
        ydk::YLeaf ipadentbcastaddr; //type: int32
        ydk::YLeaf ipadentreasmmaxsize; //type: int32

}; // IPMIB::IpAddrTable::IpAddrEntry


class IPMIB::IpNetToMediaTable : public ydk::Entity
{
    public:
        IpNetToMediaTable();
        ~IpNetToMediaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpNetToMediaEntry; //type: IPMIB::IpNetToMediaTable::IpNetToMediaEntry

        ydk::YList ipnettomediaentry;
        
}; // IPMIB::IpNetToMediaTable


class IPMIB::IpNetToMediaTable::IpNetToMediaEntry : public ydk::Entity
{
    public:
        IpNetToMediaEntry();
        ~IpNetToMediaEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipnettomediaifindex; //type: int32
        ydk::YLeaf ipnettomedianetaddress; //type: string
        ydk::YLeaf ipnettomediaphysaddress; //type: string
        ydk::YLeaf ipnettomediatype; //type: IpNetToMediaType
        class IpNetToMediaType;

}; // IPMIB::IpNetToMediaTable::IpNetToMediaEntry


class IPMIB::Ipv4InterfaceTable : public ydk::Entity
{
    public:
        Ipv4InterfaceTable();
        ~Ipv4InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4InterfaceEntry; //type: IPMIB::Ipv4InterfaceTable::Ipv4InterfaceEntry

        ydk::YList ipv4interfaceentry;
        
}; // IPMIB::Ipv4InterfaceTable


class IPMIB::Ipv4InterfaceTable::Ipv4InterfaceEntry : public ydk::Entity
{
    public:
        Ipv4InterfaceEntry();
        ~Ipv4InterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4interfaceifindex; //type: int32
        ydk::YLeaf ipv4interfacereasmmaxsize; //type: int32
        ydk::YLeaf ipv4interfaceenablestatus; //type: Ipv4InterfaceEnableStatus
        ydk::YLeaf ipv4interfaceretransmittime; //type: uint32
        class Ipv4InterfaceEnableStatus;

}; // IPMIB::Ipv4InterfaceTable::Ipv4InterfaceEntry


class IPMIB::Ipv6InterfaceTable : public ydk::Entity
{
    public:
        Ipv6InterfaceTable();
        ~Ipv6InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6InterfaceEntry; //type: IPMIB::Ipv6InterfaceTable::Ipv6InterfaceEntry

        ydk::YList ipv6interfaceentry;
        
}; // IPMIB::Ipv6InterfaceTable


class IPMIB::Ipv6InterfaceTable::Ipv6InterfaceEntry : public ydk::Entity
{
    public:
        Ipv6InterfaceEntry();
        ~Ipv6InterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6interfaceifindex; //type: int32
        ydk::YLeaf ipv6interfacereasmmaxsize; //type: uint32
        ydk::YLeaf ipv6interfaceidentifier; //type: string
        ydk::YLeaf ipv6interfaceenablestatus; //type: Ipv6InterfaceEnableStatus
        ydk::YLeaf ipv6interfacereachabletime; //type: uint32
        ydk::YLeaf ipv6interfaceretransmittime; //type: uint32
        ydk::YLeaf ipv6interfaceforwarding; //type: Ipv6InterfaceForwarding
        class Ipv6InterfaceEnableStatus;
        class Ipv6InterfaceForwarding;

}; // IPMIB::Ipv6InterfaceTable::Ipv6InterfaceEntry


class IPMIB::IpSystemStatsTable : public ydk::Entity
{
    public:
        IpSystemStatsTable();
        ~IpSystemStatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpSystemStatsEntry; //type: IPMIB::IpSystemStatsTable::IpSystemStatsEntry

        ydk::YList ipsystemstatsentry;
        
}; // IPMIB::IpSystemStatsTable


class IPMIB::IpSystemStatsTable::IpSystemStatsEntry : public ydk::Entity
{
    public:
        IpSystemStatsEntry();
        ~IpSystemStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipsystemstatsipversion; //type: IpVersion
        ydk::YLeaf ipsystemstatsinreceives; //type: uint32
        ydk::YLeaf ipsystemstatshcinreceives; //type: uint64
        ydk::YLeaf ipsystemstatsinoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcinoctets; //type: uint64
        ydk::YLeaf ipsystemstatsinhdrerrors; //type: uint32
        ydk::YLeaf ipsystemstatsinnoroutes; //type: uint32
        ydk::YLeaf ipsystemstatsinaddrerrors; //type: uint32
        ydk::YLeaf ipsystemstatsinunknownprotos; //type: uint32
        ydk::YLeaf ipsystemstatsintruncatedpkts; //type: uint32
        ydk::YLeaf ipsystemstatsinforwdatagrams; //type: uint32
        ydk::YLeaf ipsystemstatshcinforwdatagrams; //type: uint64
        ydk::YLeaf ipsystemstatsreasmreqds; //type: uint32
        ydk::YLeaf ipsystemstatsreasmoks; //type: uint32
        ydk::YLeaf ipsystemstatsreasmfails; //type: uint32
        ydk::YLeaf ipsystemstatsindiscards; //type: uint32
        ydk::YLeaf ipsystemstatsindelivers; //type: uint32
        ydk::YLeaf ipsystemstatshcindelivers; //type: uint64
        ydk::YLeaf ipsystemstatsoutrequests; //type: uint32
        ydk::YLeaf ipsystemstatshcoutrequests; //type: uint64
        ydk::YLeaf ipsystemstatsoutnoroutes; //type: uint32
        ydk::YLeaf ipsystemstatsoutforwdatagrams; //type: uint32
        ydk::YLeaf ipsystemstatshcoutforwdatagrams; //type: uint64
        ydk::YLeaf ipsystemstatsoutdiscards; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragreqds; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragoks; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragfails; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragcreates; //type: uint32
        ydk::YLeaf ipsystemstatsouttransmits; //type: uint32
        ydk::YLeaf ipsystemstatshcouttransmits; //type: uint64
        ydk::YLeaf ipsystemstatsoutoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcoutoctets; //type: uint64
        ydk::YLeaf ipsystemstatsinmcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcinmcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsinmcastoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcinmcastoctets; //type: uint64
        ydk::YLeaf ipsystemstatsoutmcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcoutmcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsoutmcastoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcoutmcastoctets; //type: uint64
        ydk::YLeaf ipsystemstatsinbcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcinbcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsoutbcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcoutbcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsdiscontinuitytime; //type: uint32
        ydk::YLeaf ipsystemstatsrefreshrate; //type: uint32

}; // IPMIB::IpSystemStatsTable::IpSystemStatsEntry


class IPMIB::IpIfStatsTable : public ydk::Entity
{
    public:
        IpIfStatsTable();
        ~IpIfStatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpIfStatsEntry; //type: IPMIB::IpIfStatsTable::IpIfStatsEntry

        ydk::YList ipifstatsentry;
        
}; // IPMIB::IpIfStatsTable


class IPMIB::IpIfStatsTable::IpIfStatsEntry : public ydk::Entity
{
    public:
        IpIfStatsEntry();
        ~IpIfStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipifstatsipversion; //type: IpVersion
        ydk::YLeaf ipifstatsifindex; //type: int32
        ydk::YLeaf ipifstatsinreceives; //type: uint32
        ydk::YLeaf ipifstatshcinreceives; //type: uint64
        ydk::YLeaf ipifstatsinoctets; //type: uint32
        ydk::YLeaf ipifstatshcinoctets; //type: uint64
        ydk::YLeaf ipifstatsinhdrerrors; //type: uint32
        ydk::YLeaf ipifstatsinnoroutes; //type: uint32
        ydk::YLeaf ipifstatsinaddrerrors; //type: uint32
        ydk::YLeaf ipifstatsinunknownprotos; //type: uint32
        ydk::YLeaf ipifstatsintruncatedpkts; //type: uint32
        ydk::YLeaf ipifstatsinforwdatagrams; //type: uint32
        ydk::YLeaf ipifstatshcinforwdatagrams; //type: uint64
        ydk::YLeaf ipifstatsreasmreqds; //type: uint32
        ydk::YLeaf ipifstatsreasmoks; //type: uint32
        ydk::YLeaf ipifstatsreasmfails; //type: uint32
        ydk::YLeaf ipifstatsindiscards; //type: uint32
        ydk::YLeaf ipifstatsindelivers; //type: uint32
        ydk::YLeaf ipifstatshcindelivers; //type: uint64
        ydk::YLeaf ipifstatsoutrequests; //type: uint32
        ydk::YLeaf ipifstatshcoutrequests; //type: uint64
        ydk::YLeaf ipifstatsoutforwdatagrams; //type: uint32
        ydk::YLeaf ipifstatshcoutforwdatagrams; //type: uint64
        ydk::YLeaf ipifstatsoutdiscards; //type: uint32
        ydk::YLeaf ipifstatsoutfragreqds; //type: uint32
        ydk::YLeaf ipifstatsoutfragoks; //type: uint32
        ydk::YLeaf ipifstatsoutfragfails; //type: uint32
        ydk::YLeaf ipifstatsoutfragcreates; //type: uint32
        ydk::YLeaf ipifstatsouttransmits; //type: uint32
        ydk::YLeaf ipifstatshcouttransmits; //type: uint64
        ydk::YLeaf ipifstatsoutoctets; //type: uint32
        ydk::YLeaf ipifstatshcoutoctets; //type: uint64
        ydk::YLeaf ipifstatsinmcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcinmcastpkts; //type: uint64
        ydk::YLeaf ipifstatsinmcastoctets; //type: uint32
        ydk::YLeaf ipifstatshcinmcastoctets; //type: uint64
        ydk::YLeaf ipifstatsoutmcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcoutmcastpkts; //type: uint64
        ydk::YLeaf ipifstatsoutmcastoctets; //type: uint32
        ydk::YLeaf ipifstatshcoutmcastoctets; //type: uint64
        ydk::YLeaf ipifstatsinbcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcinbcastpkts; //type: uint64
        ydk::YLeaf ipifstatsoutbcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcoutbcastpkts; //type: uint64
        ydk::YLeaf ipifstatsdiscontinuitytime; //type: uint32
        ydk::YLeaf ipifstatsrefreshrate; //type: uint32

}; // IPMIB::IpIfStatsTable::IpIfStatsEntry


class IPMIB::IpAddressPrefixTable : public ydk::Entity
{
    public:
        IpAddressPrefixTable();
        ~IpAddressPrefixTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpAddressPrefixEntry; //type: IPMIB::IpAddressPrefixTable::IpAddressPrefixEntry

        ydk::YList ipaddressprefixentry;
        
}; // IPMIB::IpAddressPrefixTable


class IPMIB::IpAddressPrefixTable::IpAddressPrefixEntry : public ydk::Entity
{
    public:
        IpAddressPrefixEntry();
        ~IpAddressPrefixEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipaddressprefixifindex; //type: int32
        ydk::YLeaf ipaddressprefixtype; //type: InetAddressType
        ydk::YLeaf ipaddressprefixprefix; //type: binary
        ydk::YLeaf ipaddressprefixlength; //type: uint32
        ydk::YLeaf ipaddressprefixorigin; //type: IpAddressPrefixOriginTC
        ydk::YLeaf ipaddressprefixonlinkflag; //type: boolean
        ydk::YLeaf ipaddressprefixautonomousflag; //type: boolean
        ydk::YLeaf ipaddressprefixadvpreferredlifetime; //type: uint32
        ydk::YLeaf ipaddressprefixadvvalidlifetime; //type: uint32

}; // IPMIB::IpAddressPrefixTable::IpAddressPrefixEntry


class IPMIB::IpAddressTable : public ydk::Entity
{
    public:
        IpAddressTable();
        ~IpAddressTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpAddressEntry; //type: IPMIB::IpAddressTable::IpAddressEntry

        ydk::YList ipaddressentry;
        
}; // IPMIB::IpAddressTable


class IPMIB::IpAddressTable::IpAddressEntry : public ydk::Entity
{
    public:
        IpAddressEntry();
        ~IpAddressEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipaddressaddrtype; //type: InetAddressType
        ydk::YLeaf ipaddressaddr; //type: binary
        ydk::YLeaf ipaddressifindex; //type: int32
        ydk::YLeaf ipaddresstype; //type: IpAddressType
        ydk::YLeaf ipaddressprefix; //type: string
        ydk::YLeaf ipaddressorigin; //type: IpAddressOriginTC
        ydk::YLeaf ipaddressstatus; //type: IpAddressStatusTC
        ydk::YLeaf ipaddresscreated; //type: uint32
        ydk::YLeaf ipaddresslastchanged; //type: uint32
        ydk::YLeaf ipaddressrowstatus; //type: RowStatus
        ydk::YLeaf ipaddressstoragetype; //type: StorageType
        class IpAddressType;

}; // IPMIB::IpAddressTable::IpAddressEntry


class IPMIB::IpNetToPhysicalTable : public ydk::Entity
{
    public:
        IpNetToPhysicalTable();
        ~IpNetToPhysicalTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpNetToPhysicalEntry; //type: IPMIB::IpNetToPhysicalTable::IpNetToPhysicalEntry

        ydk::YList ipnettophysicalentry;
        
}; // IPMIB::IpNetToPhysicalTable


class IPMIB::IpNetToPhysicalTable::IpNetToPhysicalEntry : public ydk::Entity
{
    public:
        IpNetToPhysicalEntry();
        ~IpNetToPhysicalEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipnettophysicalifindex; //type: int32
        ydk::YLeaf ipnettophysicalnetaddresstype; //type: InetAddressType
        ydk::YLeaf ipnettophysicalnetaddress; //type: binary
        ydk::YLeaf ipnettophysicalphysaddress; //type: string
        ydk::YLeaf ipnettophysicallastupdated; //type: uint32
        ydk::YLeaf ipnettophysicaltype; //type: IpNetToPhysicalType
        ydk::YLeaf ipnettophysicalstate; //type: IpNetToPhysicalState
        ydk::YLeaf ipnettophysicalrowstatus; //type: RowStatus
        class IpNetToPhysicalType;
        class IpNetToPhysicalState;

}; // IPMIB::IpNetToPhysicalTable::IpNetToPhysicalEntry


class IPMIB::Ipv6ScopeZoneIndexTable : public ydk::Entity
{
    public:
        Ipv6ScopeZoneIndexTable();
        ~Ipv6ScopeZoneIndexTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6ScopeZoneIndexEntry; //type: IPMIB::Ipv6ScopeZoneIndexTable::Ipv6ScopeZoneIndexEntry

        ydk::YList ipv6scopezoneindexentry;
        
}; // IPMIB::Ipv6ScopeZoneIndexTable


class IPMIB::Ipv6ScopeZoneIndexTable::Ipv6ScopeZoneIndexEntry : public ydk::Entity
{
    public:
        Ipv6ScopeZoneIndexEntry();
        ~Ipv6ScopeZoneIndexEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6scopezoneindexifindex; //type: int32
        ydk::YLeaf ipv6scopezoneindexlinklocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindex3; //type: uint32
        ydk::YLeaf ipv6scopezoneindexadminlocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindexsitelocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindex6; //type: uint32
        ydk::YLeaf ipv6scopezoneindex7; //type: uint32
        ydk::YLeaf ipv6scopezoneindexorganizationlocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindex9; //type: uint32
        ydk::YLeaf ipv6scopezoneindexa; //type: uint32
        ydk::YLeaf ipv6scopezoneindexb; //type: uint32
        ydk::YLeaf ipv6scopezoneindexc; //type: uint32
        ydk::YLeaf ipv6scopezoneindexd; //type: uint32

}; // IPMIB::Ipv6ScopeZoneIndexTable::Ipv6ScopeZoneIndexEntry


class IPMIB::IpDefaultRouterTable : public ydk::Entity
{
    public:
        IpDefaultRouterTable();
        ~IpDefaultRouterTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpDefaultRouterEntry; //type: IPMIB::IpDefaultRouterTable::IpDefaultRouterEntry

        ydk::YList ipdefaultrouterentry;
        
}; // IPMIB::IpDefaultRouterTable


class IPMIB::IpDefaultRouterTable::IpDefaultRouterEntry : public ydk::Entity
{
    public:
        IpDefaultRouterEntry();
        ~IpDefaultRouterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipdefaultrouteraddresstype; //type: InetAddressType
        ydk::YLeaf ipdefaultrouteraddress; //type: binary
        ydk::YLeaf ipdefaultrouterifindex; //type: int32
        ydk::YLeaf ipdefaultrouterlifetime; //type: uint32
        ydk::YLeaf ipdefaultrouterpreference; //type: IpDefaultRouterPreference
        class IpDefaultRouterPreference;

}; // IPMIB::IpDefaultRouterTable::IpDefaultRouterEntry


class IPMIB::Ipv6RouterAdvertTable : public ydk::Entity
{
    public:
        Ipv6RouterAdvertTable();
        ~Ipv6RouterAdvertTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6RouterAdvertEntry; //type: IPMIB::Ipv6RouterAdvertTable::Ipv6RouterAdvertEntry

        ydk::YList ipv6routeradvertentry;
        
}; // IPMIB::Ipv6RouterAdvertTable


class IPMIB::Ipv6RouterAdvertTable::Ipv6RouterAdvertEntry : public ydk::Entity
{
    public:
        Ipv6RouterAdvertEntry();
        ~Ipv6RouterAdvertEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6routeradvertifindex; //type: int32
        ydk::YLeaf ipv6routeradvertsendadverts; //type: boolean
        ydk::YLeaf ipv6routeradvertmaxinterval; //type: uint32
        ydk::YLeaf ipv6routeradvertmininterval; //type: uint32
        ydk::YLeaf ipv6routeradvertmanagedflag; //type: boolean
        ydk::YLeaf ipv6routeradvertotherconfigflag; //type: boolean
        ydk::YLeaf ipv6routeradvertlinkmtu; //type: uint32
        ydk::YLeaf ipv6routeradvertreachabletime; //type: uint32
        ydk::YLeaf ipv6routeradvertretransmittime; //type: uint32
        ydk::YLeaf ipv6routeradvertcurhoplimit; //type: uint32
        ydk::YLeaf ipv6routeradvertdefaultlifetime; //type: uint32
        ydk::YLeaf ipv6routeradvertrowstatus; //type: RowStatus

}; // IPMIB::Ipv6RouterAdvertTable::Ipv6RouterAdvertEntry


class IPMIB::IcmpStatsTable : public ydk::Entity
{
    public:
        IcmpStatsTable();
        ~IcmpStatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IcmpStatsEntry; //type: IPMIB::IcmpStatsTable::IcmpStatsEntry

        ydk::YList icmpstatsentry;
        
}; // IPMIB::IcmpStatsTable


class IPMIB::IcmpStatsTable::IcmpStatsEntry : public ydk::Entity
{
    public:
        IcmpStatsEntry();
        ~IcmpStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf icmpstatsipversion; //type: IpVersion
        ydk::YLeaf icmpstatsinmsgs; //type: uint32
        ydk::YLeaf icmpstatsinerrors; //type: uint32
        ydk::YLeaf icmpstatsoutmsgs; //type: uint32
        ydk::YLeaf icmpstatsouterrors; //type: uint32

}; // IPMIB::IcmpStatsTable::IcmpStatsEntry


class IPMIB::IcmpMsgStatsTable : public ydk::Entity
{
    public:
        IcmpMsgStatsTable();
        ~IcmpMsgStatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IcmpMsgStatsEntry; //type: IPMIB::IcmpMsgStatsTable::IcmpMsgStatsEntry

        ydk::YList icmpmsgstatsentry;
        
}; // IPMIB::IcmpMsgStatsTable


class IPMIB::IcmpMsgStatsTable::IcmpMsgStatsEntry : public ydk::Entity
{
    public:
        IcmpMsgStatsEntry();
        ~IcmpMsgStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf icmpmsgstatsipversion; //type: IpVersion
        ydk::YLeaf icmpmsgstatstype; //type: int32
        ydk::YLeaf icmpmsgstatsinpkts; //type: uint32
        ydk::YLeaf icmpmsgstatsoutpkts; //type: uint32

}; // IPMIB::IcmpMsgStatsTable::IcmpMsgStatsEntry

class IpAddressPrefixOriginTC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf wellknown;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf routeradv;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "manual") return 2;
            if (name == "wellknown") return 3;
            if (name == "dhcp") return 4;
            if (name == "routeradv") return 5;
            return -1;
        }
};

class IpAddressOriginTC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf linklayer;
        static const ydk::Enum::YLeaf random;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "manual") return 2;
            if (name == "dhcp") return 4;
            if (name == "linklayer") return 5;
            if (name == "random") return 6;
            return -1;
        }
};

class IpAddressStatusTC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf preferred;
        static const ydk::Enum::YLeaf deprecated;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf inaccessible;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf tentative;
        static const ydk::Enum::YLeaf duplicate;
        static const ydk::Enum::YLeaf optimistic;

        static int get_enum_value(const std::string & name) {
            if (name == "preferred") return 1;
            if (name == "deprecated") return 2;
            if (name == "invalid") return 3;
            if (name == "inaccessible") return 4;
            if (name == "unknown") return 5;
            if (name == "tentative") return 6;
            if (name == "duplicate") return 7;
            if (name == "optimistic") return 8;
            return -1;
        }
};

class IPMIB::Ip::IpForwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf notForwarding;

        static int get_enum_value(const std::string & name) {
            if (name == "forwarding") return 1;
            if (name == "notForwarding") return 2;
            return -1;
        }
};

class IPMIB::Ip::Ipv6IpForwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf notForwarding;

        static int get_enum_value(const std::string & name) {
            if (name == "forwarding") return 1;
            if (name == "notForwarding") return 2;
            return -1;
        }
};

class IPMIB::IpNetToMediaTable::IpNetToMediaEntry::IpNetToMediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf static_;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "invalid") return 2;
            if (name == "dynamic") return 3;
            if (name == "static") return 4;
            return -1;
        }
};

class IPMIB::Ipv4InterfaceTable::Ipv4InterfaceEntry::Ipv4InterfaceEnableStatus : public ydk::Enum
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

class IPMIB::Ipv6InterfaceTable::Ipv6InterfaceEntry::Ipv6InterfaceEnableStatus : public ydk::Enum
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

class IPMIB::Ipv6InterfaceTable::Ipv6InterfaceEntry::Ipv6InterfaceForwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf notForwarding;

        static int get_enum_value(const std::string & name) {
            if (name == "forwarding") return 1;
            if (name == "notForwarding") return 2;
            return -1;
        }
};

class IPMIB::IpAddressTable::IpAddressEntry::IpAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf anycast;
        static const ydk::Enum::YLeaf broadcast;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 1;
            if (name == "anycast") return 2;
            if (name == "broadcast") return 3;
            return -1;
        }
};

class IPMIB::IpNetToPhysicalTable::IpNetToPhysicalEntry::IpNetToPhysicalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf local;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "invalid") return 2;
            if (name == "dynamic") return 3;
            if (name == "static") return 4;
            if (name == "local") return 5;
            return -1;
        }
};

class IPMIB::IpNetToPhysicalTable::IpNetToPhysicalEntry::IpNetToPhysicalState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reachable;
        static const ydk::Enum::YLeaf stale;
        static const ydk::Enum::YLeaf delay;
        static const ydk::Enum::YLeaf probe;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf incomplete;

        static int get_enum_value(const std::string & name) {
            if (name == "reachable") return 1;
            if (name == "stale") return 2;
            if (name == "delay") return 3;
            if (name == "probe") return 4;
            if (name == "invalid") return 5;
            if (name == "unknown") return 6;
            if (name == "incomplete") return 7;
            return -1;
        }
};

class IPMIB::IpDefaultRouterTable::IpDefaultRouterEntry::IpDefaultRouterPreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reserved;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;

        static int get_enum_value(const std::string & name) {
            if (name == "reserved") return -2;
            if (name == "low") return -1;
            if (name == "medium") return 0;
            if (name == "high") return 1;
            return -1;
        }
};


}
}

#endif /* _IP_MIB_ */

