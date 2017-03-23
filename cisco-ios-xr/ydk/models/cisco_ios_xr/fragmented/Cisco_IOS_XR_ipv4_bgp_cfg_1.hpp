#ifndef _CISCO_IOS_XR_IPV4_BGP_CFG_1_
#define _CISCO_IOS_XR_IPV4_BGP_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6 : public Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4 : public Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4 : public Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath : public Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf entire; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4 : public Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address_disable; //type: boolean
        YLeaf local_ip_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates : public Entity
{
    public:
        BmpActivates();
        ~BmpActivates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BmpActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate> > bmp_activate;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate : public Entity
{
    public:
        BmpActivate();
        ~BmpActivate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop : public Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_hop_count; //type: uint32
        YLeaf mpls_deactivation; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs : public Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs : public Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf no_prepend; //type: empty
        YLeaf disable; //type: empty
        YLeaf replace_as; //type: empty
        YLeaf dual_as; //type: empty



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf password_disable; //type: boolean
        YLeaf password; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval : public Entity
{
    public:
        AdvertisementInterval();
        ~AdvertisementInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_interval; //type: uint32
        YLeaf minimum_interval_msecs; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId : public Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_number; //type: uint32
        YLeaf cluster_id_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss : public Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcpmss_disable; //type: boolean
        YLeaf mss; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpTosEnum
        YLeaf value_; //type: one of uint32, enumeration



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering : public Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf update_in_filtering_attribute_filter_group; //type: string
        YLeaf update_in_filtering_syslog_disable; //type: empty

        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers : public Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number_of_buffers; //type: uint32
        YLeaf non_circular_buffer; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut : public Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize : public Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_receive_size; //type: uint32
        YLeaf bgp_receive_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn : public Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize : public Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_send_size; //type: uint32
        YLeaf bgp_send_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keepalive_interval; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf min_accept_hold_time; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain : public Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keychain_disable; //type: boolean
        YLeaf keychain_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance : public Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf graceful_maintenance_activate; //type: boolean

        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference : public Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_loc_pref_disable; //type: boolean
        YLeaf local_preference; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends : public Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_prepends_disable; //type: boolean
        YLeaf as_prepends; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength : public Entity
{
    public:
        NeighborPrefixLength();
        ~NeighborPrefixLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint32
        YLeaf neighbor_address; //type: string
        YLeaf internal_vpn_client_ibgpce; //type: boolean
        YLeaf session_group_add_member; //type: string
        YLeaf egress_peer_engineering; //type: boolean
        YLeaf neighbor_graceful_restart_stalepath_time; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf description; //type: string
        YLeaf neighbor_group_add_member; //type: string
        YLeaf ebgp_recv_dmz; //type: boolean
        YLeaf neighbor_graceful_restart; //type: boolean
        YLeaf enforce_first_as; //type: boolean
        YLeaf idle_watch_time; //type: uint32
        YLeaf session_open_mode; //type: BgpTcpModeEnum
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableModeEnum
        YLeaf suppress_all_capabilities; //type: boolean
        YLeaf max_peers; //type: uint32
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
        YLeaf propagate_dmz_link_bandwidth; //type: boolean
        YLeaf bfd_enable_modes; //type: BgpBfdEnableModeEnum
        YLeaf ttl_security; //type: boolean
        YLeaf neighbor_graceful_restart_time; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf bfd_minimum_interval; //type: uint32
        YLeaf remote_as_list; //type: string
        YLeaf additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
        YLeaf ignore_connected_check_ebgp; //type: boolean
        YLeaf suppress_four_byte_as_capability; //type: boolean
        YLeaf update_source_interface; //type: string

        class NeighborAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs
        class LocalAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress
        class BmpActivates; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates
        class EbgpMultihop; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop
        class RemoteAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs
        class LocalAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs
        class Password; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password
        class AdvertisementInterval; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval
        class NeighborClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId
        class Tcpmss; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss
        class Tos; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos
        class UpdateInFiltering; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering
        class MsgLogOut; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut
        class ReceiveBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize
        class MsgLogIn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn
        class SendBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize
        class Timers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers
        class Keychain; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain
        class GracefulMaintenance; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval> advertisement_interval; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates> bmp_activates;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain> keychain;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs> local_as;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn> msg_log_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut> msg_log_out;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs> neighbor_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId> neighbor_cluster_id;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password> password;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize> receive_buffer_size;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs> remote_as;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize> send_buffer_size;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss> tcpmss;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos> tos;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering> update_in_filtering;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs : public Entity
{
    public:
        NeighborAfs();
        ~NeighborAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborAf; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf> > neighbor_af;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf : public Entity
{
    public:
        NeighborAf();
        ~NeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        YLeaf l2vpn_signalling; //type: BgpSignalEnum
        YLeaf send_ext_community_ebgp; //type: boolean
        YLeaf accept_route_legacy_rt; //type: boolean
        YLeaf send_community_ebgp; //type: boolean
        YLeaf send_multicast_attr; //type: BgpSendMcastAttrCfgEnum
        YLeaf next_hop_unchanged; //type: boolean
        YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfgEnum
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf flowspec_validation; //type: BgpFlowspecValidationCfgEnum
        YLeaf encapsulation_type; //type: BgpAfEncapsulationEnum
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf as_override; //type: boolean
        YLeaf multipath; //type: empty
        YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        YLeaf activate; //type: empty
        YLeaf prefix_orf_policy; //type: string
        YLeaf aigp; //type: BgpAigpCfgEnum
        YLeaf aigp_send_med; //type: BgpAigpCfgEnum
        YLeaf allow_as_in; //type: uint32
        YLeaf advertise_orf; //type: BgpOrfEnum
        YLeaf route_reflector_client; //type: boolean
        YLeaf next_hop_self; //type: boolean
        YLeaf route_policy_in; //type: string
        YLeaf default_weight; //type: uint32
        YLeaf af_group; //type: string
        YLeaf next_hop_unchanged_multipath; //type: boolean
        YLeaf accept_own; //type: boolean
        YLeaf route_policy_out; //type: string
        YLeaf advertise_permanent_network; //type: empty

        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4
        class AdvertiseL2Vpnevpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn
        class AdvertiseLocalL2Vpnevpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn> advertise_l2vpnevpn;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn> advertise_local_l2vpnevpn;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity> aigp_cost_community; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate> default_originate;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import> import;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration> soft_reconfiguration;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity : public Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf cost_community_id; //type: uint32
        YLeaf transitive; //type: boolean
        YLeaf cost_community_poi_type; //type: BgpAigpCfgPoiEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6 : public Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable : public Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes : public Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_limit; //type: uint32
        YLeaf warning_percentage; //type: uint32
        YLeaf warning_only; //type: boolean
        YLeaf restart_time; //type: uint32
        YLeaf discard_extra_paths; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound : public Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf entire; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4 : public Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn : public Entity
{
    public:
        AdvertiseL2Vpnevpn();
        ~AdvertiseL2Vpnevpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn : public Entity
{
    public:
        AdvertiseLocalL2Vpnevpn();
        ~AdvertiseLocalL2Vpnevpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime : public Entity
{
    public:
        NeighborAfLongLivedGracefulRestartStaleTime();
        ~NeighborAfLongLivedGracefulRestartStaleTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stale_time_send; //type: uint32
        YLeaf stale_time_accept; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6 : public Entity
{
    public:
        AdvertiseV6();
        ~AdvertiseV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6 : public Entity
{
    public:
        AdvertiseLocalV6();
        ~AdvertiseLocalV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf import_stitching; //type: boolean
        YLeaf import_reoriginate; //type: boolean
        YLeaf import_reoriginate_stitching; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate : public Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration : public Entity
{
    public:
        SoftReconfiguration();
        ~SoftReconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf inbound_soft; //type: boolean
        YLeaf soft_always; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6 : public Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4 : public Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4 : public Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath : public Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf entire; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4 : public Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address_disable; //type: boolean
        YLeaf local_ip_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates : public Entity
{
    public:
        BmpActivates();
        ~BmpActivates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BmpActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate> > bmp_activate;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate : public Entity
{
    public:
        BmpActivate();
        ~BmpActivate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop : public Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_hop_count; //type: uint32
        YLeaf mpls_deactivation; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs : public Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs : public Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf no_prepend; //type: empty
        YLeaf disable; //type: empty
        YLeaf replace_as; //type: empty
        YLeaf dual_as; //type: empty



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf password_disable; //type: boolean
        YLeaf password; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval : public Entity
{
    public:
        AdvertisementInterval();
        ~AdvertisementInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_interval; //type: uint32
        YLeaf minimum_interval_msecs; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId : public Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_number; //type: uint32
        YLeaf cluster_id_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss : public Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcpmss_disable; //type: boolean
        YLeaf mss; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpTosEnum
        YLeaf value_; //type: one of uint32, enumeration



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering : public Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf update_in_filtering_attribute_filter_group; //type: string
        YLeaf update_in_filtering_syslog_disable; //type: empty

        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers : public Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number_of_buffers; //type: uint32
        YLeaf non_circular_buffer; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut : public Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize : public Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_receive_size; //type: uint32
        YLeaf bgp_receive_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn : public Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize : public Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_send_size; //type: uint32
        YLeaf bgp_send_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keepalive_interval; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf min_accept_hold_time; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain : public Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keychain_disable; //type: boolean
        YLeaf keychain_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance : public Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf graceful_maintenance_activate; //type: boolean

        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference : public Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_loc_pref_disable; //type: boolean
        YLeaf local_preference; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends : public Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_prepends_disable; //type: boolean
        YLeaf as_prepends; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups : public Entity
{
    public:
        NeighborGroups();
        ~NeighborGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborGroup; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup> > neighbor_group;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup : public Entity
{
    public:
        NeighborGroup();
        ~NeighborGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_group_name; //type: string
        YLeaf neighbor_group_add_member; //type: string
        YLeaf internal_vpn_client_ibgpce; //type: boolean
        YLeaf session_group_add_member; //type: string
        YLeaf egress_peer_engineering; //type: boolean
        YLeaf neighbor_graceful_restart_stalepath_time; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf description; //type: string
        YLeaf ebgp_recv_dmz; //type: boolean
        YLeaf neighbor_graceful_restart; //type: boolean
        YLeaf enforce_first_as; //type: boolean
        YLeaf idle_watch_time; //type: uint32
        YLeaf session_open_mode; //type: BgpTcpModeEnum
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableModeEnum
        YLeaf suppress_all_capabilities; //type: boolean
        YLeaf max_peers; //type: uint32
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
        YLeaf propagate_dmz_link_bandwidth; //type: boolean
        YLeaf bfd_enable_modes; //type: BgpBfdEnableModeEnum
        YLeaf ttl_security; //type: boolean
        YLeaf neighbor_graceful_restart_time; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf bfd_minimum_interval; //type: uint32
        YLeaf remote_as_list; //type: string
        YLeaf additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
        YLeaf ignore_connected_check_ebgp; //type: boolean
        YLeaf suppress_four_byte_as_capability; //type: boolean
        YLeaf update_source_interface; //type: string
        YLeaf create; //type: empty

        class NeighborGroupAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs
        class LocalAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress
        class BmpActivates; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates
        class EbgpMultihop; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop
        class RemoteAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs
        class LocalAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs
        class Password; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password
        class AdvertisementInterval; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval
        class NeighborClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId
        class Tcpmss; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss
        class Tos; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos
        class UpdateInFiltering; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering
        class MsgLogOut; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut
        class ReceiveBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize
        class MsgLogIn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn
        class SendBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize
        class Timers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers
        class Keychain; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain
        class GracefulMaintenance; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval> advertisement_interval; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates> bmp_activates;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain> keychain;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs> local_as;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn> msg_log_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut> msg_log_out;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId> neighbor_cluster_id;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs> neighbor_group_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password> password;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize> receive_buffer_size;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs> remote_as;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize> send_buffer_size;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss> tcpmss;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos> tos;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering> update_in_filtering;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs : public Entity
{
    public:
        NeighborGroupAfs();
        ~NeighborGroupAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborGroupAf; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf> > neighbor_group_af;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf : public Entity
{
    public:
        NeighborGroupAf();
        ~NeighborGroupAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        YLeaf l2vpn_signalling; //type: BgpSignalEnum
        YLeaf send_ext_community_ebgp; //type: boolean
        YLeaf accept_route_legacy_rt; //type: boolean
        YLeaf send_community_ebgp; //type: boolean
        YLeaf send_multicast_attr; //type: BgpSendMcastAttrCfgEnum
        YLeaf next_hop_unchanged; //type: boolean
        YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfgEnum
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf flowspec_validation; //type: BgpFlowspecValidationCfgEnum
        YLeaf encapsulation_type; //type: BgpAfEncapsulationEnum
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf as_override; //type: boolean
        YLeaf multipath; //type: empty
        YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        YLeaf activate; //type: empty
        YLeaf prefix_orf_policy; //type: string
        YLeaf aigp; //type: BgpAigpCfgEnum
        YLeaf aigp_send_med; //type: BgpAigpCfgEnum
        YLeaf allow_as_in; //type: uint32
        YLeaf advertise_orf; //type: BgpOrfEnum
        YLeaf route_reflector_client; //type: boolean
        YLeaf next_hop_self; //type: boolean
        YLeaf route_policy_in; //type: string
        YLeaf default_weight; //type: uint32
        YLeaf af_group; //type: string
        YLeaf next_hop_unchanged_multipath; //type: boolean
        YLeaf accept_own; //type: boolean
        YLeaf route_policy_out; //type: string
        YLeaf advertise_permanent_network; //type: empty

        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4
        class AdvertiseL2Vpnevpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn
        class AdvertiseLocalL2Vpnevpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime
        class SiteOfOrigin; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn> advertise_l2vpnevpn;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn> advertise_local_l2vpnevpn;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity> aigp_cost_community; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate> default_originate;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import> import;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin> site_of_origin;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration> soft_reconfiguration;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity : public Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf cost_community_id; //type: uint32
        YLeaf transitive; //type: boolean
        YLeaf cost_community_poi_type; //type: BgpAigpCfgPoiEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6 : public Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable : public Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes : public Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_limit; //type: uint32
        YLeaf warning_percentage; //type: uint32
        YLeaf warning_only; //type: boolean
        YLeaf restart_time; //type: uint32
        YLeaf discard_extra_paths; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound : public Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf entire; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4 : public Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn : public Entity
{
    public:
        AdvertiseL2Vpnevpn();
        ~AdvertiseL2Vpnevpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn : public Entity
{
    public:
        AdvertiseLocalL2Vpnevpn();
        ~AdvertiseLocalL2Vpnevpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime : public Entity
{
    public:
        NeighborAfLongLivedGracefulRestartStaleTime();
        ~NeighborAfLongLivedGracefulRestartStaleTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stale_time_send; //type: uint32
        YLeaf stale_time_accept; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin : public Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpSiteOfOriginEnum
        YLeaf as_xx; //type: uint32
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf address_index; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6 : public Entity
{
    public:
        AdvertiseV6();
        ~AdvertiseV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6 : public Entity
{
    public:
        AdvertiseLocalV6();
        ~AdvertiseLocalV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf import_stitching; //type: boolean
        YLeaf import_reoriginate; //type: boolean
        YLeaf import_reoriginate_stitching; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate : public Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration : public Entity
{
    public:
        SoftReconfiguration();
        ~SoftReconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf inbound_soft; //type: boolean
        YLeaf soft_always; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6 : public Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4 : public Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4 : public Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath : public Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf entire; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4 : public Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address_disable; //type: boolean
        YLeaf local_ip_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates : public Entity
{
    public:
        BmpActivates();
        ~BmpActivates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BmpActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate> > bmp_activate;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate : public Entity
{
    public:
        BmpActivate();
        ~BmpActivate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop : public Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_hop_count; //type: uint32
        YLeaf mpls_deactivation; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs : public Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs : public Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf no_prepend; //type: empty
        YLeaf disable; //type: empty
        YLeaf replace_as; //type: empty
        YLeaf dual_as; //type: empty



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf password_disable; //type: boolean
        YLeaf password; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval : public Entity
{
    public:
        AdvertisementInterval();
        ~AdvertisementInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_interval; //type: uint32
        YLeaf minimum_interval_msecs; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId : public Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_number; //type: uint32
        YLeaf cluster_id_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss : public Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcpmss_disable; //type: boolean
        YLeaf mss; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpTosEnum
        YLeaf value_; //type: one of uint32, enumeration



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering : public Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf update_in_filtering_attribute_filter_group; //type: string
        YLeaf update_in_filtering_syslog_disable; //type: empty

        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers : public Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number_of_buffers; //type: uint32
        YLeaf non_circular_buffer; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut : public Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize : public Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_receive_size; //type: uint32
        YLeaf bgp_receive_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn : public Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize : public Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_send_size; //type: uint32
        YLeaf bgp_send_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keepalive_interval; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf min_accept_hold_time; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain : public Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keychain_disable; //type: boolean
        YLeaf keychain_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance : public Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf graceful_maintenance_activate; //type: boolean

        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference : public Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_loc_pref_disable; //type: boolean
        YLeaf local_preference; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends : public Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_prepends_disable; //type: boolean
        YLeaf as_prepends; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups : public Entity
{
    public:
        AfGroups();
        ~AfGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AfGroup; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup> > af_group;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup : public Entity
{
    public:
        AfGroup();
        ~AfGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_group_name; //type: string

        class AfGroupAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs> af_group_afs;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs : public Entity
{
    public:
        AfGroupAfs();
        ~AfGroupAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AfGroupAf; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf> > af_group_af;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf : public Entity
{
    public:
        AfGroupAf();
        ~AfGroupAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf af_group; //type: string
        YLeaf create; //type: empty
        YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        YLeaf l2vpn_signalling; //type: BgpSignalEnum
        YLeaf send_ext_community_ebgp; //type: boolean
        YLeaf accept_route_legacy_rt; //type: boolean
        YLeaf send_community_ebgp; //type: boolean
        YLeaf send_multicast_attr; //type: BgpSendMcastAttrCfgEnum
        YLeaf next_hop_unchanged; //type: boolean
        YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfgEnum
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf flowspec_validation; //type: BgpFlowspecValidationCfgEnum
        YLeaf encapsulation_type; //type: BgpAfEncapsulationEnum
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf as_override; //type: boolean
        YLeaf multipath; //type: empty
        YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        YLeaf prefix_orf_policy; //type: string
        YLeaf aigp; //type: BgpAigpCfgEnum
        YLeaf aigp_send_med; //type: BgpAigpCfgEnum
        YLeaf allow_as_in; //type: uint32
        YLeaf advertise_orf; //type: BgpOrfEnum
        YLeaf route_reflector_client; //type: boolean
        YLeaf next_hop_self; //type: boolean
        YLeaf route_policy_in; //type: string
        YLeaf default_weight; //type: uint32
        YLeaf next_hop_unchanged_multipath; //type: boolean
        YLeaf accept_own; //type: boolean
        YLeaf route_policy_out; //type: string
        YLeaf advertise_permanent_network; //type: empty

        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4
        class AdvertiseL2Vpnevpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn
        class AdvertiseLocalL2Vpnevpn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime
        class SiteOfOrigin; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn> advertise_l2vpnevpn;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn> advertise_local_l2vpnevpn;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity> aigp_cost_community; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate> default_originate;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import> import;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin> site_of_origin;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration> soft_reconfiguration;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity : public Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf cost_community_id; //type: uint32
        YLeaf transitive; //type: boolean
        YLeaf cost_community_poi_type; //type: BgpAigpCfgPoiEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6 : public Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable : public Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes : public Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_limit; //type: uint32
        YLeaf warning_percentage; //type: uint32
        YLeaf warning_only; //type: boolean
        YLeaf restart_time; //type: uint32
        YLeaf discard_extra_paths; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound : public Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf entire; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4 : public Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn : public Entity
{
    public:
        AdvertiseL2Vpnevpn();
        ~AdvertiseL2Vpnevpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn : public Entity
{
    public:
        AdvertiseLocalL2Vpnevpn();
        ~AdvertiseLocalL2Vpnevpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime : public Entity
{
    public:
        NeighborAfLongLivedGracefulRestartStaleTime();
        ~NeighborAfLongLivedGracefulRestartStaleTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stale_time_send; //type: uint32
        YLeaf stale_time_accept; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin : public Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpSiteOfOriginEnum
        YLeaf as_xx; //type: uint32
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf address_index; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6 : public Entity
{
    public:
        AdvertiseV6();
        ~AdvertiseV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6 : public Entity
{
    public:
        AdvertiseLocalV6();
        ~AdvertiseLocalV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf import_stitching; //type: boolean
        YLeaf import_reoriginate; //type: boolean
        YLeaf import_reoriginate_stitching; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate : public Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration : public Entity
{
    public:
        SoftReconfiguration();
        ~SoftReconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf inbound_soft; //type: boolean
        YLeaf soft_always; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6 : public Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4 : public Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4 : public Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf reorg_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath : public Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf entire; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4 : public Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf adv_option; //type: BgpReorgOptEnum
        YLeaf rt_type; //type: BgpAdvRtEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups : public Entity
{
    public:
        SessionGroups();
        ~SessionGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionGroup; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup> > session_group;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup : public Entity
{
    public:
        SessionGroup();
        ~SessionGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_group_name; //type: string
        YLeaf session_group_add_member; //type: string
        YLeaf internal_vpn_client_ibgpce; //type: boolean
        YLeaf egress_peer_engineering; //type: boolean
        YLeaf neighbor_graceful_restart_stalepath_time; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf description; //type: string
        YLeaf ebgp_recv_dmz; //type: boolean
        YLeaf neighbor_graceful_restart; //type: boolean
        YLeaf enforce_first_as; //type: boolean
        YLeaf idle_watch_time; //type: uint32
        YLeaf session_open_mode; //type: BgpTcpModeEnum
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableModeEnum
        YLeaf suppress_all_capabilities; //type: boolean
        YLeaf max_peers; //type: uint32
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
        YLeaf propagate_dmz_link_bandwidth; //type: boolean
        YLeaf bfd_enable_modes; //type: BgpBfdEnableModeEnum
        YLeaf ttl_security; //type: boolean
        YLeaf neighbor_graceful_restart_time; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf bfd_minimum_interval; //type: uint32
        YLeaf remote_as_list; //type: string
        YLeaf additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
        YLeaf ignore_connected_check_ebgp; //type: boolean
        YLeaf suppress_four_byte_as_capability; //type: boolean
        YLeaf update_source_interface; //type: string
        YLeaf create; //type: empty

        class LocalAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress
        class BmpActivates; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates
        class EbgpMultihop; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop
        class RemoteAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs
        class LocalAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs
        class Password; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password
        class AdvertisementInterval; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval
        class NeighborClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId
        class Tcpmss; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss
        class Tos; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos
        class UpdateInFiltering; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering
        class MsgLogOut; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut
        class ReceiveBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize
        class MsgLogIn; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn
        class SendBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize
        class Timers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers
        class Keychain; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain
        class GracefulMaintenance; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval> advertisement_interval; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates> bmp_activates;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain> keychain;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs> local_as;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn> msg_log_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut> msg_log_out;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId> neighbor_cluster_id;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password> password;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize> receive_buffer_size;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs> remote_as;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize> send_buffer_size;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss> tcpmss;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos> tos;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering> update_in_filtering;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address_disable; //type: boolean
        YLeaf local_ip_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates : public Entity
{
    public:
        BmpActivates();
        ~BmpActivates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BmpActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate> > bmp_activate;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate : public Entity
{
    public:
        BmpActivate();
        ~BmpActivate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop : public Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_hop_count; //type: uint32
        YLeaf mpls_deactivation; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs : public Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs : public Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf no_prepend; //type: empty
        YLeaf disable; //type: empty
        YLeaf replace_as; //type: empty
        YLeaf dual_as; //type: empty



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf password_disable; //type: boolean
        YLeaf password; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_CFG_1_ */

