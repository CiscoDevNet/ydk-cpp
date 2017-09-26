#ifndef _CISCO_IOS_XR_IPV4_BGP_CFG_2_
#define _CISCO_IOS_XR_IPV4_BGP_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_hop_count; //type: uint32
        ydk::YLeaf mpls_deactivation; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance : public ydk::Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf graceful_maintenance_activate; //type: boolean
        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends : public ydk::Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_prepends_disable; //type: boolean
        ydk::YLeaf as_prepends; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference : public ydk::Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_loc_pref_disable; //type: boolean
        ydk::YLeaf local_preference; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keychain_disable; //type: boolean
        ydk::YLeaf keychain_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address_disable; //type: boolean
        ydk::YLeaf local_ip_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn : public ydk::Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut : public ydk::Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId : public ydk::Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster_id_number; //type: uint32
        ydk::YLeaf cluster_id_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password_disable; //type: boolean
        ydk::YLeaf password; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize : public ydk::Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_receive_size; //type: uint32
        ydk::YLeaf bgp_receive_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs : public ydk::Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize : public ydk::Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_send_size; //type: uint32
        ydk::YLeaf bgp_send_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss : public ydk::Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcpmss_disable; //type: boolean
        ydk::YLeaf mss; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf min_accept_hold_time; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpTos
        ydk::YLeaf value_; //type: one of enumeration, uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering : public ydk::Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf update_in_filtering_attribute_filter_group; //type: string
        ydk::YLeaf update_in_filtering_syslog_disable; //type: empty
        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers : public ydk::Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_buffers; //type: uint32
        ydk::YLeaf non_circular_buffer; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs : public ydk::Entity
{
    public:
        VrfNeighborAfs();
        ~VrfNeighborAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNeighborAf; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf> > vrf_neighbor_af;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf : public ydk::Entity
{
    public:
        VrfNeighborAf();
        ~VrfNeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf send_ext_community_ebgp; //type: boolean
        ydk::YLeaf accept_route_legacy_rt; //type: boolean
        ydk::YLeaf send_community_ebgp; //type: boolean
        ydk::YLeaf next_hop_unchanged; //type: boolean
        ydk::YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfg
        ydk::YLeaf flowspec_validation; //type: BgpFlowspecValidationCfg
        ydk::YLeaf encapsulation_type; //type: BgpAfEncapsulation
        ydk::YLeaf enforce_multiple_labels; //type: boolean
        ydk::YLeaf as_override; //type: boolean
        ydk::YLeaf multipath; //type: empty
        ydk::YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf prefix_orf_policy; //type: string
        ydk::YLeaf aigp; //type: BgpAigpCfg
        ydk::YLeaf aigp_send_med; //type: BgpAigpCfg
        ydk::YLeaf allow_as_in; //type: uint32
        ydk::YLeaf advertise_orf; //type: BgpOrf
        ydk::YLeaf route_reflector_client; //type: boolean
        ydk::YLeaf next_hop_self; //type: boolean
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_weight; //type: uint32
        ydk::YLeaf af_group; //type: string
        ydk::YLeaf next_hop_unchanged_multipath; //type: boolean
        ydk::YLeaf accept_own; //type: boolean
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf advertise_permanent_network; //type: empty
        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4
        class AdvertiseL2VpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn
        class AdvertiseLocalL2VpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime
        class SiteOfOrigin; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn> advertise_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn> advertise_local_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity> aigp_cost_community; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate> default_originate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import> import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration> soft_reconfiguration;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable : public ydk::Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn : public ydk::Entity
{
    public:
        AdvertiseL2VpnEvpn();
        ~AdvertiseL2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn : public ydk::Entity
{
    public:
        AdvertiseLocalL2VpnEvpn();
        ~AdvertiseLocalL2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4 : public ydk::Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6 : public ydk::Entity
{
    public:
        AdvertiseLocalV6();
        ~AdvertiseLocalV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4 : public ydk::Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6 : public ydk::Entity
{
    public:
        AdvertiseV6();
        ~AdvertiseV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity : public ydk::Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf cost_community_id; //type: uint32
        ydk::YLeaf transitive; //type: boolean
        ydk::YLeaf cost_community_poi_type; //type: BgpAigpCfgPoi

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate : public ydk::Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes : public ydk::Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_limit; //type: uint32
        ydk::YLeaf warning_percentage; //type: uint32
        ydk::YLeaf warning_only; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf discard_extra_paths; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime : public ydk::Entity
{
    public:
        NeighborAfLongLivedGracefulRestartStaleTime();
        ~NeighborAfLongLivedGracefulRestartStaleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stale_time_send; //type: uint32
        ydk::YLeaf stale_time_accept; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin : public ydk::Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpSiteOfOrigin
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration : public ydk::Entity
{
    public:
        SoftReconfiguration();
        ~SoftReconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inbound_soft; //type: boolean
        ydk::YLeaf soft_always; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength : public ydk::Entity
{
    public:
        VrfNeighborPrefixLength();
        ~VrfNeighborPrefixLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf internal_vpn_client_ibgp_ce; //type: boolean
        ydk::YLeaf session_group_add_member; //type: string
        ydk::YLeaf egress_peer_engineering; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_stalepath_time; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf description; //type: string
        ydk::YLeaf neighbor_group_add_member; //type: string
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf neighbor_graceful_restart; //type: boolean
        ydk::YLeaf enforce_first_as; //type: boolean
        ydk::YLeaf idle_watch_time; //type: uint32
        ydk::YLeaf session_open_mode; //type: BgpTcpMode
        ydk::YLeaf ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf suppress_all_capabilities; //type: boolean
        ydk::YLeaf max_peers; //type: uint32
        ydk::YLeaf additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf propagate_dmz_link_bandwidth; //type: boolean
        ydk::YLeaf bfd_enable_modes; //type: BgpBfdEnableMode
        ydk::YLeaf ttl_security; //type: boolean
        ydk::YLeaf neighbor_graceful_restart_time; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf bfd_minimum_interval; //type: uint32
        ydk::YLeaf remote_as_list; //type: string
        ydk::YLeaf additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfg
        ydk::YLeaf ignore_connected_check_ebgp; //type: boolean
        ydk::YLeaf suppress_four_byte_as_capability; //type: boolean
        ydk::YLeaf update_source_interface; //type: string
        class VrfNeighborAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs
        class LocalAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress
        class BmpActivates; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates
        class EbgpMultihop; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop
        class RemoteAs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs
        class LocalAs; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs
        class Password; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password
        class AdvertisementInterval; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval
        class NeighborClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId
        class Tcpmss; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss
        class Tos; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos
        class UpdateInFiltering; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering
        class MsgLogOut; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut
        class ReceiveBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize
        class MsgLogIn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn
        class SendBufferSize; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize
        class Timers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers
        class Keychain; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain
        class GracefulMaintenance; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval> advertisement_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates> bmp_activates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain> keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs> local_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn> msg_log_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut> msg_log_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId> neighbor_cluster_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password> password;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize> receive_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs> remote_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize> send_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss> tcpmss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos> tos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering> update_in_filtering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs> vrf_neighbor_afs;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval : public ydk::Entity
{
    public:
        AdvertisementInterval();
        ~AdvertisementInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf minimum_interval_msecs; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates : public ydk::Entity
{
    public:
        BmpActivates();
        ~BmpActivates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BmpActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate> > bmp_activate;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate : public ydk::Entity
{
    public:
        BmpActivate();
        ~BmpActivate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_id; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_hop_count; //type: uint32
        ydk::YLeaf mpls_deactivation; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance : public ydk::Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf graceful_maintenance_activate; //type: boolean
        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends : public ydk::Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_prepends_disable; //type: boolean
        ydk::YLeaf as_prepends; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference : public ydk::Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_loc_pref_disable; //type: boolean
        ydk::YLeaf local_preference; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keychain_disable; //type: boolean
        ydk::YLeaf keychain_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address_disable; //type: boolean
        ydk::YLeaf local_ip_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn : public ydk::Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut : public ydk::Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_log_disable; //type: boolean
        ydk::YLeaf msg_log_inherit_disable; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId : public ydk::Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster_id_number; //type: uint32
        ydk::YLeaf cluster_id_address; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password_disable; //type: boolean
        ydk::YLeaf password; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize : public ydk::Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_receive_size; //type: uint32
        ydk::YLeaf bgp_receive_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs : public ydk::Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize : public ydk::Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf socket_send_size; //type: uint32
        ydk::YLeaf bgp_send_size; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss : public ydk::Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcpmss_disable; //type: boolean
        ydk::YLeaf mss; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf min_accept_hold_time; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpTos
        ydk::YLeaf value_; //type: one of enumeration, uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering : public ydk::Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf update_in_filtering_attribute_filter_group; //type: string
        ydk::YLeaf update_in_filtering_syslog_disable; //type: empty
        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers : public ydk::Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_buffers; //type: uint32
        ydk::YLeaf non_circular_buffer; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs : public ydk::Entity
{
    public:
        VrfNeighborAfs();
        ~VrfNeighborAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNeighborAf; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf> > vrf_neighbor_af;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf : public ydk::Entity
{
    public:
        VrfNeighborAf();
        ~VrfNeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf neighbor_af_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf send_ext_community_ebgp; //type: boolean
        ydk::YLeaf accept_route_legacy_rt; //type: boolean
        ydk::YLeaf send_community_ebgp; //type: boolean
        ydk::YLeaf next_hop_unchanged; //type: boolean
        ydk::YLeaf advertise_local_labeled_route; //type: BgpAdvertiseLocalLabeledRouteCfg
        ydk::YLeaf flowspec_validation; //type: BgpFlowspecValidationCfg
        ydk::YLeaf encapsulation_type; //type: BgpAfEncapsulation
        ydk::YLeaf enforce_multiple_labels; //type: boolean
        ydk::YLeaf as_override; //type: boolean
        ydk::YLeaf multipath; //type: empty
        ydk::YLeaf send_community_ebgp_graceful_shutdown; //type: boolean
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf prefix_orf_policy; //type: string
        ydk::YLeaf aigp; //type: BgpAigpCfg
        ydk::YLeaf aigp_send_med; //type: BgpAigpCfg
        ydk::YLeaf allow_as_in; //type: uint32
        ydk::YLeaf advertise_orf; //type: BgpOrf
        ydk::YLeaf route_reflector_client; //type: boolean
        ydk::YLeaf next_hop_self; //type: boolean
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_weight; //type: uint32
        ydk::YLeaf af_group; //type: string
        ydk::YLeaf next_hop_unchanged_multipath; //type: boolean
        ydk::YLeaf accept_own; //type: boolean
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf advertise_permanent_network; //type: empty
        class AigpCostCommunity; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity
        class AdvertiseDefImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6
        class AdvertiseDisable; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable
        class MaximumPrefixes; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes
        class RemovePrivateAsEntireAsPathInbound; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound
        class AdvertiseDefImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4
        class AdvertiseL2VpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn
        class AdvertiseLocalL2VpnEvpn; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn
        class NeighborAfLongLivedGracefulRestartStaleTime; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime
        class SiteOfOrigin; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin
        class AdvertiseV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6
        class AdvertiseLocalV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6
        class Import; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import
        class DefaultOriginate; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate
        class SoftReconfiguration; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration
        class AdvertiseVrfImpDisableV6; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6
        class AdvertiseV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4
        class AdvertiseLocalV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4
        class RemovePrivateAsEntireAsPath; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath
        class AdvertiseVrfImpDisableV4; //type: Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable> advertise_disable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn> advertise_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn> advertise_local_l2vpn_evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4> advertise_local_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6> advertise_local_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4> advertise_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6> advertise_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4> advertise_vrf_imp_disable_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6> advertise_vrf_imp_disable_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity> aigp_cost_community; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate> default_originate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import> import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration> soft_reconfiguration;
        
}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV4();
        ~AdvertiseDefImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseDefImpDisableV6();
        ~AdvertiseDefImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable : public ydk::Entity
{
    public:
        AdvertiseDisable();
        ~AdvertiseDisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn : public ydk::Entity
{
    public:
        AdvertiseL2VpnEvpn();
        ~AdvertiseL2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn : public ydk::Entity
{
    public:
        AdvertiseLocalL2VpnEvpn();
        ~AdvertiseLocalL2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4 : public ydk::Entity
{
    public:
        AdvertiseLocalV4();
        ~AdvertiseLocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6 : public ydk::Entity
{
    public:
        AdvertiseLocalV6();
        ~AdvertiseLocalV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4 : public ydk::Entity
{
    public:
        AdvertiseV4();
        ~AdvertiseV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6 : public ydk::Entity
{
    public:
        AdvertiseV6();
        ~AdvertiseV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf reorg_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV4();
        ~AdvertiseVrfImpDisableV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6 : public ydk::Entity
{
    public:
        AdvertiseVrfImpDisableV6();
        ~AdvertiseVrfImpDisableV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf adv_option; //type: BgpReorgOpt
        ydk::YLeaf rt_type; //type: BgpAdvRt

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity : public ydk::Entity
{
    public:
        AigpCostCommunity();
        ~AigpCostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf cost_community_id; //type: uint32
        ydk::YLeaf transitive; //type: boolean
        ydk::YLeaf cost_community_poi_type; //type: BgpAigpCfgPoi

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate : public ydk::Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf route_policy_name; //type: string

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes : public ydk::Entity
{
    public:
        MaximumPrefixes();
        ~MaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_limit; //type: uint32
        ydk::YLeaf warning_percentage; //type: uint32
        ydk::YLeaf warning_only; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf discard_extra_paths; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime : public ydk::Entity
{
    public:
        NeighborAfLongLivedGracefulRestartStaleTime();
        ~NeighborAfLongLivedGracefulRestartStaleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stale_time_send; //type: uint32
        ydk::YLeaf stale_time_accept; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPath();
        ~RemovePrivateAsEntireAsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound : public ydk::Entity
{
    public:
        RemovePrivateAsEntireAsPathInbound();
        ~RemovePrivateAsEntireAsPathInbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf entire; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin : public ydk::Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpSiteOfOrigin
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin


class Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration : public ydk::Entity
{
    public:
        SoftReconfiguration();
        ~SoftReconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inbound_soft; //type: boolean
        ydk::YLeaf soft_always; //type: boolean

}; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration

class BmpServerAll : public ydk::Entity
{
    public:
        BmpServerAll();
        ~BmpServerAll();

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

        ydk::YLeaf maximum_buffer_size; //type: uint32
        class RouteMonitoring; //type: BmpServerAll::RouteMonitoring

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::BmpServerAll::RouteMonitoring> route_monitoring;
        
}; // BmpServerAll


class BmpServerAll::RouteMonitoring : public ydk::Entity
{
    public:
        RouteMonitoring();
        ~RouteMonitoring();

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

        ydk::YLeaf policy; //type: BmpPolicySelect
        ydk::YLeaf direction; //type: BmpRouteDirection

}; // BmpServerAll::RouteMonitoring

class BmpServers : public ydk::Entity
{
    public:
        BmpServers();
        ~BmpServers();

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

        class BmpServer; //type: BmpServers::BmpServer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer> > bmp_server;
        
}; // BmpServers


class BmpServers::BmpServer : public ydk::Entity
{
    public:
        BmpServer();
        ~BmpServer();

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

        ydk::YLeaf server_id; //type: uint32
        ydk::YLeaf create; //type: empty
        ydk::YLeaf maximum_buffer_size; //type: uint32
        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf flapping_delay; //type: uint32
        ydk::YLeaf status_report_interval; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf bmptcp_maximum_segment_size; //type: uint32
        ydk::YLeaf bmptcp_keep_alive; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf update_source_interface; //type: string
        class InitialRefreshDelay; //type: BmpServers::BmpServer::InitialRefreshDelay
        class HostPort; //type: BmpServers::BmpServer::HostPort
        class Tos; //type: BmpServers::BmpServer::Tos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::HostPort> host_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::InitialRefreshDelay> initial_refresh_delay;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::Tos> tos;
        
}; // BmpServers::BmpServer


class BmpServers::BmpServer::HostPort : public ydk::Entity
{
    public:
        HostPort();
        ~HostPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: string
        ydk::YLeaf port; //type: uint16

}; // BmpServers::BmpServer::HostPort


class BmpServers::BmpServer::InitialRefreshDelay : public ydk::Entity
{
    public:
        InitialRefreshDelay();
        ~InitialRefreshDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf spread; //type: uint32
        ydk::YLeaf skip; //type: empty

}; // BmpServers::BmpServer::InitialRefreshDelay


class BmpServers::BmpServer::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpTos
        ydk::YLeaf value_; //type: one of enumeration, uint32

}; // BmpServers::BmpServer::Tos


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_CFG_2_ */

