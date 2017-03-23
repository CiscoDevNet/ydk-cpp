#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_0_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {

class PimMa : public Entity
{
    public:
        PimMa();
        ~PimMa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Active; //type: PimMa::Active
        class Standby; //type: PimMa::Standby

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active> active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby> standby;


}; // PimMa


class PimMa::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceTable; //type: PimMa::Active::InterfaceTable
        class PimMaSummary; //type: PimMa::Active::PimMaSummary

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::PimMaSummary> pim_ma_summary;


}; // PimMa::Active


class PimMa::Active::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceByHandles; //type: PimMa::Active::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: PimMa::Active::InterfaceTable::InterfaceByNames

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames> interface_by_names;


}; // PimMa::Active::InterfaceTable


class PimMa::Active::InterfaceTable::InterfaceByHandles : public Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceByHandle; //type: PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;


}; // PimMa::Active::InterfaceTable::InterfaceByHandles


class PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: int32
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum

        class RpAddress; //type: PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;


}; // PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class PimMa::Active::InterfaceTable::InterfaceByNames : public Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceByName; //type: PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;


}; // PimMa::Active::InterfaceTable::InterfaceByNames


class PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName : public Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum

        class RpAddress; //type: PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;


}; // PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName


class PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class PimMa::Active::PimMaSummary : public Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_im_connection_open; //type: boolean
        YLeaf is_netio_connection_open; //type: boolean
        YLeaf is_edm_connection_open; //type: boolean
        YLeaf is_standby_edm_connection_open; //type: boolean
        YLeaf encap_interface_count; //type: uint32
        YLeaf decap_interface_count; //type: uint32
        YLeaf mdt_interface_count; //type: uint32



}; // PimMa::Active::PimMaSummary


class PimMa::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceTable; //type: PimMa::Standby::InterfaceTable
        class PimMaSummary; //type: PimMa::Standby::PimMaSummary

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::PimMaSummary> pim_ma_summary;


}; // PimMa::Standby


class PimMa::Standby::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceByHandles; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: PimMa::Standby::InterfaceTable::InterfaceByNames

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames> interface_by_names;


}; // PimMa::Standby::InterfaceTable


class PimMa::Standby::InterfaceTable::InterfaceByHandles : public Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceByHandle; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;


}; // PimMa::Standby::InterfaceTable::InterfaceByHandles


class PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: int32
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum

        class RpAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;


}; // PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class PimMa::Standby::InterfaceTable::InterfaceByNames : public Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceByName; //type: PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;


}; // PimMa::Standby::InterfaceTable::InterfaceByNames


class PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName : public Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum

        class RpAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;


}; // PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName


class PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class PimMa::Standby::PimMaSummary : public Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_im_connection_open; //type: boolean
        YLeaf is_netio_connection_open; //type: boolean
        YLeaf is_edm_connection_open; //type: boolean
        YLeaf is_standby_edm_connection_open; //type: boolean
        YLeaf encap_interface_count; //type: uint32
        YLeaf decap_interface_count; //type: uint32
        YLeaf mdt_interface_count; //type: uint32



}; // PimMa::Standby::PimMaSummary

class Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Standby; //type: Pim::Standby
        class Active; //type: Pim::Active

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active> active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby> standby;


}; // Pim


class Pim::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DefaultContext; //type: Pim::Standby::DefaultContext
        class Process; //type: Pim::Standby::Process
        class Vrfs; //type: Pim::Standby::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext> default_context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Process> process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs> vrfs;


}; // Pim::Standby


