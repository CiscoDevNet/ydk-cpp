#ifndef _TUNNEL_MIB_
#define _TUNNEL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace TUNNEL_MIB {

class TunnelMib : public Entity
{
    public:
        TunnelMib();
        ~TunnelMib();

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

        class Tunneliftable; //type: TunnelMib::Tunneliftable
        class Tunnelconfigtable; //type: TunnelMib::Tunnelconfigtable
        class Tunnelinetconfigtable; //type: TunnelMib::Tunnelinetconfigtable

        std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelconfigtable> tunnelconfigtable;
        std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunneliftable> tunneliftable;
        std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelinetconfigtable> tunnelinetconfigtable;
        
}; // TunnelMib


class TunnelMib::Tunneliftable : public Entity
{
    public:
        Tunneliftable();
        ~Tunneliftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tunnelifentry; //type: TunnelMib::Tunneliftable::Tunnelifentry

        std::vector<std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunneliftable::Tunnelifentry> > tunnelifentry;
        
}; // TunnelMib::Tunneliftable


class TunnelMib::Tunneliftable::Tunnelifentry : public Entity
{
    public:
        Tunnelifentry();
        ~Tunnelifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf tunneliflocaladdress; //type: string
        YLeaf tunnelifremoteaddress; //type: string
        YLeaf tunnelifencapsmethod; //type: IanatunneltypeEnum
        YLeaf tunnelifhoplimit; //type: int32
        YLeaf tunnelifsecurity; //type: TunnelifsecurityEnum
        YLeaf tunneliftos; //type: int32
        YLeaf tunnelifflowlabel; //type: int32
        YLeaf tunnelifaddresstype; //type: InetaddresstypeEnum
        YLeaf tunneliflocalinetaddress; //type: binary
        YLeaf tunnelifremoteinetaddress; //type: binary
        YLeaf tunnelifencapslimit; //type: int32
        class TunnelifsecurityEnum;

}; // TunnelMib::Tunneliftable::Tunnelifentry


class TunnelMib::Tunnelconfigtable : public Entity
{
    public:
        Tunnelconfigtable();
        ~Tunnelconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tunnelconfigentry; //type: TunnelMib::Tunnelconfigtable::Tunnelconfigentry

        std::vector<std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelconfigtable::Tunnelconfigentry> > tunnelconfigentry;
        
}; // TunnelMib::Tunnelconfigtable


class TunnelMib::Tunnelconfigtable::Tunnelconfigentry : public Entity
{
    public:
        Tunnelconfigentry();
        ~Tunnelconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnelconfiglocaladdress; //type: string
        YLeaf tunnelconfigremoteaddress; //type: string
        YLeaf tunnelconfigencapsmethod; //type: IanatunneltypeEnum
        YLeaf tunnelconfigid; //type: int32
        YLeaf tunnelconfigifindex; //type: int32
        YLeaf tunnelconfigstatus; //type: RowstatusEnum

}; // TunnelMib::Tunnelconfigtable::Tunnelconfigentry


class TunnelMib::Tunnelinetconfigtable : public Entity
{
    public:
        Tunnelinetconfigtable();
        ~Tunnelinetconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tunnelinetconfigentry; //type: TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry

        std::vector<std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry> > tunnelinetconfigentry;
        
}; // TunnelMib::Tunnelinetconfigtable


class TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry : public Entity
{
    public:
        Tunnelinetconfigentry();
        ~Tunnelinetconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnelinetconfigaddresstype; //type: InetaddresstypeEnum
        YLeaf tunnelinetconfiglocaladdress; //type: binary
        YLeaf tunnelinetconfigremoteaddress; //type: binary
        YLeaf tunnelinetconfigencapsmethod; //type: IanatunneltypeEnum
        YLeaf tunnelinetconfigid; //type: int32
        YLeaf tunnelinetconfigifindex; //type: int32
        YLeaf tunnelinetconfigstatus; //type: RowstatusEnum
        YLeaf tunnelinetconfigstoragetype; //type: StoragetypeEnum

}; // TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry

class TunnelMib::Tunneliftable::Tunnelifentry::TunnelifsecurityEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipsec;
        static const Enum::YLeaf other;

};


}
}

#endif /* _TUNNEL_MIB_ */

