#ifndef _RFC1213_MIB_
#define _RFC1213_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace RFC1213_MIB {

class RFC1213MIB : public ydk::Entity
{
    public:
        RFC1213MIB();
        ~RFC1213MIB();

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

        class System; //type: RFC1213MIB::System
        class Interfaces; //type: RFC1213MIB::Interfaces
        class Ip; //type: RFC1213MIB::Ip
        class Icmp; //type: RFC1213MIB::Icmp
        class Tcp; //type: RFC1213MIB::Tcp
        class Udp; //type: RFC1213MIB::Udp
        class Egp; //type: RFC1213MIB::Egp
        class Snmp; //type: RFC1213MIB::Snmp
        class Iftable; //type: RFC1213MIB::Iftable
        class Attable; //type: RFC1213MIB::Attable
        class Ipaddrtable; //type: RFC1213MIB::Ipaddrtable
        class Iproutetable; //type: RFC1213MIB::Iproutetable
        class Ipnettomediatable; //type: RFC1213MIB::Ipnettomediatable
        class Tcpconntable; //type: RFC1213MIB::Tcpconntable
        class Udptable; //type: RFC1213MIB::Udptable
        class Egpneightable; //type: RFC1213MIB::Egpneightable

        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Attable> attable;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Egp> egp;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Egpneightable> egpneightable;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Iftable> iftable;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Ip> ip;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Ipaddrtable> ipaddrtable;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Ipnettomediatable> ipnettomediatable;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Iproutetable> iproutetable;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::System> system;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Tcpconntable> tcpconntable;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Udp> udp;
        std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Udptable> udptable;
        
}; // RFC1213MIB


class RFC1213MIB::Attable : public ydk::Entity
{
    public:
        Attable();
        ~Attable();

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

        class Atentry; //type: RFC1213MIB::Attable::Atentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Attable::Atentry> > atentry;
        
}; // RFC1213MIB::Attable


class RFC1213MIB::Attable::Atentry : public ydk::Entity
{
    public:
        Atentry();
        ~Atentry();

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

        ydk::YLeaf atifindex; //type: int32
        ydk::YLeaf atifindex_2; //type: int32
        ydk::YLeaf atnetaddress; //type: string
        ydk::YLeaf atphysaddress; //type: binary

}; // RFC1213MIB::Attable::Atentry


class RFC1213MIB::Egp : public ydk::Entity
{
    public:
        Egp();
        ~Egp();

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

        ydk::YLeaf egpinmsgs; //type: uint32
        ydk::YLeaf egpinerrors; //type: uint32
        ydk::YLeaf egpoutmsgs; //type: uint32
        ydk::YLeaf egpouterrors; //type: uint32
        ydk::YLeaf egpas; //type: int32

}; // RFC1213MIB::Egp


class RFC1213MIB::Egpneightable : public ydk::Entity
{
    public:
        Egpneightable();
        ~Egpneightable();

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

        class Egpneighentry; //type: RFC1213MIB::Egpneightable::Egpneighentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Egpneightable::Egpneighentry> > egpneighentry;
        
}; // RFC1213MIB::Egpneightable


class RFC1213MIB::Egpneightable::Egpneighentry : public ydk::Entity
{
    public:
        Egpneighentry();
        ~Egpneighentry();

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

        ydk::YLeaf egpneighaddr; //type: string
        ydk::YLeaf egpneighstate; //type: Egpneighstate
        ydk::YLeaf egpneighas; //type: int32
        ydk::YLeaf egpneighinmsgs; //type: uint32
        ydk::YLeaf egpneighinerrs; //type: uint32
        ydk::YLeaf egpneighoutmsgs; //type: uint32
        ydk::YLeaf egpneighouterrs; //type: uint32
        ydk::YLeaf egpneighinerrmsgs; //type: uint32
        ydk::YLeaf egpneighouterrmsgs; //type: uint32
        ydk::YLeaf egpneighstateups; //type: uint32
        ydk::YLeaf egpneighstatedowns; //type: uint32
        ydk::YLeaf egpneighintervalhello; //type: int32
        ydk::YLeaf egpneighintervalpoll; //type: int32
        ydk::YLeaf egpneighmode; //type: Egpneighmode
        ydk::YLeaf egpneigheventtrigger; //type: Egpneigheventtrigger
        class Egpneighstate;
        class Egpneighmode;
        class Egpneigheventtrigger;

}; // RFC1213MIB::Egpneightable::Egpneighentry