class Pim::Standby::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalInterfaces; //type: Pim::Standby::DefaultContext::GlobalInterfaces
        class IfrsInterfaces; //type: Pim::Standby::DefaultContext::IfrsInterfaces
        class Safs; //type: Pim::Standby::DefaultContext::Safs
        class InterfaceStatistics; //type: Pim::Standby::DefaultContext::InterfaceStatistics
        class TopologyRouteCount; //type: Pim::Standby::DefaultContext::TopologyRouteCount
        class JpStatistics; //type: Pim::Standby::DefaultContext::JpStatistics
        class MibDatabases; //type: Pim::Standby::DefaultContext::MibDatabases
        class GroupMapMatchRpfs; //type: Pim::Standby::DefaultContext::GroupMapMatchRpfs
        class NeighborOldFormats; //type: Pim::Standby::DefaultContext::NeighborOldFormats
        class IfrsSummary; //type: Pim::Standby::DefaultContext::IfrsSummary
        class Ranges; //type: Pim::Standby::DefaultContext::Ranges
        class InterfaceOldFormats; //type: Pim::Standby::DefaultContext::InterfaceOldFormats
        class Bsr; //type: Pim::Standby::DefaultContext::Bsr
        class RoutePolicy; //type: Pim::Standby::DefaultContext::RoutePolicy
        class RpfSummary; //type: Pim::Standby::DefaultContext::RpfSummary
        class Interfaces; //type: Pim::Standby::DefaultContext::Interfaces
        class NetIoTunnels; //type: Pim::Standby::DefaultContext::NetIoTunnels
        class BidirDfStates; //type: Pim::Standby::DefaultContext::BidirDfStates
        class Topologies; //type: Pim::Standby::DefaultContext::Topologies
        class BgpAfs; //type: Pim::Standby::DefaultContext::BgpAfs
        class AutoRp; //type: Pim::Standby::DefaultContext::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Pim::Standby::DefaultContext::GroupMapSources
        class TrafficCounters; //type: Pim::Standby::DefaultContext::TrafficCounters
        class GroupMapRpfs; //type: Pim::Standby::DefaultContext::GroupMapRpfs
        class Summary; //type: Pim::Standby::DefaultContext::Summary
        class Gre; //type: Pim::Standby::DefaultContext::Gre
        class BidirDfWinners; //type: Pim::Standby::DefaultContext::BidirDfWinners
        class TableContexts; //type: Pim::Standby::DefaultContext::TableContexts
        class NeighborSummaries; //type: Pim::Standby::DefaultContext::NeighborSummaries
        class Context; //type: Pim::Standby::DefaultContext::Context
        class TopologyEntryFlagRouteCounts; //type: Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Pim::Standby::DefaultContext::RpfRedirect
        class Tunnels; //type: Pim::Standby::DefaultContext::Tunnels
        class MulticastStaticRoutes; //type: Pim::Standby::DefaultContext::MulticastStaticRoutes
        class GroupMapMatchSources; //type: Pim::Standby::DefaultContext::GroupMapMatchSources
        class Neighbors; //type: Pim::Standby::DefaultContext::Neighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::AutoRp> auto_rp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BgpAfs> bgp_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BidirDfStates> bidir_df_states;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Context> context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GlobalInterfaces> global_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre> gre;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchRpfs> group_map_match_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchSources> group_map_match_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapSources> group_map_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::IfrsSummary> ifrs_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::InterfaceStatistics> interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::JpStatistics> jp_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MibDatabases> mib_databases;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RoutePolicy> route_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect> rpf_redirect;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfSummary> rpf_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs> safs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TableContexts> table_contexts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies> topologies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyRouteCount> topology_route_count;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TrafficCounters> traffic_counters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Tunnels> tunnels;


}; // Pim::Standby::DefaultContext


class Pim::Standby::DefaultContext::GlobalInterfaces : public Entity
{
    public:
        GlobalInterfaces();
        ~GlobalInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalInterface; //type: Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface> > global_interface;


}; // Pim::Standby::DefaultContext::GlobalInterfaces


class Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface : public Entity
{
    public:
        GlobalInterface();
        ~GlobalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress
        class InterfaceAddress; //type: Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress> > interface_address;


}; // Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface


class Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress


class Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress


class Pim::Standby::DefaultContext::IfrsInterfaces : public Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IfrsInterface; //type: Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;


}; // Pim::Standby::DefaultContext::IfrsInterfaces


class Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface : public Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress
        class InterfaceAddress; //type: Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress> > interface_address;


}; // Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface


class Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress


class Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress


class Pim::Standby::DefaultContext::Safs : public Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Saf; //type: Pim::Standby::DefaultContext::Safs::Saf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf> > saf;


}; // Pim::Standby::DefaultContext::Safs


class Pim::Standby::DefaultContext::Safs::Saf : public Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf saf_name; //type: PimSafiEnum
        YLeaf topology_name; //type: string

        class RpfHashSourceGroups; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups
        class RpfHashSources; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources
        class Rpfs; //type: Pim::Standby::DefaultContext::Safs::Saf::Rpfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups> rpf_hash_source_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources> rpf_hash_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::Rpfs> rpfs;


}; // Pim::Standby::DefaultContext::Safs::Saf


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups : public Entity
{
    public:
        RpfHashSourceGroups();
        ~RpfHashSourceGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpfHashSourceGroup; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup> > rpf_hash_source_group;


}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup : public Entity
{
    public:
        RpfHashSourceGroup();
        ~RpfHashSourceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf mask_length; //type: int32
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string

        class NextHopAddress; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress
        class SecondaryNextHopAddress; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress> secondary_next_hop_address;


}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources : public Entity
{
    public:
        RpfHashSources();
        ~RpfHashSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpfHashSource; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource> > rpf_hash_source;


}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource : public Entity
{
    public:
        RpfHashSource();
        ~RpfHashSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string

        class NextHopAddress; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress
        class SecondaryNextHopAddress; //type: Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress> secondary_next_hop_address;


}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress


class Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress


class Pim::Standby::DefaultContext::Safs::Saf::Rpfs : public Entity
{
    public:
        Rpfs();
        ~Rpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rpf; //type: Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf> > rpf;


}; // Pim::Standby::DefaultContext::Safs::Saf::Rpfs


class Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf registered_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf is_connected; //type: uint8
        YLeaf is_rpf_bgp_route; //type: boolean

        class RegisteredAddressXr; //type: Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr
        class RpfPath; //type: Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr> registered_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath> > rpf_path;


}; // Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf


class Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr : public Entity
{
    public:
        RegisteredAddressXr();
        ~RegisteredAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr


class Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_interface_name; //type: string
        YLeaf is_rpf_interface_disabled; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf is_via_mlsm; //type: boolean
        YLeaf is_connector_attribute_present; //type: boolean
        YLeaf connector; //type: string
        YLeaf extranet_vrf_name; //type: string

        class RpfNeighbor; //type: Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor
        class RpfNexthop; //type: Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop> rpf_nexthop;


}; // Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath


class Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public Entity
{
    public:
        RpfNexthop();
        ~RpfNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Pim::Standby::DefaultContext::InterfaceStatistics : public Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceStatistic; //type: Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic> > interface_statistic;


}; // Pim::Standby::DefaultContext::InterfaceStatistics


class Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic : public Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf input_hello; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf input_register; //type: uint32
        YLeaf output_register; //type: uint32
        YLeaf input_register_stop; //type: uint32
        YLeaf output_register_stop; //type: uint32
        YLeaf input_jp; //type: uint32
        YLeaf output_jp; //type: uint32
        YLeaf input_bsr_message; //type: uint32
        YLeaf output_bsr_message; //type: uint32
        YLeaf input_assert; //type: uint32
        YLeaf output_assert; //type: uint32
        YLeaf input_graft_message; //type: uint32
        YLeaf output_graft_message; //type: uint32
        YLeaf input_graft_ack_message; //type: uint32
        YLeaf output_graft_ack_message; //type: uint32
        YLeaf input_candidate_rp_advertisement; //type: uint32
        YLeaf output_candidate_rp_advertisement; //type: uint32
        YLeaf input_df_election; //type: uint32
        YLeaf output_df_election; //type: uint32
        YLeaf input_miscellaneous; //type: uint32



}; // Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic


class Pim::Standby::DefaultContext::TopologyRouteCount : public Entity
{
    public:
        TopologyRouteCount();
        ~TopologyRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean

        class GroupAddress; //type: Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress> group_address;


}; // Pim::Standby::DefaultContext::TopologyRouteCount


class Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress


class Pim::Standby::DefaultContext::JpStatistics : public Entity
{
    public:
        JpStatistics();
        ~JpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class JpStatistic; //type: Pim::Standby::DefaultContext::JpStatistics::JpStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::JpStatistics::JpStatistic> > jp_statistic;


}; // Pim::Standby::DefaultContext::JpStatistics


class Pim::Standby::DefaultContext::JpStatistics::JpStatistic : public Entity
{
    public:
        JpStatistic();
        ~JpStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf mtu; //type: uint32
        YLeaf transmitted; //type: uint32
        YLeaf transmitted100; //type: uint16
        YLeaf transmitted_1k; //type: uint16
        YLeaf transmitted_10k; //type: uint16
        YLeaf transmitted_50k; //type: uint16
        YLeaf received; //type: uint32
        YLeaf received100; //type: uint16
        YLeaf received_1k; //type: uint16
        YLeaf received_10k; //type: uint16
        YLeaf received_50k; //type: uint16



}; // Pim::Standby::DefaultContext::JpStatistics::JpStatistic


class Pim::Standby::DefaultContext::MibDatabases : public Entity
{
    public:
        MibDatabases();
        ~MibDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MibDatabase; //type: Pim::Standby::DefaultContext::MibDatabases::MibDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MibDatabases::MibDatabase> > mib_database;


}; // Pim::Standby::DefaultContext::MibDatabases


class Pim::Standby::DefaultContext::MibDatabases::MibDatabase : public Entity
{
    public:
        MibDatabase();
        ~MibDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf source_netmask; //type: int32
        YLeaf upstream_assert_timer; //type: int32
        YLeaf assert_metric; //type: uint32
        YLeaf assert_metric_preference; //type: uint32
        YLeaf assert_rpt_bit; //type: boolean
        YLeaf spt_bit; //type: boolean
        YLeaf rpf_mask; //type: uint32
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf bidirectional_route; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf protocol; //type: PimShowProtocolEnum

        class SourceAddressXr; //type: Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr
        class GroupAddressXr; //type: Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr
        class RpfNeighbor; //type: Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor
        class RpfRoot; //type: Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr> source_address_xr;


}; // Pim::Standby::DefaultContext::MibDatabases::MibDatabase


class Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr


class Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr


class Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor


class Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot : public Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot


class Pim::Standby::DefaultContext::GroupMapMatchRpfs : public Entity
{
    public:
        GroupMapMatchRpfs();
        ~GroupMapMatchRpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapMatchRpf; //type: Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf> > group_map_match_rpf;


}; // Pim::Standby::DefaultContext::GroupMapMatchRpfs


class Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf : public Entity
{
    public:
        GroupMapMatchRpf();
        ~GroupMapMatchRpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf are_we_rp; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string

        class RpfNeighbor; //type: Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor
        class GroupMapInformation; //type: Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor> rpf_neighbor;


}; // Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf


class Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor


class Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation


class Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix


class Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress


class Pim::Standby::DefaultContext::NeighborOldFormats : public Entity
{
    public:
        NeighborOldFormats();
        ~NeighborOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborOldFormat; //type: Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat> > neighbor_old_format;


}; // Pim::Standby::DefaultContext::NeighborOldFormats


class Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat : public Entity
{
    public:
        NeighborOldFormat();
        ~NeighborOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64
        YLeaf expiry_timer; //type: uint64
        YLeaf is_this_neighbor_us; //type: boolean
        YLeaf is_this_neighbor_dr; //type: boolean
        YLeaf is_dr_priority_capable; //type: boolean
        YLeaf dr_priority; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf is_ecmp_redirect_capable; //type: boolean
        YLeaf is_bfd_state; //type: boolean
        YLeaf propagation_delay; //type: uint16
        YLeaf override_interval; //type: uint16

        class NeighborAddressXr; //type: Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr> > neighbor_address_xr;


}; // Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat


class Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr


class Pim::Standby::DefaultContext::IfrsSummary : public Entity
{
    public:
        IfrsSummary();
        ~IfrsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_count; //type: uint32
        YLeaf configuration_count; //type: uint32



}; // Pim::Standby::DefaultContext::IfrsSummary


class Pim::Standby::DefaultContext::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Range; //type: Pim::Standby::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Ranges::Range> > range;


}; // Pim::Standby::DefaultContext::Ranges


class Pim::Standby::DefaultContext::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf client_xr; //type: PimShowRangeClientEnum
        YLeaf expires; //type: uint64

        class RpAddressXr; //type: Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Pim::Standby::DefaultContext::Ranges::Range::GroupRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Ranges::Range::GroupRange> > group_range;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation> source_of_information;


}; // Pim::Standby::DefaultContext::Ranges::Range


class Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr


class Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation


class Pim::Standby::DefaultContext::Ranges::Range::GroupRange : public Entity
{
    public:
        GroupRange();
        ~GroupRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64

        class Prefix; //type: Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;


}; // Pim::Standby::DefaultContext::Ranges::Range::GroupRange


class Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix


class Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation


class Pim::Standby::DefaultContext::InterfaceOldFormats : public Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceOldFormat; //type: Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;


}; // Pim::Standby::DefaultContext::InterfaceOldFormats


class Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat : public Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress
        class InterfaceAddress; //type: Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress> > interface_address;


}; // Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat


class Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress


class Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress


class Pim::Standby::DefaultContext::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpCaches; //type: Pim::Standby::DefaultContext::Bsr::RpCaches
        class CandidateRps; //type: Pim::Standby::DefaultContext::Bsr::CandidateRps
        class BsrElections; //type: Pim::Standby::DefaultContext::Bsr::BsrElections

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::BsrElections> bsr_elections;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::RpCaches> rp_caches;


}; // Pim::Standby::DefaultContext::Bsr


class Pim::Standby::DefaultContext::Bsr::RpCaches : public Entity
{
    public:
        RpCaches();
        ~RpCaches();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpCache; //type: Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache> > rp_cache;


}; // Pim::Standby::DefaultContext::Bsr::RpCaches


class Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache : public Entity
{
    public:
        RpCache();
        ~RpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_prefix; //type: string
        YLeaf group_prefix_length; //type: uint32
        YLeaf candidate_rp_group_count; //type: uint32

        class GroupPrefixXr; //type: Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;


}; // Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache


class Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr : public Entity
{
    public:
        GroupPrefixXr();
        ~GroupPrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr


class Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList : public Entity
{
    public:
        CandidateRpList();
        ~CandidateRpList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PimBsrCrpBag; //type: Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag> > pim_bsr_crp_bag;


}; // Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList


class Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public Entity
{
    public:
        PimBsrCrpBag();
        ~PimBsrCrpBag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate_rp_holdtime; //type: uint16
        YLeaf candidate_rp_priority; //type: uint8
        YLeaf candidate_rp_up_time; //type: uint16
        YLeaf candidate_rp_expires; //type: uint16
        YLeaf protocol; //type: PimShowProtocolEnum

        class CandidateRpAddress; //type: Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;


}; // Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


class Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress : public Entity
{
    public:
        CandidateRpAddress();
        ~CandidateRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress


class Pim::Standby::DefaultContext::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Pim::Standby::DefaultContext::Bsr::CandidateRps


class Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf candidate_rp_scope; //type: int32
        YLeaf crp_priority; //type: uint8
        YLeaf crp_holdtime; //type: uint16
        YLeaf candidate_rp_advance_interval; //type: uint16
        YLeaf candidate_rp_uptime; //type: uint16
        YLeaf acl_name; //type: string

