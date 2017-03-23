#ifndef _CISCO_IOS_XR_SNMP_AGENT_CFG_1_
#define _CISCO_IOS_XR_SNMP_AGENT_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_snmp_agent_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_snmp_agent_cfg {


class Mib::InterfaceMib::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf link_up_down; //type: boolean
        YLeaf index_persistence; //type: boolean



}; // Mib::InterfaceMib::Interfaces::Interface


class Mib::InterfaceMib::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_ietf; //type: empty



}; // Mib::InterfaceMib::Notification


class Mib::InterfaceMib::Subsets : public Entity
{
    public:
        Subsets();
        ~Subsets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Subset; //type: Mib::InterfaceMib::Subsets::Subset

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset> > subset;


}; // Mib::InterfaceMib::Subsets


class Mib::InterfaceMib::Subsets::Subset : public Entity
{
    public:
        Subset();
        ~Subset();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subset_id; //type: uint32

        class LinkUpDown; //type: Mib::InterfaceMib::Subsets::Subset::LinkUpDown

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset::LinkUpDown> link_up_down;


}; // Mib::InterfaceMib::Subsets::Subset


class Mib::InterfaceMib::Subsets::Subset::LinkUpDown : public Entity
{
    public:
        LinkUpDown();
        ~LinkUpDown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf regular_expression; //type: string



}; // Mib::InterfaceMib::Subsets::Subset::LinkUpDown


class Mib::MplsTeMib : public Entity
{
    public:
        MplsTeMib();
        ~MplsTeMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cache_garbage_collect_timer; //type: uint32
        YLeaf cache_timer; //type: uint32



}; // Mib::MplsTeMib


class Mib::MplsP2MpMib : public Entity
{
    public:
        MplsP2MpMib();
        ~MplsP2MpMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cache_timer; //type: uint32



}; // Mib::MplsP2MpMib


class Mib::MplsTeExtStdMib : public Entity
{
    public:
        MplsTeExtStdMib();
        ~MplsTeExtStdMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cache_timer; //type: uint32



}; // Mib::MplsTeExtStdMib


class Mib::MplsTeExtMib : public Entity
{
    public:
        MplsTeExtMib();
        ~MplsTeExtMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cache_timer; //type: uint32



}; // Mib::MplsTeExtMib


class Mib::MplsFrrMib : public Entity
{
    public:
        MplsFrrMib();
        ~MplsFrrMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cache_timer; //type: uint32



}; // Mib::MplsFrrMib


class Mib::CbQosmib : public Entity
{
    public:
        CbQosmib();
        ~CbQosmib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface_stats; //type: empty
        YLeaf persist; //type: empty

        class Cache; //type: Mib::CbQosmib::Cache

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib::Cache> cache;


}; // Mib::CbQosmib


class Mib::CbQosmib::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf refresh_time; //type: uint32
        YLeaf service_policy_count; //type: uint32



}; // Mib::CbQosmib::Cache


class Mib::EntityMib : public Entity
{
    public:
        EntityMib();
        ~EntityMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entity_index_persistence; //type: empty



}; // Mib::EntityMib


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_CFG_1_ */