class RFC1213MIB::Icmp : public ydk::Entity
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

}; // RFC1213MIB::Icmp


class RFC1213MIB::Iftable : public ydk::Entity
{
    public:
        Iftable();
        ~Iftable();

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

        class Ifentry; //type: RFC1213MIB::Iftable::Ifentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Iftable::Ifentry> > ifentry;
        
}; // RFC1213MIB::Iftable


class RFC1213MIB::Iftable::Ifentry : public ydk::Entity
{
    public:
        Ifentry();
        ~Ifentry();

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

        ydk::YLeaf ifindex; //type: int32
        ydk::YLeaf ifdescr; //type: binary
        ydk::YLeaf iftype; //type: IANAifType
        ydk::YLeaf ifmtu; //type: int32
        ydk::YLeaf ifspeed; //type: uint32
        ydk::YLeaf ifphysaddress; //type: binary
        ydk::YLeaf ifadminstatus; //type: Ifadminstatus
        ydk::YLeaf ifoperstatus; //type: Ifoperstatus
        ydk::YLeaf iflastchange; //type: uint32
        ydk::YLeaf ifinoctets; //type: uint32
        ydk::YLeaf ifinucastpkts; //type: uint32
        ydk::YLeaf ifinnucastpkts; //type: uint32
        ydk::YLeaf ifindiscards; //type: uint32
        ydk::YLeaf ifinerrors; //type: uint32
        ydk::YLeaf ifinunknownprotos; //type: uint32
        ydk::YLeaf ifoutoctets; //type: uint32
        ydk::YLeaf ifoutucastpkts; //type: uint32
        ydk::YLeaf ifoutnucastpkts; //type: uint32
        ydk::YLeaf ifoutdiscards; //type: uint32
        ydk::YLeaf ifouterrors; //type: uint32
        ydk::YLeaf ifoutqlen; //type: uint32
        ydk::YLeaf ifspecific; //type: string
        class Ifadminstatus;
        class Ifoperstatus;

}; // RFC1213MIB::Iftable::Ifentry


class RFC1213MIB::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        ydk::YLeaf ifnumber; //type: int32

}; // RFC1213MIB::Interfaces


class RFC1213MIB::Ip : public ydk::Entity
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

        ydk::YLeaf ipforwarding; //type: Ipforwarding
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
        class Ipforwarding;

}; // RFC1213MIB::Ip


class RFC1213MIB::Ipaddrtable : public ydk::Entity
{
    public:
        Ipaddrtable();
        ~Ipaddrtable();

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

        class Ipaddrentry; //type: RFC1213MIB::Ipaddrtable::Ipaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Ipaddrtable::Ipaddrentry> > ipaddrentry;
        
}; // RFC1213MIB::Ipaddrtable


class RFC1213MIB::Ipaddrtable::Ipaddrentry : public ydk::Entity
{
    public:
        Ipaddrentry();
        ~Ipaddrentry();

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

}; // RFC1213MIB::Ipaddrtable::Ipaddrentry


class RFC1213MIB::Ipnettomediatable : public ydk::Entity
{
    public:
        Ipnettomediatable();
        ~Ipnettomediatable();

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

        class Ipnettomediaentry; //type: RFC1213MIB::Ipnettomediatable::Ipnettomediaentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Ipnettomediatable::Ipnettomediaentry> > ipnettomediaentry;
        
}; // RFC1213MIB::Ipnettomediatable


class RFC1213MIB::Ipnettomediatable::Ipnettomediaentry : public ydk::Entity
{
    public:
        Ipnettomediaentry();
        ~Ipnettomediaentry();

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
        ydk::YLeaf ipnettomediaphysaddress; //type: binary
        ydk::YLeaf ipnettomediatype; //type: Ipnettomediatype
        class Ipnettomediatype;

}; // RFC1213MIB::Ipnettomediatable::Ipnettomediaentry


class RFC1213MIB::Iproutetable : public ydk::Entity
{
    public:
        Iproutetable();
        ~Iproutetable();

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