        class CandidateRp_; //type: Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_
        class CrpAccess; //type: Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_> candidate_rp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess> > crp_access;


}; // Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp


class Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_ : public Entity
{
    public:
        CandidateRp_();
        ~CandidateRp_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_


class Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess : public Entity
{
    public:
        CrpAccess();
        ~CrpAccess();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf acl_name; //type: string



}; // Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess


class Pim::Standby::DefaultContext::Bsr::BsrElections : public Entity
{
    public:
        BsrElections();
        ~BsrElections();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BsrElection; //type: Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection> > bsr_election;


}; // Pim::Standby::DefaultContext::Bsr::BsrElections


class Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection : public Entity
{
    public:
        BsrElection();
        ~BsrElection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pim_scope; //type: int32
        YLeaf bsr_priority; //type: uint8
        YLeaf bsr_mask_length; //type: uint8
        YLeaf bsr_up_time; //type: uint16
        YLeaf bootstrap_timeout; //type: uint16
        YLeaf candidate_bsr_state; //type: uint32
        YLeaf bsr_election_state; //type: uint32
        YLeaf bsr_scope; //type: uint16
        YLeaf candidate_bsr_flag; //type: boolean
        YLeaf candidate_bsr_priority; //type: uint8
        YLeaf candidate_bsr_mask_length; //type: uint8

        class BsrAddress; //type: Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress
        class CandidateBsrAddress; //type: Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress> bsr_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress> candidate_bsr_address;


}; // Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection


class Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress : public Entity
{
    public:
        BsrAddress();
        ~BsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress


class Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress : public Entity
{
    public:
        CandidateBsrAddress();
        ~CandidateBsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress


class Pim::Standby::DefaultContext::RoutePolicy : public Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicyStatistics; //type: Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics
        class RoutePolicyTests; //type: Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics> route_policy_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests> route_policy_tests;


}; // Pim::Standby::DefaultContext::RoutePolicy


class Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics : public Entity
{
    public:
        RoutePolicyStatistics();
        ~RoutePolicyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf requests; //type: uint32
        YLeaf pass; //type: uint32
        YLeaf drop; //type: uint32
        YLeaf default_table; //type: uint32
        YLeaf any_table; //type: uint32



}; // Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics


class Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests : public Entity
{
    public:
        RoutePolicyTests();
        ~RoutePolicyTests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicyTest; //type: Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest> > route_policy_test;


}; // Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests


class Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest : public Entity
{
    public:
        RoutePolicyTest();
        ~RoutePolicyTest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf ext_comm; //type: string
        YLeaf policy_name; //type: string
        YLeaf extended_community_rt; //type: string
        YLeaf pass; //type: boolean
        YLeaf default_table; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf table_exists; //type: boolean
        YLeaf table_active; //type: boolean

        class SourceAddressXr; //type: Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr
        class GroupAddressXr; //type: Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr> source_address_xr;


}; // Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest


class Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr


class Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr


class Pim::Standby::DefaultContext::RpfSummary : public Entity
{
    public:
        RpfSummary();
        ~RpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_safi; //type: uint32
        YLeaf default_table_name; //type: string
        YLeaf is_mbgp_configured; //type: boolean
        YLeaf is_ospf_te_configured; //type: boolean
        YLeaf is_isis_te_configured; //type: boolean
        YLeaf is_isis_mtr_configured; //type: boolean
        YLeaf mo_frr_configured; //type: boolean
        YLeaf rib_mo_frr_configured; //type: boolean
        YLeaf rump_enabled; //type: boolean
        YLeaf rib_convergence_timeout; //type: uint32
        YLeaf rib_convergence_time_left; //type: uint32
        YLeaf is_multipath_enabled; //type: boolean
        YLeaf is_multipath_interface_hash_enabled; //type: boolean
        YLeaf is_multipath_source_hash_enabled; //type: boolean
        YLeaf is_multipath_source_next_hop_hash_enabled; //type: boolean
        YLeaf rpf_registrations; //type: uint32
        YLeaf is_rib_convergence; //type: boolean



}; // Pim::Standby::DefaultContext::RpfSummary


class Pim::Standby::DefaultContext::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Pim::Standby::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Interfaces::Interface> > interface;


}; // Pim::Standby::DefaultContext::Interfaces


class Pim::Standby::DefaultContext::Interfaces::Interface : public Entity
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
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress
        class InterfaceAddress; //type: Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress> > interface_address;


}; // Pim::Standby::DefaultContext::Interfaces::Interface


class Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress


class Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress


class Pim::Standby::DefaultContext::NetIoTunnels : public Entity
{
    public:
        NetIoTunnels();
        ~NetIoTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetIoTunnel; //type: Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel> > net_io_tunnel;


}; // Pim::Standby::DefaultContext::NetIoTunnels


class Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel : public Entity
{
    public:
        NetIoTunnel();
        ~NetIoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf vrf_name; //type: string

        class SourceAddress; //type: Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress
        class RpAddress; //type: Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress
        class SourceAddressNetio; //type: Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio> source_address_netio;


}; // Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel


class Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress


class Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress


class Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio : public Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio


class Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio : public Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio


class Pim::Standby::DefaultContext::BidirDfStates : public Entity
{
    public:
        BidirDfStates();
        ~BidirDfStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirDfState; //type: Pim::Standby::DefaultContext::BidirDfStates::BidirDfState

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BidirDfStates::BidirDfState> > bidir_df_state;


}; // Pim::Standby::DefaultContext::BidirDfStates


class Pim::Standby::DefaultContext::BidirDfStates::BidirDfState : public Entity
{
    public:
        BidirDfState();
        ~BidirDfState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf pim_interface_name; //type: string
        YLeaf election_state; //type: string
        YLeaf time_seconds; //type: uint64
        YLeaf time_nano_seconds; //type: uint64
        YLeaf our_metric; //type: uint32
        YLeaf our_metric_preference; //type: uint32

