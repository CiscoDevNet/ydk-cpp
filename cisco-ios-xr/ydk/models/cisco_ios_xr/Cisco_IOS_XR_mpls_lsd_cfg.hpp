#ifndef _CISCO_IOS_XR_MPLS_LSD_CFG_
#define _CISCO_IOS_XR_MPLS_LSD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_cfg {

class MplsLsd : public Entity
{
    public:
        MplsLsd();
        ~MplsLsd();

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

        YLeaf app_reg_delay_disable; //type: empty
        YLeaf mpls_entropy_label; //type: empty
        YLeaf mpls_ip_ttl_propagate_disable; //type: MplsIpTtlPropagateDisableEnum
        class Ipv6; //type: MplsLsd::Ipv6
        class Ipv4; //type: MplsLsd::Ipv4
        class LabelDatabases; //type: MplsLsd::LabelDatabases

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases> label_databases;
        
}; // MplsLsd


class MplsLsd::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ttl_expiration_pop; //type: uint32

}; // MplsLsd::Ipv6


class MplsLsd::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ttl_expiration_pop; //type: uint32

}; // MplsLsd::Ipv4


class MplsLsd::LabelDatabases : public Entity
{
    public:
        LabelDatabases();
        ~LabelDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelDatabase; //type: MplsLsd::LabelDatabases::LabelDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases::LabelDatabase> > label_database;
        
}; // MplsLsd::LabelDatabases


class MplsLsd::LabelDatabases::LabelDatabase : public Entity
{
    public:
        LabelDatabase();
        ~LabelDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_database_id; //type: uint32
        class LabelRange; //type: MplsLsd::LabelDatabases::LabelDatabase::LabelRange

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases::LabelDatabase::LabelRange> label_range;
        
}; // MplsLsd::LabelDatabases::LabelDatabase


class MplsLsd::LabelDatabases::LabelDatabase::LabelRange : public Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minvalue; //type: uint32
        YLeaf max_value; //type: uint32
        YLeaf min_static_value; //type: uint32
        YLeaf max_static_value; //type: uint32

}; // MplsLsd::LabelDatabases::LabelDatabase::LabelRange

class MplsIpTtlPropagateDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf forward;
        static const Enum::YLeaf local;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_CFG_ */