        class Iprouteentry; //type: RFC1213MIB::Iproutetable::Iprouteentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Iproutetable::Iprouteentry> > iprouteentry;
        
}; // RFC1213MIB::Iproutetable


class RFC1213MIB::Iproutetable::Iprouteentry : public ydk::Entity
{
    public:
        Iprouteentry();
        ~Iprouteentry();

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

        ydk::YLeaf iproutedest; //type: string
        ydk::YLeaf iprouteifindex; //type: int32
        ydk::YLeaf iproutemetric1; //type: int32
        ydk::YLeaf iproutemetric2; //type: int32
        ydk::YLeaf iproutemetric3; //type: int32
        ydk::YLeaf iproutemetric4; //type: int32
        ydk::YLeaf iproutenexthop; //type: string
        ydk::YLeaf iproutetype; //type: Iproutetype
        ydk::YLeaf iprouteproto; //type: Iprouteproto
        ydk::YLeaf iprouteage; //type: int32
        ydk::YLeaf iproutemask; //type: string
        ydk::YLeaf iproutemetric5; //type: int32
        ydk::YLeaf iprouteinfo; //type: string
        class Iproutetype;
        class Iprouteproto;

}; // RFC1213MIB::Iproutetable::Iprouteentry


class RFC1213MIB::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

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

        ydk::YLeaf snmpinpkts; //type: uint32
        ydk::YLeaf snmpoutpkts; //type: uint32
        ydk::YLeaf snmpinbadversions; //type: uint32
        ydk::YLeaf snmpinbadcommunitynames; //type: uint32
        ydk::YLeaf snmpinbadcommunityuses; //type: uint32
        ydk::YLeaf snmpinasnparseerrs; //type: uint32
        ydk::YLeaf snmpintoobigs; //type: uint32
        ydk::YLeaf snmpinnosuchnames; //type: uint32
        ydk::YLeaf snmpinbadvalues; //type: uint32
        ydk::YLeaf snmpinreadonlys; //type: uint32
        ydk::YLeaf snmpingenerrs; //type: uint32
        ydk::YLeaf snmpintotalreqvars; //type: uint32
        ydk::YLeaf snmpintotalsetvars; //type: uint32
        ydk::YLeaf snmpingetrequests; //type: uint32
        ydk::YLeaf snmpingetnexts; //type: uint32
        ydk::YLeaf snmpinsetrequests; //type: uint32
        ydk::YLeaf snmpingetresponses; //type: uint32
        ydk::YLeaf snmpintraps; //type: uint32
        ydk::YLeaf snmpouttoobigs; //type: uint32
        ydk::YLeaf snmpoutnosuchnames; //type: uint32
        ydk::YLeaf snmpoutbadvalues; //type: uint32
        ydk::YLeaf snmpoutgenerrs; //type: uint32
        ydk::YLeaf snmpoutgetrequests; //type: uint32
        ydk::YLeaf snmpoutgetnexts; //type: uint32
        ydk::YLeaf snmpoutsetrequests; //type: uint32
        ydk::YLeaf snmpoutgetresponses; //type: uint32
        ydk::YLeaf snmpouttraps; //type: uint32
        ydk::YLeaf snmpenableauthentraps; //type: Snmpenableauthentraps
        class Snmpenableauthentraps;

}; // RFC1213MIB::Snmp


class RFC1213MIB::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        ydk::YLeaf sysdescr; //type: binary
        ydk::YLeaf sysobjectid; //type: string
        ydk::YLeaf sysuptime; //type: uint32
        ydk::YLeaf syscontact; //type: binary
        ydk::YLeaf sysname; //type: binary
        ydk::YLeaf syslocation; //type: binary
        ydk::YLeaf sysservices; //type: int32

}; // RFC1213MIB::System