        class RpAddressXr; //type: Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr> rp_address_xr;


}; // Pim::Standby::DefaultContext::BidirDfStates::BidirDfState


class Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr


class Pim::Standby::DefaultContext::Topologies : public Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Topology; //type: Pim::Standby::DefaultContext::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology> > topology;


}; // Pim::Standby::DefaultContext::Topologies


class Pim::Standby::DefaultContext::Topologies::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf rpt; //type: int32
        YLeaf limit_reached; //type: boolean
        YLeaf low_memory; //type: boolean
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf wildcard; //type: boolean
        YLeaf rpt_xr; //type: boolean
        YLeaf spt; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf alive; //type: int32
        YLeaf register_received_timer; //type: int32
        YLeaf remote_source; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf secondary_rpf_interface_name; //type: string
        YLeaf connected; //type: boolean
        YLeaf proxy; //type: boolean
        YLeaf rpf_proxy_enabled; //type: boolean
        YLeaf mofrr_enabled; //type: boolean
        YLeaf rib_mo_frr_enabled; //type: boolean
        YLeaf jp_timer; //type: int32
        YLeaf jp_status; //type: int32
        YLeaf suppress_registers; //type: int32
        YLeaf assume_alive; //type: boolean
        YLeaf probe_alive; //type: boolean
        YLeaf really_alive; //type: boolean
        YLeaf inherit_alive; //type: boolean
        YLeaf inherit_spt; //type: boolean
        YLeaf signal_sources; //type: boolean
        YLeaf dont_check_connected; //type: boolean
        YLeaf register_received; //type: boolean
        YLeaf last_hop; //type: boolean
        YLeaf sending_registers; //type: boolean
        YLeaf sending_null_registers; //type: boolean
        YLeaf sa_sent; //type: boolean
        YLeaf sa_received; //type: boolean
        YLeaf sa_joined; //type: boolean
        YLeaf anycast_rp_match; //type: boolean
        YLeaf anycast_rp_route_target; //type: string
        YLeaf bgp_join; //type: boolean
        YLeaf bgpjp_time; //type: uint64
        YLeaf customer_routing_type; //type: int32
        YLeaf extranet_route; //type: boolean
        YLeaf mofrr_active; //type: boolean
        YLeaf mofrr_primary; //type: boolean
        YLeaf mofrr_backup; //type: boolean
        YLeaf vxlan; //type: boolean

        class GroupAddressXr; //type: Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Pim::Standby::DefaultContext::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress> orig_src_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface> > outgoing_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr> source_address_xr;


}; // Pim::Standby::DefaultContext::Topologies::Topology


class Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr


class Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr


class Pim::Standby::DefaultContext::Topologies::Topology::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::RpAddress


class Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor


class Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor : public Entity
{
    public:
        SecondaryRpfNeighbor();
        ~SecondaryRpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor


class Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot : public Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot


class Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress : public Entity
{
    public:
        ProxyAddress();
        ~ProxyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress


class Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress : public Entity
{
    public:
        OrigSrcAddress();
        ~OrigSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress


class Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface : public Entity
{
    public:
        OutgoingInterface();
        ~OutgoingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf bgp_c_mcast_prune_delay_timer; //type: uint64
        YLeaf jp_timer; //type: int32
        YLeaf jp_state; //type: int32
        YLeaf assert_timer; //type: int32
        YLeaf local_members; //type: int32
        YLeaf internal_interest_info; //type: int32
        YLeaf forwarding_state; //type: int32
        YLeaf immediate_state; //type: int32
        YLeaf last_hop; //type: boolean
        YLeaf mldp_inband_mdt; //type: boolean
        YLeaf mldp_stale; //type: boolean
        YLeaf sa_prune; //type: boolean
        YLeaf admin_boundary; //type: boolean
        YLeaf igmp_membership; //type: boolean
        YLeaf mdt_safi_join; //type: boolean
        YLeaf mvpn_safi_join; //type: boolean
        YLeaf local_mdt_join; //type: boolean
        YLeaf data_mdt_join; //type: boolean
        YLeaf mvp_nv6_safi_join; //type: boolean
        YLeaf bgp_c_mcast_join; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf extranet_interface; //type: boolean

        class AssertWinner; //type: Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;


}; // Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface


class Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner : public Entity
{
    public:
        AssertWinner();
        ~AssertWinner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner


class Pim::Standby::DefaultContext::BgpAfs : public Entity
{
    public:
        BgpAfs();
        ~BgpAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpAf; //type: Pim::Standby::DefaultContext::BgpAfs::BgpAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BgpAfs::BgpAf> > bgp_af;


}; // Pim::Standby::DefaultContext::BgpAfs


class Pim::Standby::DefaultContext::BgpAfs::BgpAf : public Entity
{
    public:
        BgpAf();
        ~BgpAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf route_distinguisher; //type: string
        YLeaf extranet_path_count; //type: uint32
        YLeaf is_bgp_added; //type: boolean

