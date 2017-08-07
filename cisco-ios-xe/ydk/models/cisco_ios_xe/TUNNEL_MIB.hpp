#ifndef _TUNNEL_MIB_
#define _TUNNEL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace TUNNEL_MIB {

class TunnelMib : public ydk::Entity
{
    public:
        TunnelMib();
        ~TunnelMib();

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

        class Tunneliftable; //type: TunnelMib::Tunneliftable
        class Tunnelconfigtable; //type: TunnelMib::Tunnelconfigtable
        class Tunnelinetconfigtable; //type: TunnelMib::Tunnelinetconfigtable

        std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelconfigtable> tunnelconfigtable;
        std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunneliftable> tunneliftable;
        std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelinetconfigtable> tunnelinetconfigtable;
        
}; // TunnelMib


class TunnelMib::Tunneliftable : public ydk::Entity
{
    public:
        Tunneliftable();
        ~Tunneliftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tunnelifentry; //type: TunnelMib::Tunneliftable::Tunnelifentry

        std::vector<std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunneliftable::Tunnelifentry> > tunnelifentry;
        
}; // TunnelMib::Tunneliftable


class TunnelMib::Tunneliftable::Tunnelifentry : public ydk::Entity
{
    public:
        Tunnelifentry();
        ~Tunnelifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf tunneliflocaladdress; //type: string
        ydk::YLeaf tunnelifremoteaddress; //type: string
        ydk::YLeaf tunnelifencapsmethod; //type: Ianatunneltype
        ydk::YLeaf tunnelifhoplimit; //type: int32
        ydk::YLeaf tunnelifsecurity; //type: Tunnelifsecurity
        ydk::YLeaf tunneliftos; //type: int32
        ydk::YLeaf tunnelifflowlabel; //type: int32
        ydk::YLeaf tunnelifaddresstype; //type: Inetaddresstype
        ydk::YLeaf tunneliflocalinetaddress; //type: binary
        ydk::YLeaf tunnelifremoteinetaddress; //type: binary
        ydk::YLeaf tunnelifencapslimit; //type: int32
        class Tunnelifsecurity;

}; // TunnelMib::Tunneliftable::Tunnelifentry


class TunnelMib::Tunnelconfigtable : public ydk::Entity
{
    public:
        Tunnelconfigtable();
        ~Tunnelconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tunnelconfigentry; //type: TunnelMib::Tunnelconfigtable::Tunnelconfigentry

        std::vector<std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelconfigtable::Tunnelconfigentry> > tunnelconfigentry;
        
}; // TunnelMib::Tunnelconfigtable


class TunnelMib::Tunnelconfigtable::Tunnelconfigentry : public ydk::Entity
{
    public:
        Tunnelconfigentry();
        ~Tunnelconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnelconfiglocaladdress; //type: string
        ydk::YLeaf tunnelconfigremoteaddress; //type: string
        ydk::YLeaf tunnelconfigencapsmethod; //type: Ianatunneltype
        ydk::YLeaf tunnelconfigid; //type: int32
        ydk::YLeaf tunnelconfigifindex; //type: int32
        ydk::YLeaf tunnelconfigstatus; //type: Rowstatus

}; // TunnelMib::Tunnelconfigtable::Tunnelconfigentry


class TunnelMib::Tunnelinetconfigtable : public ydk::Entity
{
    public:
        Tunnelinetconfigtable();
        ~Tunnelinetconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tunnelinetconfigentry; //type: TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry

        std::vector<std::shared_ptr<TUNNEL_MIB::TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry> > tunnelinetconfigentry;
        
}; // TunnelMib::Tunnelinetconfigtable


class TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry : public ydk::Entity
{
    public:
        Tunnelinetconfigentry();
        ~Tunnelinetconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnelinetconfigaddresstype; //type: Inetaddresstype
        ydk::YLeaf tunnelinetconfiglocaladdress; //type: binary
        ydk::YLeaf tunnelinetconfigremoteaddress; //type: binary
        ydk::YLeaf tunnelinetconfigencapsmethod; //type: Ianatunneltype
        ydk::YLeaf tunnelinetconfigid; //type: int32
        ydk::YLeaf tunnelinetconfigifindex; //type: int32
        ydk::YLeaf tunnelinetconfigstatus; //type: Rowstatus
        ydk::YLeaf tunnelinetconfigstoragetype; //type: Storagetype

}; // TunnelMib::Tunnelinetconfigtable::Tunnelinetconfigentry

class TunnelMib::Tunneliftable::Tunnelifentry::Tunnelifsecurity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipsec;
        static const ydk::Enum::YLeaf other;

};


}
}

#endif /* _TUNNEL_MIB_ */

