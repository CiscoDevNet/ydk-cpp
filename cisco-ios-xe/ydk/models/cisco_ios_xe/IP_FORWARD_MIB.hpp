#ifndef _IP_FORWARD_MIB_
#define _IP_FORWARD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace IP_FORWARD_MIB {

class IpForwardMib : public Entity
{
    public:
        IpForwardMib();
        ~IpForwardMib();

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

        class Ipforward; //type: IpForwardMib::Ipforward
        class Ipforwardtable; //type: IpForwardMib::Ipforwardtable
        class Ipcidrroutetable; //type: IpForwardMib::Ipcidrroutetable

        std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipcidrroutetable> ipcidrroutetable;
        std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipforward> ipforward;
        std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipforwardtable> ipforwardtable;
        
}; // IpForwardMib


class IpForwardMib::Ipforward : public Entity
{
    public:
        Ipforward();
        ~Ipforward();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipforwardnumber; //type: uint32
        YLeaf ipcidrroutenumber; //type: uint32

}; // IpForwardMib::Ipforward


class IpForwardMib::Ipforwardtable : public Entity
{
    public:
        Ipforwardtable();
        ~Ipforwardtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipforwardentry; //type: IpForwardMib::Ipforwardtable::Ipforwardentry

        std::vector<std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipforwardtable::Ipforwardentry> > ipforwardentry;
        
}; // IpForwardMib::Ipforwardtable


class IpForwardMib::Ipforwardtable::Ipforwardentry : public Entity
{
    public:
        Ipforwardentry();
        ~Ipforwardentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipforwarddest; //type: string
        YLeaf ipforwardproto; //type: IpforwardprotoEnum
        YLeaf ipforwardpolicy; //type: int32
        YLeaf ipforwardnexthop; //type: string
        YLeaf ipforwardmask; //type: string
        YLeaf ipforwardifindex; //type: int32
        YLeaf ipforwardtype; //type: IpforwardtypeEnum
        YLeaf ipforwardage; //type: int32
        YLeaf ipforwardinfo; //type: string
        YLeaf ipforwardnexthopas; //type: int32
        YLeaf ipforwardmetric1; //type: int32
        YLeaf ipforwardmetric2; //type: int32
        YLeaf ipforwardmetric3; //type: int32
        YLeaf ipforwardmetric4; //type: int32
        YLeaf ipforwardmetric5; //type: int32
        class IpforwardprotoEnum;
        class IpforwardtypeEnum;

}; // IpForwardMib::Ipforwardtable::Ipforwardentry


class IpForwardMib::Ipcidrroutetable : public Entity
{
    public:
        Ipcidrroutetable();
        ~Ipcidrroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipcidrrouteentry; //type: IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry

        std::vector<std::shared_ptr<IP_FORWARD_MIB::IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry> > ipcidrrouteentry;
        
}; // IpForwardMib::Ipcidrroutetable


class IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry : public Entity
{
    public:
        Ipcidrrouteentry();
        ~Ipcidrrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipcidrroutedest; //type: string
        YLeaf ipcidrroutemask; //type: string
        YLeaf ipcidrroutetos; //type: int32
        YLeaf ipcidrroutenexthop; //type: string
        YLeaf ipcidrrouteifindex; //type: int32
        YLeaf ipcidrroutetype; //type: IpcidrroutetypeEnum
        YLeaf ipcidrrouteproto; //type: IpcidrrouteprotoEnum
        YLeaf ipcidrrouteage; //type: int32
        YLeaf ipcidrrouteinfo; //type: string
        YLeaf ipcidrroutenexthopas; //type: int32
        YLeaf ipcidrroutemetric1; //type: int32
        YLeaf ipcidrroutemetric2; //type: int32
        YLeaf ipcidrroutemetric3; //type: int32
        YLeaf ipcidrroutemetric4; //type: int32
        YLeaf ipcidrroutemetric5; //type: int32
        YLeaf ipcidrroutestatus; //type: RowstatusEnum
        class IpcidrroutetypeEnum;
        class IpcidrrouteprotoEnum;

}; // IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry

class IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf local;
        static const Enum::YLeaf netmgmt;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf ggp;
        static const Enum::YLeaf hello;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf is_is;
        static const Enum::YLeaf es_is;
        static const Enum::YLeaf ciscoIgrp;
        static const Enum::YLeaf bbnSpfIgp;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf idpr;

};

class IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};

class IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrroutetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf reject;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};

class IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf local;
        static const Enum::YLeaf netmgmt;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf ggp;
        static const Enum::YLeaf hello;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf isIs;
        static const Enum::YLeaf esIs;
        static const Enum::YLeaf ciscoIgrp;
        static const Enum::YLeaf bbnSpfIgp;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf idpr;
        static const Enum::YLeaf ciscoEigrp;

};


}
}

#endif /* _IP_FORWARD_MIB_ */

