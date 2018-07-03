#ifndef _CISCO_IOS_XR_LMP_OPER_
#define _CISCO_IOS_XR_LMP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lmp_oper {

class Lmp : public ydk::Entity
{
    public:
        Lmp();
        ~Lmp();

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

        class GlobalStatus; //type: Lmp::GlobalStatus
        class Clients; //type: Lmp::Clients
        class GmplsUni; //type: Lmp::GmplsUni
        class ComponentLinkIds; //type: Lmp::ComponentLinkIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GlobalStatus> global_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni> gmpls_uni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::ComponentLinkIds> component_link_ids;
        
}; // Lmp


class Lmp::GlobalStatus : public ydk::Entity
{
    public:
        GlobalStatus();
        ~GlobalStatus();

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

        ydk::YLeaf local_ouni_lmp_node_id_interface; //type: string
        ydk::YLeaf local_ouni_lmp_node_id_type; //type: OlmRouterId
        ydk::YLeaf is_ouni_config_exist; //type: boolean
        ydk::YLeaf is_gmpls_nni_config_exist; //type: boolean
        ydk::YLeaf is_gmpls_uni_config_exist; //type: boolean
        class LocalOuniLmpNodeId; //type: Lmp::GlobalStatus::LocalOuniLmpNodeId
        class LocalMplsTeLmpNodeId; //type: Lmp::GlobalStatus::LocalMplsTeLmpNodeId
        class LocalGmplsUniLmpNodeId; //type: Lmp::GlobalStatus::LocalGmplsUniLmpNodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GlobalStatus::LocalOuniLmpNodeId> local_ouni_lmp_node_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GlobalStatus::LocalMplsTeLmpNodeId> local_mpls_te_lmp_node_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GlobalStatus::LocalGmplsUniLmpNodeId> local_gmpls_uni_lmp_node_id;
        
}; // Lmp::GlobalStatus


class Lmp::GlobalStatus::LocalOuniLmpNodeId : public ydk::Entity
{
    public:
        LocalOuniLmpNodeId();
        ~LocalOuniLmpNodeId();

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

        class Address; //type: Lmp::GlobalStatus::LocalOuniLmpNodeId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GlobalStatus::LocalOuniLmpNodeId::Address> address;
        
}; // Lmp::GlobalStatus::LocalOuniLmpNodeId


class Lmp::GlobalStatus::LocalOuniLmpNodeId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GlobalStatus::LocalOuniLmpNodeId::Address


class Lmp::GlobalStatus::LocalMplsTeLmpNodeId : public ydk::Entity
{
    public:
        LocalMplsTeLmpNodeId();
        ~LocalMplsTeLmpNodeId();

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

        class Address; //type: Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address> address;
        
}; // Lmp::GlobalStatus::LocalMplsTeLmpNodeId


class Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address


class Lmp::GlobalStatus::LocalGmplsUniLmpNodeId : public ydk::Entity
{
    public:
        LocalGmplsUniLmpNodeId();
        ~LocalGmplsUniLmpNodeId();

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

        class Address; //type: Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address> address;
        
}; // Lmp::GlobalStatus::LocalGmplsUniLmpNodeId


class Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address


class Lmp::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

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

        class Client; //type: Lmp::Clients::Client

        ydk::YList client;
        
}; // Lmp::Clients


class Lmp::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf client_name; //type: string
        ydk::YLeaf node_name; //type: string
        class ConnectedTime; //type: Lmp::Clients::Client::ConnectedTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::Clients::Client::ConnectedTime> connected_time;
        
}; // Lmp::Clients::Client


class Lmp::Clients::Client::ConnectedTime : public ydk::Entity
{
    public:
        ConnectedTime();
        ~ConnectedTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_connected; //type: uint32

}; // Lmp::Clients::Client::ConnectedTime


class Lmp::GmplsUni : public ydk::Entity
{
    public:
        GmplsUni();
        ~GmplsUni();

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

        class TeLinks; //type: Lmp::GmplsUni::TeLinks
        class Neighbors; //type: Lmp::GmplsUni::Neighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks> te_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors> neighbors;
        
}; // Lmp::GmplsUni


class Lmp::GmplsUni::TeLinks : public ydk::Entity
{
    public:
        TeLinks();
        ~TeLinks();

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

