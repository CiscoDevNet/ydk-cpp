#ifndef _IP_FORWARD_MIB_
#define _IP_FORWARD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IP_FORWARD_MIB {

class IpForwardMib : public ydk::Entity
{
    public:
        IpForwardMib();
        ~IpForwardMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Ipforward; //type: IpForwardMib::Ipforward
        class Ipforwardtable; //type: IpForwardMib::Ipforwardtable
        class Ipcidrroutetable; //type: IpForwardMib::Ipcidrroutetable

        std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipcidrroutetable> ipcidrroutetable;
        std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipforward> ipforward;
        std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipforwardtable> ipforwardtable;
        
}; // IpForwardMib


class IpForwardMib::Ipforward : public ydk::Entity
{
    public:
        Ipforward();
        ~Ipforward();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipforwardnumber; //type: uint32
        ydk::YLeaf ipcidrroutenumber; //type: uint32

}; // IpForwardMib::Ipforward


class IpForwardMib::Ipforwardtable : public ydk::Entity
{
    public:
        Ipforwardtable();
        ~Ipforwardtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipforwardentry; //type: IpForwardMib::Ipforwardtable::Ipforwardentry

        std::vector<std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipforwardtable::Ipforwardentry> > ipforwardentry;
        
}; // IpForwardMib::Ipforwardtable


class IpForwardMib::Ipforwardtable::Ipforwardentry : public ydk::Entity
{
    public:
        Ipforwardentry();
        ~Ipforwardentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipforwarddest; //type: string
        ydk::YLeaf ipforwardproto; //type: Ipforwardproto
        ydk::YLeaf ipforwardpolicy; //type: int32
        ydk::YLeaf ipforwardnexthop; //type: string
        ydk::YLeaf ipforwardmask; //type: string
        ydk::YLeaf ipforwardifindex; //type: int32
        ydk::YLeaf ipforwardtype; //type: Ipforwardtype
        ydk::YLeaf ipforwardage; //type: int32
        ydk::YLeaf ipforwardinfo; //type: string
        ydk::YLeaf ipforwardnexthopas; //type: int32
        ydk::YLeaf ipforwardmetric1; //type: int32
        ydk::YLeaf ipforwardmetric2; //type: int32
        ydk::YLeaf ipforwardmetric3; //type: int32
        ydk::YLeaf ipforwardmetric4; //type: int32
        ydk::YLeaf ipforwardmetric5; //type: int32
        class Ipforwardproto;
        class Ipforwardtype;

}; // IpForwardMib::Ipforwardtable::Ipforwardentry


class IpForwardMib::Ipcidrroutetable : public ydk::Entity
{
    public:
        Ipcidrroutetable();
        ~Ipcidrroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipcidrrouteentry; //type: IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry

        std::vector<std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry> > ipcidrrouteentry;
        
}; // IpForwardMib::Ipcidrroutetable


class IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry : public ydk::Entity
{
    public:
        Ipcidrrouteentry();
        ~Ipcidrrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipcidrroutedest; //type: string
        ydk::YLeaf ipcidrroutemask; //type: string
        ydk::YLeaf ipcidrroutetos; //type: int32
        ydk::YLeaf ipcidrroutenexthop; //type: string
        ydk::YLeaf ipcidrrouteifindex; //type: int32
        ydk::YLeaf ipcidrroutetype; //type: Ipcidrroutetype
        ydk::YLeaf ipcidrrouteproto; //type: Ipcidrrouteproto
        ydk::YLeaf ipcidrrouteage; //type: int32
        ydk::YLeaf ipcidrrouteinfo; //type: string
        ydk::YLeaf ipcidrroutenexthopas; //type: int32
        ydk::YLeaf ipcidrroutemetric1; //type: int32
        ydk::YLeaf ipcidrroutemetric2; //type: int32
        ydk::YLeaf ipcidrroutemetric3; //type: int32
        ydk::YLeaf ipcidrroutemetric4; //type: int32
        ydk::YLeaf ipcidrroutemetric5; //type: int32
        ydk::YLeaf ipcidrroutestatus; //type: Rowstatus
        class Ipcidrroutetype;
        class Ipcidrrouteproto;

}; // IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry

class IpForwardMib::Ipforwardtable::Ipforwardentry::Ipforwardproto : public ydk::Enum
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
        static const ydk::Enum::YLeaf idpr;

};

class IpForwardMib::Ipforwardtable::Ipforwardentry::Ipforwardtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::Ipcidrroutetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::Ipcidrrouteproto : public ydk::Enum
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
        static const ydk::Enum::YLeaf isIs;
        static const ydk::Enum::YLeaf esIs;
        static const ydk::Enum::YLeaf ciscoIgrp;
        static const ydk::Enum::YLeaf bbnSpfIgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf idpr;
        static const ydk::Enum::YLeaf ciscoEigrp;

};


}
}

#endif /* _IP_FORWARD_MIB_ */