        class Source; //type: Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source
        class Group; //type: Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group
        class NextHop; //type: Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group> group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source> source;


}; // Pim::Standby::DefaultContext::BgpAfs::BgpAf


class Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source


class Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group


class Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop


class Pim::Standby::DefaultContext::AutoRp : public Entity
{
    public:
        AutoRp();
        ~AutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Pim::Standby::DefaultContext::AutoRp


class Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts : public Entity
{
    public:
        TopologyInterfaceFlagRouteCounts();
        ~TopologyInterfaceFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyInterfaceFlagRouteCount; //type: Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount> > topology_interface_flag_route_count;


}; // Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts


class Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public Entity
{
    public:
        TopologyInterfaceFlagRouteCount();
        ~TopologyInterfaceFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_flag; //type: PimTopologyInterfaceFlagEnum
        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean

        class GroupAddress; //type: Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress> group_address;


}; // Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress


class Pim::Standby::DefaultContext::GroupMapSources : public Entity
{
    public:
        GroupMapSources();
        ~GroupMapSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapSource; //type: Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource> > group_map_source;


}; // Pim::Standby::DefaultContext::GroupMapSources


class Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource : public Entity
{
    public:
        GroupMapSource();
        ~GroupMapSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimProtocolEnum
        YLeaf rp_address; //type: string
        YLeaf priority; //type: int32
        YLeaf holdtime; //type: int32
        YLeaf expires; //type: uint64
        YLeaf uptime; //type: uint64

        class SourceOfInformation; //type: Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation
        class GroupMapInformation; //type: Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation> source_of_information;


}; // Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource


class Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation


class Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation


class Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix


class Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress


class Pim::Standby::DefaultContext::TrafficCounters : public Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf elapsed_time; //type: uint32
        YLeaf inputs; //type: uint32
        YLeaf outputs; //type: uint32
        YLeaf format_error; //type: uint32
        YLeaf pakman_error; //type: uint32
        YLeaf standby_packets_error; //type: uint32
        YLeaf checksum_error; //type: uint32
        YLeaf socket_error; //type: uint32
        YLeaf send_queue_full; //type: uint32
        YLeaf boundary_acl_rx_drop; //type: uint32
        YLeaf boundary_acl_tx_drop; //type: uint32
        YLeaf no_socket_connection; //type: uint32
        YLeaf no_source_address; //type: uint32
        YLeaf input_hello; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf input_jp; //type: uint32
        YLeaf output_jp; //type: uint32
        YLeaf input_data_register; //type: uint32
        YLeaf input_null_register; //type: uint32
        YLeaf output_data_register; //type: uint32
        YLeaf output_null_register; //type: uint32
        YLeaf input_register_stop; //type: uint32
        YLeaf output_register_stop; //type: uint32
        YLeaf input_assert; //type: uint32
        YLeaf input_assert_batched; //type: uint32
        YLeaf output_assert; //type: uint32
        YLeaf output_assert_batched; //type: uint32
        YLeaf input_df_election; //type: uint32
        YLeaf output_df_election; //type: uint32
        YLeaf input_bsr_message; //type: uint32
        YLeaf output_bsr_message; //type: uint32
        YLeaf input_candidate_rp_advertisement; //type: uint32
        YLeaf output_candidate_rp_advertisement; //type: uint32
        YLeaf input_ecmp_redirect; //type: uint32
        YLeaf output_ecmp_redirect; //type: uint32
        YLeaf output_loop_error; //type: uint32
        YLeaf mldp_mdt_invalid_lsm_identifier; //type: uint32
        YLeaf input_no_idb_error; //type: uint32
        YLeaf input_no_vrf_error; //type: uint32
        YLeaf input_no_pim_error; //type: uint32
        YLeaf input_pim_version_error; //type: uint32
        YLeaf output_join_group; //type: uint32
        YLeaf output_prune_group; //type: uint32
        YLeaf output_join_prune_bytes; //type: uint32
        YLeaf output_hello_bytes; //type: uint32
        YLeaf non_supported_packets; //type: uint32
        YLeaf invalid_registers; //type: uint32
        YLeaf invalid_join_prunes; //type: uint32
        YLeaf packet_packman_error; //type: uint32
        YLeaf packet_read_socket_error; //type: uint32
        YLeaf packet_queue_last_clear; //type: uint32
        YLeaf packets_standby; //type: uint32
        YLeaf no_mdt_socket_connection; //type: uint32
        YLeaf mdt_send_queue_full; //type: uint32
        YLeaf mdt_socket_error; //type: uint32
        YLeaf mdt_join_tlv_sent; //type: uint32
        YLeaf mdt_join_tlv_received; //type: uint32
        YLeaf mdt_join_bad_type; //type: uint32
        YLeaf mdt_drop_local_source_address; //type: uint32
        YLeaf mdt_drop_null_local_address; //type: uint32
        YLeaf mdt_drop_no_idb; //type: uint32
        YLeaf mdt_drop_no_vrf; //type: uint32
        YLeaf invalid_destination_packets; //type: uint32
        YLeaf mdt_joins_drop_multiple_encapsulation; //type: uint32
        YLeaf truncated_pim_packets; //type: uint32
        YLeafList packet_enqueued; //type: list of  uint32
        YLeafList packet_dequeued; //type: list of  uint32
        YLeafList packet_queue_length; //type: list of  uint32
        YLeafList packet_queue_size; //type: list of  uint32
        YLeafList packet_tail_drop; //type: list of  uint32

