#ifndef _CISCO_IOS_XR_LIB_MPP_CFG_2_
#define _CISCO_IOS_XR_LIB_MPP_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_lib_mpp_cfg_0.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_mpp_cfg {


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols : public ydk::Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol : public ydk::Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol : public ydk::Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol : public ydk::Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol : public ydk::Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol : public ydk::Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol : public ydk::Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml : public ydk::Entity
{
    public:
        XrXml();
        ~XrXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer


}
}

#endif /* _CISCO_IOS_XR_LIB_MPP_CFG_2_ */