        class TeLink; //type: Lmp::GmplsUni::TeLinks::TeLink

        ydk::YList te_link;
        
}; // Lmp::GmplsUni::TeLinks


class Lmp::GmplsUni::TeLinks::TeLink : public ydk::Entity
{
    public:
        TeLink();
        ~TeLink();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol_owner; //type: OlmObjectOwner
        ydk::YLeaf neighbor_name; //type: string
        ydk::YLeaf ipcc_id; //type: uint32
        ydk::YLeaf ipc_ctype; //type: Olmipcc
        ydk::YLeaf ipcc_name; //type: string
        ydk::YLeaf local_mux_cap; //type: OlmMuxCap
        ydk::YLeaf remote_mux_cap; //type: OlmMuxCap
        ydk::YLeaf im_state; //type: OlmCompLinkImState
        ydk::YLeaf lmp_state; //type: OlmCompLinkLmpState
        ydk::YLeaf te_link_lmp_state; //type: OlmteLinkLmpState
        ydk::YLeaf gmpls_te_link_local_minimum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_local_maximum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_neighbor_minimum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_neighbor_maximum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_local_encoding_type; //type: OlmLinkEncoding
        ydk::YLeaf gmpls_te_link_neighbor_encoding_type; //type: OlmLinkEncoding
        ydk::YLeaf is_lmp_enabled; //type: boolean
        ydk::YLeaf lmp_transmit_msg_id; //type: uint32
        ydk::YLeaf lmp_receive_msg_id; //type: uint32
        ydk::YLeafList lmp_comp_link_status; //type: list of  OlmCompLinkLmpStatus
        class LocalLinkId; //type: Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId
        class RemoteLinkId; //type: Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId
        class LocalTeLinkId; //type: Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId
        class RemoteTeLinkId; //type: Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId
        class NeighborAddress; //type: Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress
        class RemoteIpccAddress; //type: Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId> local_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId> remote_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId> local_te_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId> remote_te_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress> remote_ipcc_address;
        
}; // Lmp::GmplsUni::TeLinks::TeLink


class Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId : public ydk::Entity
{
    public:
        LocalLinkId();
        ~LocalLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address> address;
        
}; // Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId


class Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address


class Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId : public ydk::Entity
{
    public:
        RemoteLinkId();
        ~RemoteLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address> address;
        
}; // Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId


class Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address


class Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId : public ydk::Entity
{
    public:
        LocalTeLinkId();
        ~LocalTeLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address> address;
        
}; // Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId


class Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address


class Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId : public ydk::Entity
{
    public:
        RemoteTeLinkId();
        ~RemoteTeLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address> address;
        
}; // Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId


class Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address


class Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address> address;
        
}; // Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress


class Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address


class Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress : public ydk::Entity
{
    public:
        RemoteIpccAddress();
        ~RemoteIpccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address> address;
        
}; // Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress


class Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address


class Lmp::GmplsUni::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Lmp::GmplsUni::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Lmp::GmplsUni::Neighbors


class Lmp::GmplsUni::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf neighbor_name; //type: string
        ydk::YLeaf protocol_owner; //type: OlmObjectOwner
        ydk::YLeaf ipcc_id; //type: uint32
        ydk::YLeaf is_lmp_enabled; //type: boolean
        ydk::YLeaf is_lmp_config_disabled; //type: boolean
        ydk::YLeaf lmp_transmit_msg_id; //type: uint32
        ydk::YLeaf lmp_receive_msg_id; //type: uint32
        ydk::YLeaf lmp_link_sum_transmit_packets; //type: uint32
        ydk::YLeaf lmp_link_sum_receive_packets; //type: uint32
        class NeighborAddress; //type: Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress
        class TeLink; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink
        class Ipcc; //type: Lmp::GmplsUni::Neighbors::Neighbor::Ipcc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress> neighbor_address;
        ydk::YList te_link;
        ydk::YList ipcc;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor


class Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress


class Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink : public ydk::Entity
{
    public:
        TeLink();
        ~TeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol_owner; //type: OlmObjectOwner
        ydk::YLeaf neighbor_name; //type: string
        ydk::YLeaf ipcc_id; //type: uint32
        ydk::YLeaf ipc_ctype; //type: Olmipcc
        ydk::YLeaf ipcc_name; //type: string
        ydk::YLeaf local_mux_cap; //type: OlmMuxCap
        ydk::YLeaf remote_mux_cap; //type: OlmMuxCap
        ydk::YLeaf im_state; //type: OlmCompLinkImState
        ydk::YLeaf lmp_state; //type: OlmCompLinkLmpState
        ydk::YLeaf te_link_lmp_state; //type: OlmteLinkLmpState
        ydk::YLeaf gmpls_te_link_local_minimum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_local_maximum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_neighbor_minimum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_neighbor_maximum_bandwidth; //type: uint64
        ydk::YLeaf gmpls_te_link_local_encoding_type; //type: OlmLinkEncoding
        ydk::YLeaf gmpls_te_link_neighbor_encoding_type; //type: OlmLinkEncoding
        ydk::YLeaf is_lmp_enabled; //type: boolean
        ydk::YLeaf lmp_transmit_msg_id; //type: uint32
        ydk::YLeaf lmp_receive_msg_id; //type: uint32
        ydk::YLeafList lmp_comp_link_status; //type: list of  OlmCompLinkLmpStatus
        class LocalLinkId; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId
        class RemoteLinkId; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId
        class LocalTeLinkId; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId
        class RemoteTeLinkId; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId
        class NeighborAddress; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress
        class RemoteIpccAddress; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId> local_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId> remote_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId> local_te_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId> remote_te_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress> remote_ipcc_address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId : public ydk::Entity
{
    public:
        LocalLinkId();
        ~LocalLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId : public ydk::Entity
{
    public:
        RemoteLinkId();
        ~RemoteLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId : public ydk::Entity
{
    public:
        LocalTeLinkId();
        ~LocalTeLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId : public ydk::Entity
{
    public:
        RemoteTeLinkId();
        ~RemoteTeLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress : public ydk::Entity
{
    public:
        RemoteIpccAddress();
        ~RemoteIpccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress


class Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address


class Lmp::GmplsUni::Neighbors::Neighbor::Ipcc : public ydk::Entity
{
    public:
        Ipcc();
        ~Ipcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipcc_id; //type: uint32
        ydk::YLeaf ipc_ctype; //type: Olmipcc
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_name; //type: string
        ydk::YLeaf ipcc_state; //type: OlmipccState
        ydk::YLeaf lmp_hello_interval; //type: uint32
        ydk::YLeaf lmp_hello_interval_minimum; //type: uint32
        ydk::YLeaf lmp_hello_interval_maximum; //type: uint32
        ydk::YLeaf lmp_hello_dead_interval; //type: uint32
        ydk::YLeaf lmp_hello_dead_interval_minimum; //type: uint32
        ydk::YLeaf lmp_hello_dead_interval_maximum; //type: uint32
        ydk::YLeaf lmp_hello_transmit_packets; //type: uint32
        ydk::YLeaf lmp_hello_receive_packets; //type: uint32
        ydk::YLeaf lmp_hello_transmit_packet_sequence_number; //type: uint32
        ydk::YLeaf lmp_hello_receive_packet_sequence_number; //type: uint32
        ydk::YLeaf lmp_transmit_msg_id; //type: uint32
        ydk::YLeaf lmp_receive_msg_id; //type: uint32
        ydk::YLeaf lmp_link_sum_transmit_packets; //type: uint32
        ydk::YLeaf lmp_link_sum_receive_packets; //type: uint32
        class RemoteIpccAddress; //type: Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress
        class SourceIpCcAddress; //type: Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress> remote_ipcc_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress> source_ip_cc_address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::Ipcc


class Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress : public ydk::Entity
{
    public:
        RemoteIpccAddress();
        ~RemoteIpccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress


class Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address


class Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress : public ydk::Entity
{
    public:
        SourceIpCcAddress();
        ~SourceIpCcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_oper::Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address> address;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress


class Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddrTypeId
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf unnumbered_address; //type: uint32

}; // Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address


class Lmp::ComponentLinkIds : public ydk::Entity
{
    public:
        ComponentLinkIds();
        ~ComponentLinkIds();

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

        class ComponentLinkId; //type: Lmp::ComponentLinkIds::ComponentLinkId

        ydk::YList component_link_id;
        
}; // Lmp::ComponentLinkIds


class Lmp::ComponentLinkIds::ComponentLinkId : public ydk::Entity
{
    public:
        ComponentLinkId();
        ~ComponentLinkId();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf component_interface_id; //type: uint32

}; // Lmp::ComponentLinkIds::ComponentLinkId

class OlmCompLinkImState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf comp_link_im_state_oir;
        static const ydk::Enum::YLeaf comp_link_im_state_down;
        static const ydk::Enum::YLeaf comp_link_im_state_admin_down;
        static const ydk::Enum::YLeaf comp_link_im_state_up;
        static const ydk::Enum::YLeaf comp_link_im_state_unknown;

};

class OlmLinkEncoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ansi_etsi_pdh;
        static const ydk::Enum::YLeaf reserved1;
        static const ydk::Enum::YLeaf sdh_sonet;
        static const ydk::Enum::YLeaf reserved2;
        static const ydk::Enum::YLeaf digital_wrapper;
        static const ydk::Enum::YLeaf lambda;
        static const ydk::Enum::YLeaf fiber;
        static const ydk::Enum::YLeaf reserved3;
        static const ydk::Enum::YLeaf fiber_channel;
        static const ydk::Enum::YLeaf lencode_unknown;

};

class OlmMuxCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf psc1;
        static const ydk::Enum::YLeaf psc2;
        static const ydk::Enum::YLeaf psc3;
        static const ydk::Enum::YLeaf psc4;
        static const ydk::Enum::YLeaf l2sc;
        static const ydk::Enum::YLeaf tdm;
        static const ydk::Enum::YLeaf lsc;
        static const ydk::Enum::YLeaf fsc;
        static const ydk::Enum::YLeaf unknown_mux_cap;

};

class OlmCompLinkLmpStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf comp_link_lmp_status_if_id_mismatch;
        static const ydk::Enum::YLeaf comp_link_lmp_status_switch_cap_mismatch;

};

class OlmAddrTypeId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown_address;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf unnumbered;

};

class OlmCompLinkLmpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf comp_link_lmp_state_down;
        static const ydk::Enum::YLeaf comp_link_lmp_state_test;
        static const ydk::Enum::YLeaf comp_link_lmp_state_passive_test;
        static const ydk::Enum::YLeaf comp_link_lmp_state_up_free;
        static const ydk::Enum::YLeaf comp_link_lmp_state_up_allocated;
        static const ydk::Enum::YLeaf comp_link_lmp_state_unknown;

};

class OlmObjectOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ouni;
        static const ydk::Enum::YLeaf gmpls_nni;
        static const ydk::Enum::YLeaf gmpls_uni;

};

class OlmteLinkLmpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_link_lmp_state_down;
        static const ydk::Enum::YLeaf te_link_lmp_state_init;
        static const ydk::Enum::YLeaf te_link_lmp_state_up;
        static const ydk::Enum::YLeaf te_link_lmp_state_degraded;
        static const ydk::Enum::YLeaf te_link_lmp_state_unknown;

};

class Olmipcc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipcc_type_global_routed;
        static const ydk::Enum::YLeaf ipcc_type_global_if_bound;
        static const ydk::Enum::YLeaf ipcc_type_ldcc_sdcc;
        static const ydk::Enum::YLeaf ipcc_type_unknown;

};

class OlmipccState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipcc_state_oir_removed;
        static const ydk::Enum::YLeaf ipcc_state_admin_down;
        static const ydk::Enum::YLeaf ipcc_state_down;
        static const ydk::Enum::YLeaf ipcc_state_cfg_send;
        static const ydk::Enum::YLeaf ipcc_state_cfg_rcv;
        static const ydk::Enum::YLeaf ipcc_state_active;
        static const ydk::Enum::YLeaf ipcc_state_up;
        static const ydk::Enum::YLeaf ipcc_state_going_down;
        static const ydk::Enum::YLeaf ipcc_state_unknown;

};

class OlmRouterId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_configured;
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf protocol_based_address;
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf network_element;
        static const ydk::Enum::YLeaf unknown_type;

};


}
}

#endif /* _CISCO_IOS_XR_LMP_OPER_ */