        class PacketQueue; //type: Pim::Standby::DefaultContext::TrafficCounters::PacketQueue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TrafficCounters::PacketQueue> > packet_queue;


}; // Pim::Standby::DefaultContext::TrafficCounters


class Pim::Standby::DefaultContext::TrafficCounters::PacketQueue : public Entity
{
    public:
        PacketQueue();
        ~PacketQueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_queue_priority; //type: uint32

        class PacketQueueState; //type: Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState
        class PacketQueueStats; //type: Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState> packet_queue_state;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats> packet_queue_stats;


}; // Pim::Standby::DefaultContext::TrafficCounters::PacketQueue


class Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState : public Entity
{
    public:
        PacketQueueState();
        ~PacketQueueState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_queue_size; //type: uint32
        YLeaf queue_size_bytes; //type: uint32
        YLeaf queue_size_packets; //type: uint32



}; // Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState


class Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats : public Entity
{
    public:
        PacketQueueStats();
        ~PacketQueueStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enqueued_packets; //type: uint32
        YLeaf dequeued_packets; //type: uint32
        YLeaf high_water_mark_packets; //type: uint32
        YLeaf high_water_mark_bytes; //type: uint32
        YLeaf tail_drops; //type: uint32



}; // Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats


class Pim::Standby::DefaultContext::GroupMapRpfs : public Entity
{
    public:
        GroupMapRpfs();
        ~GroupMapRpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapRpf; //type: Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf> > group_map_rpf;


}; // Pim::Standby::DefaultContext::GroupMapRpfs

class PimTopologyEntryFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf kat;
        static const Enum::YLeaf aa;
        static const Enum::YLeaf pa;
        static const Enum::YLeaf ra;
        static const Enum::YLeaf ia;
        static const Enum::YLeaf rr;
        static const Enum::YLeaf lh;
        static const Enum::YLeaf dss;
        static const Enum::YLeaf dcc;
        static const Enum::YLeaf sr;
        static const Enum::YLeaf e;
        static const Enum::YLeaf ex;
        static const Enum::YLeaf ma;
        static const Enum::YLeaf mt;
        static const Enum::YLeaf mfa;
        static const Enum::YLeaf mfp;
        static const Enum::YLeaf mfb;

};

class PimAfiEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4_unicast;
        static const Enum::YLeaf ipv6_unicast;

};

class PimInterfaceEnum : public Enum
{
    public:
        static const Enum::YLeaf encap_interface;
        static const Enum::YLeaf decap_interface;
        static const Enum::YLeaf mdt_interface;

};

class PimShowRangeClientEnum : public Enum
{
    public:
        static const Enum::YLeaf no_client;
        static const Enum::YLeaf embedded_config;
        static const Enum::YLeaf embedded;
        static const Enum::YLeaf permanent;
        static const Enum::YLeaf auto_rp;
        static const Enum::YLeaf bsr;
        static const Enum::YLeaf config;
        static const Enum::YLeaf static_;

};

class PimProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf non_routable;
        static const Enum::YLeaf sparse_mode;
        static const Enum::YLeaf dense_mode;
        static const Enum::YLeaf bidir;
        static const Enum::YLeaf ssm;
        static const Enum::YLeaf maximum;
        static const Enum::YLeaf any;

};

class PimSafiEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf all;
        static const Enum::YLeaf default_;

};

class PimClientEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf configured_embedded_rp;
        static const Enum::YLeaf embedded;
        static const Enum::YLeaf permanent;
        static const Enum::YLeaf auto_rp;
        static const Enum::YLeaf bsr;
        static const Enum::YLeaf configured;
        static const Enum::YLeaf static_;

};

class PimShowProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf no_route;
        static const Enum::YLeaf sm;
        static const Enum::YLeaf dm;
        static const Enum::YLeaf bidir;
        static const Enum::YLeaf ssm;
        static const Enum::YLeaf maximum;
        static const Enum::YLeaf any;

};

class PimTopologyInterfaceFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf lh;
        static const Enum::YLeaf ld;
        static const Enum::YLeaf li;
        static const Enum::YLeaf ii;
        static const Enum::YLeaf id;
        static const Enum::YLeaf as;
        static const Enum::YLeaf ab;
        static const Enum::YLeaf ex;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_0_ */