class RFC1213MIB::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        ydk::YLeaf tcprtoalgorithm; //type: Tcprtoalgorithm
        ydk::YLeaf tcprtomin; //type: int32
        ydk::YLeaf tcprtomax; //type: int32
        ydk::YLeaf tcpmaxconn; //type: int32
        ydk::YLeaf tcpactiveopens; //type: uint32
        ydk::YLeaf tcppassiveopens; //type: uint32
        ydk::YLeaf tcpattemptfails; //type: uint32
        ydk::YLeaf tcpestabresets; //type: uint32
        ydk::YLeaf tcpcurrestab; //type: uint32
        ydk::YLeaf tcpinsegs; //type: uint32
        ydk::YLeaf tcpoutsegs; //type: uint32
        ydk::YLeaf tcpretranssegs; //type: uint32
        ydk::YLeaf tcpinerrs; //type: uint32
        ydk::YLeaf tcpoutrsts; //type: uint32
        class Tcprtoalgorithm;

}; // RFC1213MIB::Tcp


class RFC1213MIB::Tcpconntable : public ydk::Entity
{
    public:
        Tcpconntable();
        ~Tcpconntable();

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

        class Tcpconnentry; //type: RFC1213MIB::Tcpconntable::Tcpconnentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Tcpconntable::Tcpconnentry> > tcpconnentry;
        
}; // RFC1213MIB::Tcpconntable


class RFC1213MIB::Tcpconntable::Tcpconnentry : public ydk::Entity
{
    public:
        Tcpconnentry();
        ~Tcpconnentry();

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

        ydk::YLeaf tcpconnlocaladdress; //type: string
        ydk::YLeaf tcpconnlocalport; //type: int32
        ydk::YLeaf tcpconnremaddress; //type: string
        ydk::YLeaf tcpconnremport; //type: int32
        ydk::YLeaf tcpconnstate; //type: Tcpconnstate
        class Tcpconnstate;

}; // RFC1213MIB::Tcpconntable::Tcpconnentry


class RFC1213MIB::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

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

        ydk::YLeaf udpindatagrams; //type: uint32
        ydk::YLeaf udpnoports; //type: uint32
        ydk::YLeaf udpinerrors; //type: uint32
        ydk::YLeaf udpoutdatagrams; //type: uint32

}; // RFC1213MIB::Udp


class RFC1213MIB::Udptable : public ydk::Entity
{
    public:
        Udptable();
        ~Udptable();

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

        class Udpentry; //type: RFC1213MIB::Udptable::Udpentry

        std::vector<std::shared_ptr<cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Udptable::Udpentry> > udpentry;
        
}; // RFC1213MIB::Udptable


class RFC1213MIB::Udptable::Udpentry : public ydk::Entity
{
    public:
        Udpentry();
        ~Udpentry();

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

        ydk::YLeaf udplocaladdress; //type: string
        ydk::YLeaf udplocalport; //type: int32

}; // RFC1213MIB::Udptable::Udpentry

class RFC1213MIB::Egpneightable::Egpneighentry::Egpneighstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf acquisition;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf cease;

};

class RFC1213MIB::Egpneightable::Egpneighentry::Egpneighmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class RFC1213MIB::Egpneightable::Egpneighentry::Egpneigheventtrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf stop;

};

class RFC1213MIB::Iftable::Ifentry::Ifadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class RFC1213MIB::Iftable::Ifentry::Ifoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dormant;

};

class RFC1213MIB::Ip::Ipforwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf not_forwarding;

};

class RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf static_;

};

class RFC1213MIB::Iproutetable::Iprouteentry::Iproutetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf indirect;

};

class RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf netmgmt;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf ggp;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf is_is;
        static const ydk::Enum::YLeaf es_is;
        static const ydk::Enum::YLeaf ciscoIgrp;
        static const ydk::Enum::YLeaf bbnSpfIgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;

};

class RFC1213MIB::Snmp::Snmpenableauthentraps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class RFC1213MIB::Tcp::Tcprtoalgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf constant;
        static const ydk::Enum::YLeaf rsre;
        static const ydk::Enum::YLeaf vanj;
        static const ydk::Enum::YLeaf rfc2988;

};

class RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf synSent;
        static const ydk::Enum::YLeaf synReceived;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf finWait1;
        static const ydk::Enum::YLeaf finWait2;
        static const ydk::Enum::YLeaf closeWait;
        static const ydk::Enum::YLeaf lastAck;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf timeWait;
        static const ydk::Enum::YLeaf deleteTCB;

};


}
}

#endif /* _RFC1213_MIB_ */

