#ifndef _CISCO_IOS_XR_IP_IEP_CFG_
#define _CISCO_IOS_XR_IP_IEP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_iep_cfg {

class IpExplicitPaths : public Entity
{
    public:
        IpExplicitPaths();
        ~IpExplicitPaths();

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

        class Paths; //type: IpExplicitPaths::Paths

        std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths> paths;
        
}; // IpExplicitPaths


class IpExplicitPaths::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Path; //type: IpExplicitPaths::Paths::Path

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path> > path;
        
}; // IpExplicitPaths::Paths


class IpExplicitPaths::Paths::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: IpIepPathEnum
        class Name; //type: IpExplicitPaths::Paths::Path::Name
        class Identifier; //type: IpExplicitPaths::Paths::Path::Identifier

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier> > identifier;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name> > name;
        
}; // IpExplicitPaths::Paths::Path


class IpExplicitPaths::Paths::Path::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf disable; //type: empty
        class Hops; //type: IpExplicitPaths::Paths::Path::Name::Hops

        std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name::Hops> hops;
        
}; // IpExplicitPaths::Paths::Path::Name


class IpExplicitPaths::Paths::Path::Name::Hops : public Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hop; //type: IpExplicitPaths::Paths::Path::Name::Hops::Hop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name::Hops::Hop> > hop;
        
}; // IpExplicitPaths::Paths::Path::Name::Hops


class IpExplicitPaths::Paths::Path::Name::Hops::Hop : public Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_number; //type: uint32
        YLeaf ip_address; //type: string
        YLeaf hop_type; //type: IpIepHopEnum
        YLeaf if_index; //type: int32
        YLeaf num_type; //type: IpIepNumEnum
        YLeaf mpls_label; //type: int32

}; // IpExplicitPaths::Paths::Path::Name::Hops::Hop


class IpExplicitPaths::Paths::Path::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf disable; //type: empty
        class Hops; //type: IpExplicitPaths::Paths::Path::Identifier::Hops

        std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops> hops;
        
}; // IpExplicitPaths::Paths::Path::Identifier


class IpExplicitPaths::Paths::Path::Identifier::Hops : public Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hop; //type: IpExplicitPaths::Paths::Path::Identifier::Hops::Hop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops::Hop> > hop;
        
}; // IpExplicitPaths::Paths::Path::Identifier::Hops


class IpExplicitPaths::Paths::Path::Identifier::Hops::Hop : public Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_number; //type: uint32
        YLeaf ip_address; //type: string
        YLeaf hop_type; //type: IpIepHopEnum
        YLeaf if_index; //type: int32
        YLeaf num_type; //type: IpIepNumEnum
        YLeaf mpls_label; //type: int32

}; // IpExplicitPaths::Paths::Path::Identifier::Hops::Hop

class IpIepPathEnum : public Enum
{
    public:
        static const Enum::YLeaf identifier;
        static const Enum::YLeaf name;

};

class IpIepHopEnum : public Enum
{
    public:
        static const Enum::YLeaf next_strict;
        static const Enum::YLeaf next_loose;
        static const Enum::YLeaf exclude;
        static const Enum::YLeaf exclude_srlg;
        static const Enum::YLeaf next_label;

};

class IpIepNumEnum : public Enum
{
    public:
        static const Enum::YLeaf unnumbered;
        static const Enum::YLeaf numbered;

};


}
}

#endif /* _CISCO_IOS_XR_IP_IEP_CFG_ */

